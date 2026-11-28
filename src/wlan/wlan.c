/* cflags: -O2 -frename-registers */
/* cflags[100,102,103,150,152]: -O2 -frename-registers -fno-builtin */
#include "common.h"
#include "k1.h"
#include "wlan_decls.h"

INCLUDE_ASM("nonmatchings/wlan", func_00000000);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/wlan", D_00018B44);

INCLUDE_RODATA("nonmatchings/wlan", D_00018B48);

INCLUDE_RODATA("nonmatchings/wlan", D_00018B60);

INCLUDE_RODATA("nonmatchings/wlan", D_00018B7C);

INCLUDE_RODATA("nonmatchings/wlan", D_00018B94);

INCLUDE_RODATA("nonmatchings/wlan", D_00018BAC);

INCLUDE_RODATA("nonmatchings/wlan", D_00018BC0);

INCLUDE_RODATA("nonmatchings/wlan", D_00018BD8);

INCLUDE_RODATA("nonmatchings/wlan", D_00018BEC);

INCLUDE_RODATA("nonmatchings/wlan", D_00018C08);

INCLUDE_RODATA("nonmatchings/wlan", D_00018C20);

INCLUDE_RODATA("nonmatchings/wlan", D_00018C38);

INCLUDE_RODATA("nonmatchings/wlan", D_00018C58);

INCLUDE_RODATA("nonmatchings/wlan", D_00018C6C);

INCLUDE_RODATA("nonmatchings/wlan", D_00018C7C);

INCLUDE_RODATA("nonmatchings/wlan", D_00018CA4);

INCLUDE_RODATA("nonmatchings/wlan", D_00018CB0);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/wlan", D_00018CC8_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/wlan", D_00018CC8_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/wlan", D_00018CC8_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/wlan", D_00018CD8);

INCLUDE_RODATA("nonmatchings/wlan", D_00018DB8);

INCLUDE_RODATA("nonmatchings/wlan", D_00018DCC);

INCLUDE_RODATA("nonmatchings/wlan", D_00018ECC);

INCLUDE_RODATA("nonmatchings/wlan", D_00018EF4);

INCLUDE_RODATA("nonmatchings/wlan", D_00018F24);

INCLUDE_RODATA("nonmatchings/wlan", D_00018F28);

INCLUDE_RODATA("nonmatchings/wlan", D_00018F38);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/wlan", D_00018FD8_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/wlan", D_00018FD8_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/wlan", D_00018FD8_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/wlan", D_00018FDC);

INCLUDE_RODATA("nonmatchings/wlan", D_00018FE0);

INCLUDE_RODATA("nonmatchings/wlan", D_00018FE4);

INCLUDE_RODATA("nonmatchings/wlan", D_00019024);

INCLUDE_RODATA("nonmatchings/wlan", D_0001902C);

INCLUDE_RODATA("nonmatchings/wlan", D_00019034);

INCLUDE_RODATA("nonmatchings/wlan", D_00019050);
#endif

INCLUDE_RODATA("nonmatchings/wlan", D_00018A00);

INCLUDE_RODATA("nonmatchings/wlan", D_00018A3C);

INCLUDE_RODATA("nonmatchings/wlan", D_00018A48);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_000173B8);

INCLUDE_RODATA("nonmatchings/wlan", D_000173CC);

INCLUDE_RODATA("nonmatchings/wlan", D_000173F4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018A9C);

INCLUDE_RODATA("nonmatchings/wlan", D_00018AB0);

INCLUDE_RODATA("nonmatchings/wlan", D_00018AD8);
#endif

INCLUDE_RODATA("nonmatchings/wlan", D_00018AEC);

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/wlan", func_000000C8);
#else
INCLUDE_ASM("nonmatchings/wlan", sceWlanDevInit);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/wlan", func_000003C0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00000330);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/wlan", func_000003E8);
#endif

#if FW_VERSION < 150
s32 func_00000620(SceWlanSoftc *sc) {
    SceWlanMac *mac;

    sc->unk90 = 6;
    sc->unk94 = 1;
    sc->unk98 = 2;
    sc->unk9C = 0;
    sc->unkA0 = 0x10;
    sc->unk178 = 0x63;
    sc->unk180 = 0x92A;
    sc->unk182 = 0x92A;
    sc->unk184 = 4;
    sc->unk17C = 1;
    sc->unk186 = 3;
    sc->unk188 = 100;
    sc->unk18A = 0;
    mac = func_00007F30(sc);
    if (mac == NULL)
        return -1;
    sceSysconSetWlanSwitchCallback(func_00001B5C, sc);
    sc->mac = mac;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00000620(SceWlanSoftc *sc) {
    SceWlanMac *mac;

    sc->unk90 = 6;
    sc->unk94 = 1;
    sc->unk98 = 2;
    sc->unk9C = 0;
    sc->unkA0 = 0x10;
    sc->unk178 = 0x63;
    sc->unk180 = 0x92A;
    sc->unk182 = 0x92A;
    sc->unk184 = 4;
    sc->unk17C = 1;
    sc->unk186 = 3;
    sc->unk188 = 100;
    sc->unk18A = 0;
    mac = func_00006980(sc);
    if (mac == NULL)
        return -1;
    sceSysconSetWlanSwitchCallback(func_00001B5C, sc);
    sc->mac = mac;
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/wlan", func_00000620);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/wlan", func_0000055C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_0001387C);

INCLUDE_RODATA("nonmatchings/wlan", D_00013888);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018B14);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018B20);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/wlan", sceWlanDevAttach);
#endif

#if FW_VERSION < 201
void sceWlanDevDetach(void) {
    SceWlanSoftc *sc = D_000191B0;
    u32 oldK1 = shiftK1();
    void **ifh = &sc->ifh;

    if (sc != NULL) {
        sceNetDetachIfhandleEther(ifh);
        sceNetDestroyIfhandleEther(ifh);
        sc->ifh = NULL;
    }
    setK1(oldK1);
}
#endif

#if FW_VERSION >= 300
void sceWlanDevDetach(void) {
    s32 *temp_s1;
    struct Unk_D_000191B0 *temp_s0;
    u32 temp_s2;

    temp_s0 = D_000191B0;
    temp_s2 = shiftK1();
    temp_s1 = &temp_s0->unk184;
    if (temp_s0 != NULL) {
        sceNetDetachIfhandleEther(temp_s1);
        sceNetDestroyIfhandleEther(temp_s1);
        temp_s0->unk184 = 0;
    }
    setK1(temp_s2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void sceWlanDevDetach(void) {
    struct Unk_D_000191B0 *temp_s0;
    u32 temp_s2;
    u8 *temp_s1;

    temp_s0 = D_000191B0;
    temp_s2 = shiftK1();
    temp_s1 = temp_s0->pad188;
    if (temp_s0 != NULL) {
        sceNetDetachIfhandleEther(temp_s1);
        sceNetDestroyIfhandleEther(temp_s1);
        M2C_FIELD(temp_s0, s32 *, 0x188) = 0;
    }
    setK1(temp_s2);
}
#endif

#if FW_VERSION == 282
void sceWlanDevDetach(void) {
    u32 temp_s2;
    struct Unk_sceWlanDrv_driver_C9A8CAB7_temp_s0 *temp_s0;
    void *temp_s1;

    temp_s0 = D_000191B0;
    temp_s2 = shiftK1();
    temp_s1 = &temp_s0->unk188;
    if (temp_s0 != NULL) {
        sceNetDetachIfhandleEther(temp_s1);
        sceNetDestroyIfhandleEther(temp_s1);
        temp_s0->unk188 = 0;
    }
    setK1(temp_s2);
}
#endif

#if FW_VERSION < 201
s32 sceWlanDevGetMacAddr(SceWlanEtherAddr *addr) {
    SceWlanSoftc *sc = D_000191B0;
    s32 ret = 0;
    u32 oldK1 = shiftK1();

    if (addr == NULL || (k1IsUserMode() && (s32)addr < 0))
        ret = 0x80410D13;
    else if (sc == NULL)
        ret = 0x80410D0D;
    else if (sc->mac == NULL || (sc->mac->status & 1) == 0)
        ret = 0x80410D0C;
    else if ((sc->flags & 0x200) == 0)
        ret = 0x80410D0E;
    else
        *addr = sc->etherAddr;
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/wlan", sceWlanDevGetMacAddr);
#endif

INCLUDE_ASM("nonmatchings/wlan", sceWlanGetEtherAddr);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/wlan", func_000009D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000008B4);

INCLUDE_ASM("nonmatchings/wlan", func_00000990);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_000134A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00000A6C);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/wlan", func_000008A4);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/wlan", D_00013318);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/wlan", func_00000874);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/wlan", func_000008C8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/wlan", func_00000A08);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00000AE4);

INCLUDE_RODATA("nonmatchings/wlan", D_00018B3C);

INCLUDE_ASM("nonmatchings/wlan", func_00000BC0);
#endif

#if FW_VERSION < 150
s32 func_000011AC(SceWlanSoftc *sc) {
    s32 ret = -1;

    sc->thread = sceKernelCreateThread("SceWlanMac", func_00001118, 0x27, 0x800, 0x200001, NULL);
    if (sc->thread >= 0) {
        ret = sceKernelStartThread(sc->thread, 4, &sc);
        ret = (ret == 0) ? 0 : -1;
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_000011AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_00000E7C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00000F1C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/wlan", D_00013A14);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000131C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_000010E0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/wlan", func_00001118);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00001B5C);
#else
INCLUDE_ASM("nonmatchings/wlan", func_0000122C);

INCLUDE_ASM("nonmatchings/wlan", func_00001468);

INCLUDE_ASM("nonmatchings/wlan", func_000026F8);
#endif

#if FW_VERSION < 201
void func_00002818(SceWlanSoftc *sc) {
    SceWlanQEnt *e;

    while ((e = func_000066A4(&sc->q2A8)) != NULL) {
        sceKernelWaitSema(sc->poolSema, 1, NULL);
        e->inUse = 0;
        sc->poolNext = e;
        sceKernelSignalSema(sc->poolSema, 1);
    }
    while ((e = func_000066A4(&sc->q2B0)) != NULL) {
        sceKernelWaitSema(sc->poolSema, 1, NULL);
        e->inUse = 0;
        sc->poolNext = e;
        sceKernelSignalSema(sc->poolSema, 1);
    }
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00002818);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000021C8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_000028D0);
#endif

#if FW_VERSION < 103 || FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/wlan", sceWlanSetWakeUp);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/wlan", sceWlanSetHostDiscover);
#endif

#if FW_VERSION < 150
s32 sceWlanDevSetGPIO(u32 pin, s32 val) {
    SceWlanSoftc *sc = D_000191B0;
    u32 oldK1 = shiftK1();
    s32 ret;
    u32 set[4];
    u32 dir[4];

    if (pin >= 8) {
        ret = 0x800001FE;
    } else {
        if ((sc->flags & 0x80) == 0)
            func_00009348(sc->mac, 1);
        dir[0] = pin;
        dir[1] = 1;
        func_0000A98C(sc->mac, 0x206, dir);
        set[0] = pin;
        set[1] = (val == 1);
        ret = func_0000A98C(sc->mac, 0x208, set);
        if ((sc->flags & 0x80) == 0)
            func_00009284(sc->mac, 1);
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceWlanDevSetGPIO(u32 pin, s32 val) {
    SceWlanSoftc *sc = D_000191B0;
    u32 oldK1 = shiftK1();
    s32 ret;
    u32 set[4];
    u32 dir[4];

    if (pin >= 8) {
        ret = 0x800001FE;
    } else {
        if ((sc->flags & 0x80) == 0)
            func_0000970C(sc->mac, 1);
        dir[0] = pin;
        dir[1] = 1;
        func_0000B050(sc->mac, 0x206, dir);
        set[0] = pin;
        set[1] = (val == 1);
        ret = func_0000B050(sc->mac, 0x208, set);
        if ((sc->flags & 0x80) == 0)
            func_00009678(sc->mac, 1);
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/wlan", sceWlanDevSetGPIO);
#endif

#if FW_VERSION < 150
s32 sceWlanDevGetStateGPIO(u32 pin) {
    SceWlanSoftc *sc = D_000191B0;
    u32 oldK1 = shiftK1();
    s32 ret;
    u32 buf[2];

    if (pin >= 8) {
        ret = -1;
    } else {
        buf[0] = pin;
        if ((sc->flags & 0x80) == 0)
            func_00009348(sc->mac, 1);
        ret = func_0000A98C(sc->mac, 0x209, buf);
        if ((sc->flags & 0x80) == 0)
            func_00009284(sc->mac, 1);
        if (ret == 0)
            ret = (buf[1] == 1);
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceWlanDevGetStateGPIO(u32 pin) {
    SceWlanSoftc *sc = D_000191B0;
    u32 oldK1 = shiftK1();
    s32 ret;
    u32 buf[2];

    if (pin >= 8) {
        ret = -1;
    } else {
        buf[0] = pin;
        if ((sc->flags & 0x80) == 0)
            func_0000970C(sc->mac, 1);
        ret = func_0000B050(sc->mac, 0x209, buf);
        if ((sc->flags & 0x80) == 0)
            func_00009678(sc->mac, 1);
        if (ret == 0)
            ret = (buf[1] == 1);
    }
    setK1(oldK1);
    return ret;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/wlan", sceWlanDevGetStateGPIO);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_00002D78);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_00001EC8);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/wlan", func_00001F9C);

void func_0000227C(void *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x264), 1, NULL);
}

void func_000022A0(void *arg0) {
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x264), 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000022C0(void *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x174), 1, NULL);
}
#endif

#if FW_VERSION < 201
void func_000022C0(void *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x268), 1, NULL);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000022E4(void *arg0) {
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x174), 1);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00003448(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0x1D8) == 0) {
        M2C_FIELD(&D_0002E3AC, s32 *, 0) = 0;
        M2C_FIELD(&D_0002E3AC, s32 *, 4) = 0;
        M2C_FIELD(&D_0002E3AC, s32 *, 8) = 0;
        M2C_FIELD(&D_0002E3AC, s32 *, 0xC) = 0;
        M2C_FIELD(&D_0002E3AC, s32 *, 0x10) = 0;
        M2C_FIELD(&D_0002E3AC, s32 *, 0x14) = 0;
        M2C_FIELD(&D_0002E3AC, s32 *, 0x18) = 0;
        temp_v0 = sceKernelSetAlarm(0x30D40U, (s32) &func_00003F08, arg0);
        if (temp_v0 < 0) {
            M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1D8) = temp_v0;
            M2C_FIELD(arg0, M2C_UNK **, 0x1DC) = &D_0002E3AC;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
}

void func_000034CC(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1D8);
    if (temp_v1 != 0) {
        sceKernelCancelAlarm(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
        M2C_FIELD(arg0, s32 *, 0x1DC) = 0;
    }
}
#endif

#if FW_VERSION < 201
void func_000022E4(void *arg0) {
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x268), 1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00002188(void *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x26C), 1, NULL);
}

void func_000021AC(void *arg0) {
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x26C), 1);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00002E78);
#endif

#if FW_VERSION >= 300
void func_00003114(struct Unk_func_00003114_0 *arg0) {
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x170), 1, NULL);
}
#endif

#if FW_VERSION == 282
void func_00003114(struct Unk_func_00003114_0 *arg0) {
    sceKernelWaitSema(arg0->unk174, 1, NULL);
}
#endif

#if FW_VERSION >= 300
void func_00003138(struct Unk_func_00003114_0 *arg0) {
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x170), 1);
}
#endif

#if FW_VERSION == 282
void func_00003138(struct Unk_func_00003114_0 *arg0) {
    sceKernelSignalSema(arg0->unk174, 1);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/wlan", func_00003158);
#endif

#if FW_VERSION == 282
void func_00003158(struct Unk_func_00003158_0 *arg0) {
    s32 temp_v0;

    if (arg0->unk1DC == 0) {
        D_0001925C.unk0 = 0;
        D_0001925C.unk4 = 0;
        D_0001925C.unk8 = 0;
        D_0001925C.unkC = 0;
        D_0001925C.unk10 = 0;
        D_0001925C.unk14 = 0;
        D_0001925C.unk18 = 0;
        temp_v0 = sceKernelSetAlarm(0x30D40U, (s32) func_00003CE0, arg0);
        if (temp_v0 < 0) {
            arg0->unk1DC = 0;
        } else {
            arg0->unk1DC = temp_v0;
            arg0->unk1E0 = &D_0001925C;
        }
    }
    arg0->unk1E4 = 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/wlan", func_000031DC);
#endif

#if FW_VERSION == 282
void func_000031DC(struct Unk_func_000031DC_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk1DC;
    if (temp_v1 != 0) {
        sceKernelCancelAlarm(temp_v1);
        arg0->unk1DC = 0;
        arg0->unk1E0 = 0;
    }
}
#endif

u8 func_0000321C(s16 v) {
    if (v <= 0)
        return 1;
    if (v >= 40)
        return 100;
    return v * 100 / 40;
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/wlan", func_00003200);

s32 func_00003304(struct Unk_func_00003304_0 *arg0) {
    s32 temp_a0;
    s32 temp_a3;
    s32 var_s0;
    void *temp_a1;
    void *var_v1;

    temp_a0 = sceKernelCpuSuspendIntr();
    temp_a1 = M2C_FIELD(arg0, void **, 0x140);
    var_v1 = M2C_FIELD(temp_a1, void **, 4);
    var_s0 = M2C_FIELD(temp_a1, s32 *, 0) == 0;
    if (var_v1 != temp_a1) {
        do {
            temp_a3 = M2C_FIELD(var_v1, s32 *, 0);
            var_v1 = M2C_FIELD(var_v1, void **, 4);
            var_s0 += temp_a3 == 0;
        } while (var_v1 != temp_a1);
    }
    sceKernelCpuResumeIntr(temp_a0);
    return var_s0;
}

INCLUDE_ASM("nonmatchings/wlan", func_00003374);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/wlan", func_00002E2C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00002350(void *arg0, s32 arg1) {
    s32 temp_a3;
    void *temp_a2;

    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x134), 1, NULL);
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x140);
    temp_a2 = temp_a3 + (((s32) (arg1 - (temp_a3 + (M2C_FIELD(arg0, s32 *, 0x13C) * 0x14))) / (s32) M2C_FIELD(arg0, s32 *, 0x138)) * 0x14);
    if (M2C_FIELD(temp_a2, s32 *, 0x10) == arg1) {
        M2C_FIELD(temp_a2, s32 *, 0) = 0;
        M2C_FIELD(arg0, void **, 0x144) = temp_a2;
    }
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x134), 1);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_000035F4(void *arg0) {
    s32 temp_a2;
    s32 var_s0;
    void *temp_a0;
    void *var_v1;

    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x134), 1, NULL);
    temp_a0 = M2C_FIELD(arg0, void **, 0x144);
    var_v1 = M2C_FIELD(temp_a0, void **, 4);
    var_s0 = M2C_FIELD(temp_a0, s32 *, 0) == 0;
    if (var_v1 != temp_a0) {
        do {
            temp_a2 = M2C_FIELD(var_v1, s32 *, 0);
            var_v1 = M2C_FIELD(var_v1, void **, 4);
            var_s0 += temp_a2 == 0;
        } while (var_v1 != temp_a0);
    }
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x134), 1);
    return var_s0;
}

void func_00003664(void *arg0) {
    void *temp_a0;
    void *var_v1;

    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x134), 1, NULL);
    temp_a0 = M2C_FIELD(arg0, void **, 0x144);
    if (M2C_FIELD(temp_a0, s32 *, 0) != 0) {
        M2C_FIELD(temp_a0, s32 *, 0) = 0;
    }
    var_v1 = M2C_FIELD(temp_a0, void **, 4);
    if (var_v1 != temp_a0) {
        do {
            if (M2C_FIELD(var_v1, s32 *, 0) != 0) {
                M2C_FIELD(var_v1, s32 *, 0) = 0;
            }
            var_v1 = M2C_FIELD(var_v1, void **, 4);
        } while (var_v1 != temp_a0);
    }
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x134), 1);
}
#endif

#if FW_VERSION < 201
void func_00002350(void *arg0, s32 arg1) {
    s32 temp_a3;
    void *temp_a2;

    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0x228), 1, NULL);
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x234);
    temp_a2 = temp_a3 + (((s32) (arg1 - (temp_a3 + (M2C_FIELD(arg0, s32 *, 0x230) * 0x14))) / (s32) M2C_FIELD(arg0, s32 *, 0x22C)) * 0x14);
    if (M2C_FIELD(temp_a2, s32 *, 0x10) == arg1) {
        M2C_FIELD(temp_a2, s32 *, 0) = 0;
        M2C_FIELD(arg0, void **, 0x238) = temp_a2;
    }
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0x228), 1);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000023EC(void *arg0) {
    void *temp_v1;
    void *var_v0;

    temp_v1 = M2C_FIELD(arg0, void **, 0x15C);
    var_v0 = M2C_FIELD(temp_v1, void **, 4);
    if (var_v0 != temp_v1) {
        do {
            M2C_FIELD(var_v0, s16 *, 0) = 0;
            M2C_FIELD(var_v0, s16 *, 2) = 0;
            var_v0 = M2C_FIELD(var_v0, void **, 4);
        } while (var_v0 != temp_v1);
    }
    M2C_FIELD(temp_v1, u16 *, 0) = (u16) (M2C_FIELD(temp_v1, u16 *, 0) | 2);
}
#endif

#if FW_VERSION < 201
void func_000023EC(void *arg0) {
    void *temp_v1;
    void *var_v0;

    temp_v1 = M2C_FIELD(arg0, void **, 0x250);
    var_v0 = M2C_FIELD(temp_v1, void **, 4);
    if (var_v0 != temp_v1) {
        do {
            M2C_FIELD(var_v0, s16 *, 0) = 0;
            M2C_FIELD(var_v0, s16 *, 2) = 0;
            var_v0 = M2C_FIELD(var_v0, void **, 4);
        } while (var_v0 != temp_v1);
    }
    M2C_FIELD(temp_v1, u16 *, 0) = (u16) (M2C_FIELD(temp_v1, u16 *, 0) | 2);
}
#endif

#if FW_VERSION == 282
void func_00003268(struct Unk_func_00003268_0 *arg0, s32 arg1) {
    s32 temp_a3;
    struct Unk_func_00003268_temp_a2 *temp_a2;

    sceKernelWaitSema(arg0->unk134, 1, NULL);
    temp_a3 = arg0->unk140;
    temp_a2 = temp_a3 + (((s32) (arg1 - (temp_a3 + (arg0->unk13C * 0x14))) / (s32) arg0->unk138) * 0x14);
    if (temp_a2->unk10 == arg1) {
        temp_a2->unk0 = 0;
        arg0->unk144 = temp_a2;
    }
    sceKernelSignalSema(arg0->unk134, 1);
}

s32 func_00003304(struct Unk_func_00003304_0 *arg0) {
    s32 temp_a2;
    s32 var_s0;
    struct Unk_func_00003304_temp_a0 *temp_a0;
    struct Unk_func_00003304_var_v1 *var_v1;

    sceKernelWaitSema(arg0->unk134, 1, NULL);
    temp_a0 = arg0->unk144;
    var_v1 = temp_a0->unk4;
    var_s0 = temp_a0->unk0 == 0;
    if (var_v1 != temp_a0) {
        do {
            temp_a2 = var_v1->unk0;
            var_v1 = var_v1->unk4;
            var_s0 += temp_a2 == 0;
        } while (var_v1 != temp_a0);
    }
    sceKernelSignalSema(arg0->unk134, 1);
    return var_s0;
}

void func_00003374(struct Unk_func_00003374_0 *arg0) {
    struct Unk_func_00003374_temp_a0 *temp_a0;
    struct Unk_func_00003374_var_v1 *var_v1;

    sceKernelWaitSema(arg0->unk134, 1, NULL);
    temp_a0 = arg0->unk144;
    if (temp_a0->unk0 != 0) {
        temp_a0->unk0 = 0;
    }
    var_v1 = temp_a0->unk4;
    if (var_v1 != temp_a0) {
        do {
            if (var_v1->unk0 != 0) {
                var_v1->unk0 = 0;
            }
            var_v1 = var_v1->unk4;
        } while (var_v1 != temp_a0);
    }
    sceKernelSignalSema(arg0->unk134, 1);
}
#endif

#if FW_VERSION >= 300
void func_000033E4(struct Unk_func_000033E4_0 *arg0) {
    void *temp_v1;
    void *var_v0;

    temp_v1 = M2C_FIELD(arg0, void **, 0x158);
    var_v0 = M2C_FIELD(temp_v1, void **, 4);
    if (var_v0 != temp_v1) {
        do {
            M2C_FIELD(var_v0, s16 *, 0) = 0;
            M2C_FIELD(var_v0, s16 *, 2) = 0;
            var_v0 = M2C_FIELD(var_v0, void **, 4);
        } while (var_v0 != temp_v1);
    }
    M2C_FIELD(temp_v1, u16 *, 0) = (u16) (M2C_FIELD(temp_v1, u16 *, 0) | 2);
}
#endif

#if FW_VERSION == 282
void func_000033E4(struct Unk_func_000033E4_0 *arg0) {
    struct Unk_func_000033E4_temp_v1 *temp_v1;
    struct Unk_func_000033E4_var_v0 *var_v0;

    temp_v1 = arg0->unk15C;
    var_v0 = temp_v1->unk4;
    if (var_v0 != temp_v1) {
        do {
            var_v0->unk0 = 0;
            var_v0->unk2 = 0;
            var_v0 = var_v0->unk4;
        } while (var_v0 != temp_v1);
    }
    temp_v1->unk0 = (u16) (temp_v1->unk0 | 2);
}
#endif

#if FW_VERSION < 150
s32 sceWlanDevEnd(void) {
    SceWlanSoftc *sc = D_000191B0;
    u32 oldK1 = shiftK1();
    SceWlanMsg msg;
    SceUID vpl;
    SceWlanMac *mac;

    if (sc != NULL) {
        vpl = sc->vpl;
        sceKernelUnregisterSysEventHandler(D_0001373C);
        if (sc->thread > 0) {
            msg.cmd = 0x80000005;
            msg.state = 2;
            sceKernelSendMbx(sc->mbx, &msg);
            sceKernelWaitThreadEnd(sc->thread, NULL);
        }
        mac = sc->mac;
        if (mac != NULL)
            func_0000806C(mac);
        func_000067B8(sc, sc->ring);
        func_000067B8(sc, sc->unk2B8);
        func_000065E4(&sc->q2A8);
        func_000065E4(&sc->q2B0);
        sceKernelDeleteSema(sc->poolSema);
        func_000067B8(sc, sc->pool);
        sceKernelDeleteSema(sc->lock264);
        sceKernelDeleteSema(sc->lock268);
        sceKernelDeleteMbx(sc->mbx);
        sceKernelFreeVpl(vpl, sc);
        func_00006738(vpl);
    }
    D_000191B0 = NULL;
    setK1(oldK1);
}
#else
INCLUDE_ASM("nonmatchings/wlan", sceWlanDevEnd);
#endif

s32 module_reboot_before(void) {
    sceWlanDevEnd();
    return 0;
}

#if FW_VERSION < 201
s32 sceWlanDevIsPowerOn(void) {
    SceWlanSoftc *sc = D_000191B0;
    u32 oldK1 = shiftK1();
    s32 ret;

    if (sc->mac != NULL && (sc->mac->status & 1))
        ret = 1;
    else
        ret = 0;
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/wlan", sceWlanDevIsPowerOn);
#endif

#if FW_VERSION < 201
s32 sceWlanDevIsGameMode(void) {
    SceWlanSoftc *sc = D_000191B0;
    u32 oldK1 = shiftK1();
    s32 ret;

    if (sc->flags & 0x800)
        ret = 1;
    else
        ret = 0;
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/wlan", sceWlanDevIsGameMode);
#endif

#if FW_VERSION < 201
s32 sceWlanGPPrevEstablishActive(void *arg) {
    SceWlanSoftc *sc = D_000191B0;
    u32 oldK1 = shiftK1();
    s32 ret;

    if (k1IsUserMode() && (s32)arg < 0)
        ret = 0x80410D13;
    else
        ret = func_000060FC(sc, arg);
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/wlan", sceWlanGPPrevEstablishActive);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_6D5C839E);
#endif

INCLUDE_ASM("nonmatchings/wlan", sceWlanGPSend);

#if FW_VERSION < 150
s32 sceWlanGPRecv(s32 arg0, void *buf, u32 size, s32 *out) {
    SceWlanSoftc *sc = D_000191B0;
    s32 ret = 0;
    u32 oldK1 = shiftK1();

    if ((k1IsUserMode() && ((((u32)buf | size | ((u32)buf + size)) >> 31) ^ 1) == 0) || (k1IsUserMode() && (s32)out < 0))
        ret = 0x80410D13;
    else
        func_00006300(sc, arg0, buf, size, out);
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/wlan", sceWlanGPRecv);
#endif

#if FW_VERSION < 201
s32 sceWlanGPRegisterCallback(SceUID cb) {
    SceWlanSoftc *sc = D_000191B0;
    s32 ret = 0;
    u32 oldK1 = shiftK1();

    if (cb <= 0)
        ret = 0x80410D13;
    else if (sc->gpCallback > 0)
        ret = 0x80410D81;
    else
        sc->gpCallback = cb;
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/wlan", sceWlanGPRegisterCallback);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 sceWlanGPUnRegisterCallback(void) {
    s32 temp_v1;
    struct Unk_D_000191B0 *temp_s1;
    u32 temp_s0;

    temp_s1 = D_000191B0;
    temp_s0 = shiftK1();
    temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x1CC);
    if (temp_v1 > 0) {
        sceKernelCancelCallback(temp_v1);
        M2C_FIELD(temp_s1, s32 *, 0x1CC) = 0;
    }
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceWlanGPUnRegisterCallback(void) {
    s32 temp_v1;
    struct Unk_D_000191B0 *temp_s1;
    u32 temp_s0;

    temp_s1 = D_000191B0;
    temp_s0 = shiftK1();
    temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x2C4);
    if (temp_v1 > 0) {
        sceKernelCancelCallback(temp_v1);
        M2C_FIELD(temp_s1, s32 *, 0x2C4) = 0;
    }
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION < 150
s32 sceWlanGPUnRegisterCallback(void) {
    s32 temp_v1;
    struct Unk_D_000191B0 *temp_s1;
    u32 temp_s0;

    temp_s1 = D_000191B0;
    temp_s0 = shiftK1();
    temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x2C0);
    if (temp_v1 > 0) {
        sceKernelCancelCallback(temp_v1);
        M2C_FIELD(temp_s1, s32 *, 0x2C0) = 0;
    }
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION >= 300
s32 sceWlanGPUnRegisterCallback(void) {
    s32 temp_v1;
    struct Unk_D_000191B0 *temp_s1;
    u32 temp_s0;

    temp_s1 = D_000191B0;
    temp_s0 = shiftK1();
    temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x1C8);
    if (temp_v1 > 0) {
        sceKernelCancelCallback(temp_v1);
        M2C_FIELD(temp_s1, s32 *, 0x1C8) = 0;
    }
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 sceWlanGPUnRegisterCallback(void) {
    s32 temp_v1;
    u32 temp_s0;
    struct Unk_sceWlanDrv_driver_4C7F62E0_temp_s1 *temp_s1;

    temp_s1 = D_000191B0;
    temp_s0 = shiftK1();
    temp_v1 = temp_s1->unk1CC;
    if (temp_v1 > 0) {
        sceKernelCancelCallback(temp_v1);
        temp_s1->unk1CC = 0;
    }
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION < 201
s32 sceWlanDrv_driver_81579D36(void *arg) {
    SceWlanSoftc *sc = D_000191B0;
    u32 oldK1 = shiftK1();
    s32 ret;

    if (k1IsUserMode() && (s32)arg < 0)
        ret = 0x80410D13;
    else
        ret = func_00006194(sc, arg);
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_81579D36);
#endif

#if FW_VERSION < 201
s32 sceWlanDrv_driver_5BAA1FE5(s32 arg) {
    SceWlanSoftc *sc = D_000191B0;
    u32 oldK1 = shiftK1();
    s32 ret = func_00017E04(sc, arg);

    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_5BAA1FE5);
#endif

#if FW_VERSION < 201
s32 sceWlanDrv_driver_4C14BACA(void *arg) {
    SceWlanSoftc *sc = D_000191B0;
    u32 oldK1 = shiftK1();
    s32 ret;

    if (k1IsUserMode() && (s32)arg < 0)
        ret = 0x80410D13;
    else
        ret = func_00006458(sc, arg);
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_4C14BACA);
#endif

#if FW_VERSION < 201
s32 sceWlanDrv_driver_2D0FAE4E(void *arg) {
    SceWlanSoftc *sc = D_000191B0;
    u32 oldK1 = shiftK1();
    s32 ret;

    if (k1IsUserMode() && (s32)arg < 0)
        ret = 0x80410D13;
    else
        ret = func_000064F0(sc, arg);
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_2D0FAE4E);
#endif

#if FW_VERSION < 201
s32 sceWlanDrv_driver_56F467CA(void *arg) {
    SceWlanSoftc *sc = D_000191B0;
    u32 oldK1 = shiftK1();
    s32 ret;

    if (k1IsUserMode() && (s32)arg < 0)
        ret = 0x80410D13;
    else
        ret = func_00006574(sc, arg);
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_56F467CA);
#endif

#if FW_VERSION >= 300
s32 sceWlanGetSwitchState(void) {
    return M2C_FIELD(D_000191B0, s32 *, 0x1CC) == 1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
s32 sceWlanGetSwitchState(void) {
    return D_000191B0->unk1D0 == 1;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000390C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceWlanGetSwitchState(void) {
    return M2C_FIELD(D_000191B0, s32 *, 0x2C8) == 1;
}
#endif

#if FW_VERSION < 150
s32 sceWlanGetSwitchState(void) {
    return M2C_FIELD(D_000191B0, s32 *, 0x2C4) == 1;
}
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00003A20);
#endif

s32 func_00003A88(u16 *p) {
    s32 i;

    for (i = 0; i < 6; i++) {
        if (D_00018A3C[i] == *p)
            break;
    }
    return (i < 5) ? i : 5;
}

u8 func_00003AC0(s32 i, s32 j) {
    return D_00018A48[i][j];
}

static inline s32 wlanChanIdx(u16 *p) {
    s32 i;

    for (i = 0; i < 6; i++) {
        if (D_00018A3C[i] == *p)
            break;
    }
    return (i < 5) ? i : 5;
}

s32 func_00003AE4(u16 *p, s32 ch) {
    s32 i;

    for (i = 0; i < 14; i++) {
        if (D_00018A48[wlanChanIdx(p)][i] == ch)
            break;
    }
    return i < 14;
}

u32 func_00003B60(s32 i) {
    return D_00018A00[i];
}

u32 func_00003B78(u32 v) {
    u32 i;

    for (i = 1; i < 15; i++) {
        if (D_00018A00[i] == v)
            break;
    }
    return i;
}

#if FW_VERSION < 201
s32 func_00002B40(SceWlanSoftc *sc) {
    SceWlanMsg *msg = func_0000840C(sc, sizeof(SceWlanMsg));

    msg->cmd = 0x80000008;
#if FW_VERSION >= 102
    msg->state = 0;
#endif
    sceKernelSendMbx(sc->mbx, msg);
    return 0;
}

s32 func_00002B84(SceWlanSoftc *sc) {
    SceWlanMsg *msg = func_0000840C(sc, sizeof(SceWlanMsg));

    msg->cmd = 0x80000009;
#if FW_VERSION >= 102
    msg->state = 0;
#endif
    sceKernelSendMbx(sc->mbx, msg);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00002BC8(void *arg0, s32 arg1) {
    if (arg1 != 1) {

    } else if (M2C_FIELD(arg0, s32 *, 0x280) != 0) {
        sceNetFlagIfEvent(arg0 + 0x280, 5, 0);
    }
    return 0;
}
#endif

#if FW_VERSION < 150
s32 func_00002BC8(void *arg0, s32 arg1) {
    if (arg1 != 1) {

    } else if (M2C_FIELD(arg0, s32 *, 0x27C) != 0) {
        sceNetFlagIfEvent(arg0 + 0x27C, 5, 0);
    }
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/wlan", func_00002AFC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/wlan", sceWlanSetWakeUp);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/wlan", func_0000367C);
#endif

s32 sceWlanDrv_driver_40B0AA4A(void) {
    u32 req;
    u32 oldK1 = shiftK1();
    s32 ret = sceSysconGetWakeUpReq(&req);

    if (ret >= 0 && (req & 3) == 2)
        ret = 1;
    setK1(oldK1);
    return ret;
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/wlan", sceWlanDrv_driver_8D5F551B);
#endif

#if FW_VERSION < 201
void func_00002C5C(void *ifh) {
    SceWlanSoftc *sc = sceNetGetIfhandleOpt(ifh);
    SceWlanMsg *msg = func_00008440(sc, sizeof(SceWlanMsg));

    if (msg == NULL) {
        sceNetSendIfEvent(ifh, 4, 0x80410D12);
        return;
    }
    msg->cmd = 0x8000000A;
#if FW_VERSION >= 102
    msg->state = 0;
#endif
    sceKernelSendMbx(sc->mbx, msg);
}

void func_00002CD4(void *ifh) {
    SceWlanSoftc *sc = sceNetGetIfhandleOpt(ifh);
    SceWlanMsg *msg = func_00008440(sc, sizeof(SceWlanMsg));

    if (msg == NULL) {
        sceNetSendIfEvent(ifh, 4, 0x80410D12);
        return;
    }
    msg->cmd = 0x8000000B;
#if FW_VERSION >= 102
    msg->state = 0;
#endif
    sceKernelSendMbx(sc->mbx, msg);
}
#endif

#if FW_VERSION >= 300
void sceWlanSetFirm(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000B24C(M2C_FIELD(D_000191B0, s32 *, 0x180), arg0, arg1, arg2, arg3);
}
#endif

#if FW_VERSION == 282
void sceWlanSetFirm(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000B24C(D_000191B0->unk184, arg0, arg1, arg2, arg3);
}
#endif

#if FW_VERSION < 150
void func_00003C68(void *ifh) {
    SceWlanSoftc *sc = sceNetGetIfhandleOpt(ifh);
    s32 intr = sceKernelCpuSuspendIntr();
    SceWlanMsg *msg = &D_0002A07C;

    msg->cmd = 0x8000000D;
    if ((msg->state & 1) == 0) {
        msg->state = 3;
        sceKernelSendMbx(sc->mbx, msg);
    }
    sceKernelCpuResumeIntr(intr);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00003C68(void *ifh) {
    SceWlanSoftc *sc = sceNetGetIfhandleOpt(ifh);
    s32 intr = sceKernelCpuSuspendIntr();
    SceWlanMsg *msg = &D_0002A83C;

    msg->cmd = 0x8000000D;
    if ((msg->state & 1) == 0) {
        msg->state = 3;
        sceKernelSendMbx(sc->mbx, msg);
    }
    sceKernelCpuResumeIntr(intr);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/wlan", func_00003C68);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00003F08);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/wlan", D_000175D0);

INCLUDE_ASM("nonmatchings/wlan", func_00003C10);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_00002C50);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00002DC4);

INCLUDE_ASM("nonmatchings/wlan", func_00002F60);
#endif

#if FW_VERSION < 271
u32 func_0000310C(void) {
    u16 v;
    u32 r = 0x10;

    if (sceIdStorageLookup(0x45, 0, &v, 2) == 0) {
        switch (v) {
        case 0:
            r = 0x10;
            break;
        case 1:
            r = 0x10;
            break;
        case 2:
            r = 0x30;
            break;
        case 3:
            r = 0x40;
            break;
        default:
            r = 0x10;
            break;
        }
    }
    return r << 8;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000310C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00003BEC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_000044F4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_000040BC);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/wlan", func_00003060);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/wlan", func_00003908);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/wlan", func_000030AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_000033A0);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/wlan", func_00003180);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/wlan", func_00003350);

INCLUDE_ASM("nonmatchings/wlan", func_000035B8);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/wlan", func_0000345C);
#endif

#if FW_VERSION < 150
s32 func_0000368C(SceWlanSoftc *sc) {
    s32 intr;
    SceWlanMsg *msg;

    sc->unk2BC = 0;
    intr = sceKernelCpuSuspendIntr();
    msg = &D_0002A060;
    msg->cmd = 0x80000007;
    if ((msg->state & 1) == 0) {
        msg->state = 3;
        sceKernelSendMbx(sc->mbx, msg);
    }
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000368C);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/wlan", func_00003678);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000036EC);

s32 func_000037A4(s32 *arg0) {
    func_000036EC(*arg0);
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_000049CC);
#endif

#if FW_VERSION < 103
s32 func_00003708(u32 *arg) {
    SceWlanSoftc *sc = D_000191B0;
    u32 v = *arg;
    s32 intr;
    SceWlanMsg *msg;

    sc->flags |= 0x2000;
    intr = sceKernelCpuSuspendIntr();
    msg = &D_0002A098;
    msg->cmd = 0x8000000E;
    if ((msg->state & 1) == 0) {
        msg->state = 3;
        msg->arg = v;
        sceKernelSendMbx(sc->mbx, msg);
    }
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

#if FW_VERSION < 150
s32 func_000037A0(SceWlanSoftc *sc, u32 val) {
    u32 buf[4];

    buf[0] = val & 0x1FF;
    return func_0000A98C(sc->mac, 9, buf);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000037A0(SceWlanSoftc *sc, u32 val) {
    u32 buf[4];

    buf[0] = val & 0x1FF;
    return func_0000B050(sc->mac, 9, buf);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000037A0);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/wlan", func_000036E0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00004DAC);

INCLUDE_ASM("nonmatchings/wlan", func_00004F18);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/wlan", func_00003DC8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_000037F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/wlan", func_000037CC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000509C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000052EC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00005B2C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_00006F3C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_00005F44);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000063D4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_00007710);

INCLUDE_ASM("nonmatchings/wlan", func_00007AA4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_00006760);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/wlan", func_00007F08);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00008234);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/wlan", func_000073B8);
#endif

#if FW_VERSION == 100
s32 func_00005184(SceWlanSoftc *sc, s32 mode) {
    u32 *req = func_0000840C(sc, 4);
    s32 ret;

    *req = 0;
    switch (mode) {
    case 0:
        *req = 1;
        break;
    case 1:
        *req = 3;
        break;
    case 2:
        *req = 2;
        break;
    case 3:
        *req = 4;
        break;
    default:
        *req = 2;
        break;
    }
    ret = func_0000A98C(sc->mac, 0x202, req);
    if (mode == 0) {
        sc->flags = 0;
        if (ret == 0 && sc->mac->reset(sc->mac) >= 0 && func_00003A20(sc) >= 0 && func_00000F1C(sc) >= 0)
            sc->flags |= 0x200;
        ret = 0;
    }
    func_000067B8(sc, req);
    return ret;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/wlan", func_00005184);
#endif

#if FW_VERSION < 201
void func_0000529C(SceWlanScanInfo *dst, SceWlanBssDesc *src) {
    s32 i;

    memset(dst, 0, sizeof(SceWlanScanInfo));
    dst->bssid = src->bssid;
    for (i = 0; i < 32; i++) {
        if (src->ssid[i] == 0)
            break;
        dst->ssid[i] = src->ssid[i];
    }
    dst->ssidLen = i;
    if (src->unk5C == 0)
        dst->bssType = 2;
    else
        dst->bssType = 1;
    dst->unk3E = src->unk30;
    dst->unk2C = src->unk3C;
    dst->unk30 = src->unk32;
    dst->channel = func_00003B78(src->unk4C);
    dst->unk3C = src->unk40;
    for (i = 0; i < 8; i++) {
        dst->rates[i] = src->rates[i].rate;
        dst->rates[i] |= (src->rates[i].basic == 0) << 7;
    }
    dst->unk4A[0] = src->unk80[0] & 7;
    dst->unk4A[1] = src->unk80[1];
    dst->unk4A[2] = src->unk80[2];
    dst->unk4A[3] = src->unk80[3];
    dst->unk4A[4] = src->unk80[4];
    dst->rssi = src->rssi;
    dst->rssi = func_0000321C(dst->rssi);
}

INCLUDE_ASM("nonmatchings/wlan", func_000053CC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/wlan", func_000057D4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/wlan", func_00005AD4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/wlan", func_00006E24);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/wlan", func_00007950);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/wlan", func_00006FD8);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/wlan", func_00005688);

INCLUDE_ASM("nonmatchings/wlan", func_0000598C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00005C88);

INCLUDE_ASM("nonmatchings/wlan", func_00005FA8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00006278);

INCLUDE_ASM("nonmatchings/wlan", func_00006338);
#endif

#if FW_VERSION < 150
s32 func_000060FC(SceWlanSoftc *sc, void *arg) {
    SceWlanMac *mac = sc->mac;
    s32 ret;

    func_0000227C(sc);
    ret = 0x80410D14;
    if (sc->flags & 0x800) {
        ret = 0x80410D13;
        if (mac->prevEstablish != NULL) {
            ret = mac->prevEstablish(mac, arg);
            if (ret < 0)
                ret = 0x80410D13;
        }
    }
    func_000022A0(sc);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000060FC(SceWlanSoftc *sc, void *arg) {
    SceWlanMac *mac = sc->mac;
    s32 ret;

    func_000022C0(sc);
    ret = 0x80410D14;
    if (sc->flags & 0x800) {
        ret = 0x80410D13;
        if (mac->prevEstablish != NULL) {
            ret = mac->prevEstablish(mac, arg);
            if (ret < 0)
                ret = 0x80410D13;
        }
    }
    func_000022E4(sc);
    return ret;
}
#endif

#if FW_VERSION < 150
s32 func_00006194(SceWlanSoftc *sc, SceWlanGPParam *in) {
    SceWlanMac *mac = sc->mac;
    s32 ret = 0;
    s32 i;

    func_0000227C(sc);
    if (sc->flags & 0x800) {
        ret = 0x80410D82;
    } else {
        mac->unkF4[0] = in->unk0[0];
        mac->unkF4[1] = in->unk0[1];
        mac->unkF4[2] = in->unk0[2];
        mac->unkF4[3] = in->unk0[3];
        mac->unk154 = in->unk10;
        for (i = 0; i < 4; i++) {
            mac->unk160[i] = in->unk14[i];
            mac->unk164[i] = in->unk18[i];
        }
    }
    func_000022A0(sc);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00006194(SceWlanSoftc *sc, SceWlanGPParam *in) {
    SceWlanMac *mac = sc->mac;
    s32 ret = 0;
    s32 i;

    func_000022C0(sc);
    if (sc->flags & 0x800) {
        ret = 0x80410D82;
    } else {
        mac->unkF4[0] = in->unk0[0];
        mac->unkF4[1] = in->unk0[1];
        mac->unkF4[2] = in->unk0[2];
        mac->unkF4[3] = in->unk0[3];
        mac->unk154 = in->unk10;
        for (i = 0; i < 4; i++) {
            mac->unk160[i] = in->unk14[i];
            mac->unk164[i] = in->unk18[i];
        }
    }
    func_000022E4(sc);
    return ret;
}
#endif

#if FW_VERSION < 150
s32 func_00006258(SceWlanSoftc *sc, s32 arg0, void *buf, u32 size) {
    SceWlanMac *mac = sc->mac;
    s32 ret = 0;

    func_0000227C(sc);
    if ((sc->flags & 0x800) == 0) {
        ret = 0x80410D14;
    } else {
        if (mac->gpSend != NULL)
            mac->gpSend(mac, arg0, buf, size);
    }
    func_000022A0(sc);
    return ret;
}

s32 func_00006300(SceWlanSoftc *sc, s32 arg0, void *buf, u32 size, s32 *out) {
    SceWlanMac *mac = sc->mac;
    s32 ret = 0;

    func_0000227C(sc);
    if ((sc->flags & 0x800) == 0) {
        ret = 0x80410D14;
    } else {
        if (mac->gpRecv != NULL)
            mac->gpRecv(mac, arg0, buf, size, out);
    }
    func_000022A0(sc);
    return ret;
}

s32 func_00017E04(SceWlanSoftc *sc, s32 arg) {
    SceWlanMac *mac = sc->mac;
    s32 ret = 0;

    func_0000227C(sc);
    if (sc->flags & 0x800) {
        ret = 0x80410D82;
    } else {
        mac->unkF0 = arg;
        mac->unk104 = 0;
        memset(mac->unk108, 0, sizeof(mac->unk108));
        mac->unk148 = 0;
        mac->unk14A = 0;
        mac->unk14C = 0;
        mac->unk150 = sc->unkA2;
        mac->unk158 = 0;
        mac->unk15C = 0;
    }
    func_000022A0(sc);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00017E04(SceWlanSoftc *sc, s32 arg) {
    SceWlanMac *mac = sc->mac;
    s32 ret = 0;

    func_000022C0(sc);
    if (sc->flags & 0x800) {
        ret = 0x80410D82;
    } else {
        mac->unkF0 = arg;
        mac->unk104 = 0;
        memset(mac->unk108, 0, sizeof(mac->unk108));
        mac->unk148 = 0;
        mac->unk14A = 0;
        mac->unk14C = 0;
        mac->unk150 = sc->unkA2;
        mac->unk158 = 0;
        mac->unk15C = 0;
    }
    func_000022E4(sc);
    return ret;
}
#endif

#if FW_VERSION < 150
s32 func_00006458(void *arg0, void *arg1) {
    SceWlanSoftc *sc = arg0;
    u32 *out = arg1;
    SceWlanMac *mac = sc->mac;
    s32 ret = 0;
    u16 v;

    func_0000227C(sc);
    if ((sc->flags & 0x800) == 0) {
        ret = 0x80410D14;
    } else {
        out[0] = mac->unk14C;
        v = mac->unk14A;
        ((u16 *)out)[2] = v;
        if (mac->unk15C == 1)
            ((u16 *)out)[2] = v | (mac->unk15C << mac->unkD2);
    }
    func_000022A0(sc);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00006458(void *arg0, void *arg1) {
    SceWlanSoftc *sc = arg0;
    u32 *out = arg1;
    SceWlanMac *mac = sc->mac;
    s32 ret = 0;
    u16 v;

    func_000022C0(sc);
    if ((sc->flags & 0x800) == 0) {
        ret = 0x80410D14;
    } else {
        out[0] = mac->unk14C;
        v = mac->unk14A;
        ((u16 *)out)[2] = v;
        if (mac->unk15C == 1)
            ((u16 *)out)[2] = v | (mac->unk15C << mac->unkD2);
    }
    func_000022E4(sc);
    return ret;
}
#endif

#if FW_VERSION < 150
s32 func_000064F0(SceWlanSoftc *sc, u16 *in) {
    SceWlanMac *mac = sc->mac;
    s32 ret = 0;

    func_0000227C(sc);
    if (sc->flags & 0x800) {
        ret = 0x80410D82;
    } else {
        mac->unkE8[0] = in[0];
        mac->unkE8[1] = in[1];
        mac->unkE8[2] = in[2];
    }
    func_000022A0(sc);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000064F0(SceWlanSoftc *sc, u16 *in) {
    SceWlanMac *mac = sc->mac;
    s32 ret = 0;

    func_000022C0(sc);
    if (sc->flags & 0x800) {
        ret = 0x80410D82;
    } else {
        mac->unkE8[0] = in[0];
        mac->unkE8[1] = in[1];
        mac->unkE8[2] = in[2];
    }
    func_000022E4(sc);
    return ret;
}

s32 func_00006574(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x27C);
    func_000022C0(arg0);
    M2C_FIELD(arg1, u16 *, 0) = (u16) M2C_FIELD(temp_s0, u16 *, 0x124);
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(temp_s0, u16 *, 0x126);
    M2C_FIELD(arg1, u16 *, 4) = (u16) M2C_FIELD(temp_s0, u16 *, 0x128);
    func_000022E4(arg0);
    return 0;
}
#endif

#if FW_VERSION < 150
s32 func_00006574(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x278);
    func_0000227C(arg0);
    M2C_FIELD(arg1, u16 *, 0) = (u16) M2C_FIELD(temp_s0, u16 *, 0xE8);
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(temp_s0, u16 *, 0xEA);
    M2C_FIELD(arg1, u16 *, 4) = (u16) M2C_FIELD(temp_s0, u16 *, 0xEC);
    func_000022A0(arg0);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 func_000065D4(SceWlanQueue *q) {
    q->head = NULL;
    q->tail = NULL;
    return 0;
}

void func_000065E4(SceWlanQueue *q) {

}

s32 func_000065EC(SceWlanQueue *q, SceWlanQEnt *e) {
    s32 intr = sceKernelCpuSuspendIntr();

    e->next = NULL;
    if (q->tail == NULL)
        q->head = e;
    else
        q->tail->next = e;
    q->tail = e;
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00006640(SceWlanQueue *q, SceWlanQEnt *e) {
    s32 intr = sceKernelCpuSuspendIntr();

    e->next = q->head;
    if (q->tail == NULL) {
        q->head = e;
        q->tail = e;
    } else {
        q->head->next = e;
    }
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00006640);
#endif

#if FW_VERSION < 282
SceWlanQEnt *func_000066A4(SceWlanQueue *q) {
    s32 intr = sceKernelCpuSuspendIntr();
    SceWlanQEnt *e = q->head;

    if (e != NULL) {
        q->head = e->next;
        if (q->head == NULL)
            q->tail = NULL;
        e->next = NULL;
    }
    sceKernelCpuResumeIntr(intr);
    return e;
}

s32 func_000066FC(s32 *arg0) {
    return *arg0 != 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/wlan", D_000175D0);

INCLUDE_RODATA("nonmatchings/wlan", D_000175DC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018CE4);

INCLUDE_RODATA("nonmatchings/wlan", D_000175F8);

INCLUDE_RODATA("nonmatchings/wlan", D_00017608);
#endif

#if FW_VERSION >= 300
s32 func_00003CE0(struct Unk_func_00003CE0_0 *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x1DC);
    temp_s1 = sceKernelCpuSuspendIntr();
    if ((temp_s0 != NULL) && !(M2C_FIELD(temp_s0, s32 *, 0x18) & 1)) {
        M2C_FIELD(temp_s0, s32 *, 8) = 0x80000012;
        M2C_FIELD(temp_s0, s32 *, 0x18) = 3;
        sceKernelSendMbx(M2C_FIELD(arg0, u32 *, 0x174), temp_s0);
    }
    sceKernelCpuResumeIntr(temp_s1);
    return 0x30D40;
}
#endif

#if FW_VERSION == 282
s32 func_00003CE0(struct Unk_func_00003CE0_0 *arg0) {
    s32 temp_s1;
    struct Unk_func_00003CE0_temp_s0 *temp_s0;

    temp_s0 = arg0->unk1E0;
    temp_s1 = sceKernelCpuSuspendIntr();
    if ((temp_s0 != NULL) && !(temp_s0->unk18 & 1)) {
        temp_s0->unk8 = 0x80000012;
        temp_s0->unk18 = 3;
        sceKernelSendMbx(arg0->unk178, temp_s0);
    }
    sceKernelCpuResumeIntr(temp_s1);
    return 0x30D40;
}
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018CC8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00003D64);

INCLUDE_ASM("nonmatchings/wlan", func_00003E7C);

INCLUDE_ASM("nonmatchings/wlan", func_00004050);

INCLUDE_ASM("nonmatchings/wlan", func_000041F8);

INCLUDE_ASM("nonmatchings/wlan", func_00004270);

INCLUDE_ASM("nonmatchings/wlan", func_00004668);

INCLUDE_ASM("nonmatchings/wlan", func_00004974);

INCLUDE_ASM("nonmatchings/wlan", func_00004A04);

s32 func_00004B20(s32 *arg0) {
    func_00004A04(*arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/wlan", func_00004B40);

INCLUDE_ASM("nonmatchings/wlan", func_00004BD4);

INCLUDE_ASM("nonmatchings/wlan", func_00004C00);

INCLUDE_ASM("nonmatchings/wlan", func_00004D6C);

INCLUDE_ASM("nonmatchings/wlan", func_00006BBC);

INCLUDE_ASM("nonmatchings/wlan", func_00006CA4);

INCLUDE_ASM("nonmatchings/wlan", func_00006DF8);

INCLUDE_ASM("nonmatchings/wlan", func_00007210);

INCLUDE_ASM("nonmatchings/wlan", func_0000765C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/wlan", func_0000798C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/wlan", func_000079E4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00007D78);

INCLUDE_ASM("nonmatchings/wlan", func_00008090);

s32 func_0000829C(struct Unk_func_0000829C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    return 0;
}

void func_000082AC(void) {
}

INCLUDE_ASM("nonmatchings/wlan", func_000082B4);

INCLUDE_ASM("nonmatchings/wlan", func_00008308);

INCLUDE_ASM("nonmatchings/wlan", func_0000835C);

s32 func_000083B4(s32 *arg0) {
    return *arg0 != 0;
}
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018CE4);
#endif

INCLUDE_RODATA("nonmatchings/wlan", D_00018CF0);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018D00);

INCLUDE_RODATA("nonmatchings/wlan", D_00018D10);
#endif

INCLUDE_RODATA("nonmatchings/wlan", D_00018D20);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_00017650);
#endif

#if FW_VERSION < 282
SceUID func_00006708(u32 size) {
    return sceKernelCreateVpl("SceWlanDrvHeap", 1, 1U, size, NULL);
}

void func_00006738(u32 arg0) {
    sceKernelDeleteVpl(arg0);
}
#else
INCLUDE_RODATA("nonmatchings/wlan", D_00018D48);

void func_000083C0(u32 arg0) {
    sceKernelCreateVpl("SceWlanDrvHeap", 1, 1U, arg0, NULL);
}

void func_000083F0(u32 arg0) {
    sceKernelDeleteVpl(arg0);
}
#endif

#if FW_VERSION < 201
void *func_0000840C(SceWlanSoftc *sc, u32 size) {
    void *p = NULL;

    if (sceKernelAllocateVpl(sc->vpl, size, &p, NULL) < 0)
        p = NULL;
    return p;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_0000840C);
#endif

#if FW_VERSION < 201
void *func_00008440(SceWlanSoftc *sc, u32 size) {
    void *p = NULL;

    if (sceKernelTryAllocateVpl(sc->vpl, size, &p) < 0)
        p = NULL;
    return p;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00008440);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000067B8(void *arg0, void *arg1) {
    sceKernelFreeVpl(M2C_FIELD(arg0, u32 *, 0x17C), arg1);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_0001766C);

INCLUDE_RODATA("nonmatchings/wlan", D_000169C8);

INCLUDE_RODATA("nonmatchings/wlan", D_000169D4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000067B8(void *arg0, void *arg1) {
    sceKernelFreeVpl(M2C_FIELD(arg0, u32 *, 0x274), arg1);
}
#endif

#if FW_VERSION < 150
void func_000067B8(void *arg0, void *arg1) {
    sceKernelFreeVpl(M2C_FIELD(arg0, u32 *, 0x270), arg1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_00013A84);

INCLUDE_ASM("nonmatchings/wlan", func_00006980);

INCLUDE_ASM("nonmatchings/wlan", func_00006B94);
#endif

#if FW_VERSION < 150
s32 func_000067D4(SceWlanMac *mac) {
    u32 timeout = 10000;

    mac->unkB0 = 0;
    if (mac->thread != 0) {
        sceKernelSetEventFlag(mac->bus.evf, 0x10);
        if (sceKernelWaitThreadEnd(mac->thread, &timeout) == 0x800201A8) {
            sceKernelTerminateDeleteThread(mac->thread);
            if (mac->modeStop != NULL)
                mac->modeStop(mac);
            memset(&mac->chip, 0, sizeof(mac->chip));
            mac->sync = NULL;
            mac->modeStop = NULL;
            mac->reset = NULL;
            mac->unk88[0] = 0;
            mac->unk88[1] = 0;
            mac->unk88[2] = 0;
            mac->regWrite = NULL;
            mac->gpSend = NULL;
            mac->gpRecv = NULL;
            mac->unkA0 = 0;
            mac->prevEstablish = NULL;
        }
        sceKernelClearEventFlag(mac->bus.evf, ~0x10);
        sceKernelReleaseIntrHandler(8);
        mac->thread = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000067D4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000068B4);
#endif

#if FW_VERSION < 271
s32 func_00006A24(SceWlanMac *mac, s32 on) {
    s32 intr = sceKernelCpuSuspendIntr();
    SceWlanBus *bus = &mac->bus;

    if (on == 0) {
        *bus->reg |= 0x4010;
        if (bus->base == 0xBD300000)
            sceSysregMsifClkSelect(1, 0);
        else
            sceSysregMsifClkSelect(0, 0);
        mac->flags &= ~1;
    } else {
        *bus->reg &= ~0x4010;
        if (bus->base == 0xBD300000)
            sceSysregMsifClkSelect(1, 1);
        else
            sceSysregMsifClkSelect(0, 1);
        mac->flags |= 1;
    }
    sceKernelCpuResumeIntr(intr);
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_00006A24);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00006B04);
#endif

#if FW_VERSION < 250
s32 func_00006D74(SceWlanMac *mac) {
    func_000067D4(mac);
    if (mac->status & 1) {
        sceSysconCtrlWlanPower(0);
        mac->status &= ~1;
    }
    sceSysregMsifResetEnable(1);
    sceSysregMsifIoDisable(1);
    sceSysregMsifClkDisable(1);
    sceSysregMsifBusClockDisable(1);
    sceSysregMsifClkSelect(1, 0);
    sceSysregMsifResetDisable(1);
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00006D74);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00006DFC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00007FA8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00007060);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000071F8);

s32 func_000090E8(struct Unk_func_000090E8_0 *arg0, s32 arg1, s8 *arg2) {
    s32 temp_s1;

    *arg2 = 0;
    sceKernelWaitSema(arg0->unkC, 1, NULL);
    temp_s1 = __builtin_allegrex_max(func_0000BD90((s32) &arg0->unkC, arg1, 1, (s32) arg2), -1);
    sceKernelSignalSema(arg0->unkC, 1);
    return temp_s1;
}

s32 func_00009160(struct Unk_func_00009160_0 *arg0, s32 arg1, u8 *arg2) {
    s32 temp_s1;
    u8 temp_s2;

    temp_s2 = *arg2;
    sceKernelWaitSema(arg0->unkC, 1, NULL);
    temp_s1 = __builtin_allegrex_max(func_0000BE8C((s32) &arg0->unkC, arg1, (s32) temp_s2, 1), -1);
    sceKernelSignalSema(arg0->unkC, 1);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/wlan", func_000091D4);

INCLUDE_ASM("nonmatchings/wlan", func_00009468);

INCLUDE_ASM("nonmatchings/wlan", func_000097DC);

INCLUDE_ASM("nonmatchings/wlan", func_00007C78);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00008AF8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000A084);

INCLUDE_ASM("nonmatchings/wlan", func_0000A3CC);

INCLUDE_ASM("nonmatchings/wlan", func_0000A5DC);

INCLUDE_ASM("nonmatchings/wlan", func_0000A910);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000868C);

INCLUDE_ASM("nonmatchings/wlan", func_000088CC);
#endif

#if FW_VERSION >= 300
void func_00008470(struct Unk_func_00008470_0 *arg0, struct Unk_func_00008470_1 *arg1) {
    sceKernelFreeVpl(M2C_FIELD(arg0, u32 *, 0x178), arg1);
}
#endif

#if FW_VERSION == 282
void func_00008470(struct Unk_func_00008470_0 *arg0, struct Unk_func_00008470_1 *arg1) {
    sceKernelFreeVpl(arg0->unk17C, arg1);
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018D64);

INCLUDE_RODATA("nonmatchings/wlan", D_00018D90);

INCLUDE_RODATA("nonmatchings/wlan", D_00018D9C);

INCLUDE_RODATA("nonmatchings/wlan", D_00018DB0);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018DE4);
#endif

#if FW_VERSION < 150
SceWlanMac *func_00007F30(SceWlanSoftc *sc) {
    SceWlanMac *mac = func_0000840C(sc, sizeof(SceWlanMac));

    if (mac != NULL) {
        memset(mac, 0, sizeof(SceWlanMac));
        mac->bus.base = 0xBD300000;
        mac->bus.cmdReg = (volatile u32 *)0xBD300030;
        mac->bus.reg10 = (volatile u32 *)0xBD300034;
        mac->bus.statusReg = (volatile u32 *)0xBD300038;
        mac->bus.reg = (volatile u32 *)0xBD30003C;
        mac->bus.reg1C = (volatile u32 *)0xBD300040;
        mac->bus.evf = sceKernelCreateEventFlag(D_00018DE4, 0x201, 0, NULL);
        mac->bus.sema = sceKernelCreateSema("SceWlanHalMsHostLock", 1, 1, 1, NULL);
        mac->dmaOp = 0;
        mac->dmaBuf = NULL;
        mac->evfB8 = sceKernelCreateEventFlag("SceWlanHalMsHostLock", 1, 0, NULL);
        mac->mbx = sceKernelCreateMbx("SceWlanHalMbx", 1, NULL);
        mac->sc = sc;
        mac->txBuf = func_0000840C(sc, 0x200);
        mac->rxBuf = func_0000840C(sc, 0x200);
        mac->unk168 = 0;
    }
    return mac;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_0000806C(void *arg0) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x100);
    if (arg0 != NULL) {
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, u32 *, 0x10));
        sceKernelDeleteSema(M2C_FIELD(arg0, u32 *, 0xC));
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, u32 *, 0xF8));
        sceKernelDeleteMbx(M2C_FIELD(arg0, u32 *, 0xFC));
        func_000067B8(M2C_FIELD(arg0, void **, 0x100), M2C_FIELD(arg0, void **, 0x104));
        func_000067B8(M2C_FIELD(arg0, void **, 0x100), M2C_FIELD(arg0, void **, 0x108));
        sceKernelDmaOpFree(M2C_FIELD(arg0, s32 *, 0xE8));
        func_000067B8(M2C_FIELD(arg0, void **, 0x100), M2C_FIELD(arg0, void **, 0xEC));
        func_000067B8(temp_s1, arg0);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000806C(void *arg0) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0xFC);
    if (arg0 != NULL) {
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, u32 *, 0x10));
        sceKernelDeleteSema(M2C_FIELD(arg0, u32 *, 0xC));
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, u32 *, 0xF4));
        sceKernelDeleteMbx(M2C_FIELD(arg0, u32 *, 0xF8));
        func_000067B8(M2C_FIELD(arg0, void **, 0xFC), M2C_FIELD(arg0, void **, 0x100));
        func_000067B8(M2C_FIELD(arg0, void **, 0xFC), M2C_FIELD(arg0, void **, 0x104));
        func_000067B8(temp_s1, arg0);
    }
}
#endif

#if FW_VERSION < 150
void func_0000806C(void *arg0) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0xC0);
    if (arg0 != NULL) {
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, u32 *, 0x10));
        sceKernelDeleteSema(M2C_FIELD(arg0, u32 *, 0xC));
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, u32 *, 0xB8));
        sceKernelDeleteMbx(M2C_FIELD(arg0, u32 *, 0xBC));
        func_000067B8(M2C_FIELD(arg0, void **, 0xC0), M2C_FIELD(arg0, void **, 0xC4));
        func_000067B8(M2C_FIELD(arg0, void **, 0xC0), M2C_FIELD(arg0, void **, 0xC8));
        func_000067B8(temp_s1, arg0);
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000080E0);
#endif

#if FW_VERSION < 152
s32 func_000082D4(s32 arg0, s32 arg1) {
    return -(func_000091D4(arg0 + 0xC, arg1) < 0);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
s32 func_000082D4(s32 arg0, s32 arg1) {
    return (func_000091D4(arg0 + 0xC, arg1) >= 0) ? 0 : -1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000848C);

INCLUDE_ASM("nonmatchings/wlan", func_000086B0);

INCLUDE_ASM("nonmatchings/wlan", func_00008834);

INCLUDE_ASM("nonmatchings/wlan", func_0000894C);

INCLUDE_ASM("nonmatchings/wlan", func_00008A5C);

INCLUDE_ASM("nonmatchings/wlan", func_00008CE4);

INCLUDE_ASM("nonmatchings/wlan", func_00008D74);

INCLUDE_ASM("nonmatchings/wlan", func_00008F08);

s32 func_000090E8(struct Unk_func_000090E8_0 *arg0, s32 arg1, s8 *arg2) {
    s32 temp_s1;

    *arg2 = 0;
    sceKernelWaitSema(arg0->unkC, 1, NULL);
    temp_s1 = __builtin_allegrex_max(func_0000BD90((s32) (&arg0->unkC), arg1, 1, (s32) arg2), -1);
    sceKernelSignalSema(arg0->unkC, 1);
    return temp_s1;
}

s32 func_00009160(struct Unk_func_00009160_0 *arg0, s32 arg1, u8 *arg2) {
    s32 temp_s1;
    u8 temp_s2;

    temp_s2 = *arg2;
    sceKernelWaitSema(arg0->unkC, 1, NULL);
    temp_s1 = __builtin_allegrex_max(func_0000BE8C((s32) (&arg0->unkC), arg1, (s32) temp_s2, 1), -1);
    sceKernelSignalSema(arg0->unkC, 1);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/wlan", func_000091D4);

INCLUDE_ASM("nonmatchings/wlan", func_00009468);

INCLUDE_ASM("nonmatchings/wlan", func_000097DC);

INCLUDE_ASM("nonmatchings/wlan", func_00009B20);

INCLUDE_ASM("nonmatchings/wlan", func_00009DF4);

INCLUDE_ASM("nonmatchings/wlan", func_0000A07C);

INCLUDE_ASM("nonmatchings/wlan", func_0000A3C4);

INCLUDE_ASM("nonmatchings/wlan", func_0000A5D4);

INCLUDE_ASM("nonmatchings/wlan", func_0000A908);

void func_0000AB18(struct Unk_func_00008470_1 *arg0) {
    void *temp_s1;

    temp_s1 = arg0->unk100;
    if (arg0 != NULL) {
        sceKernelDeleteEventFlag(arg0->unk10);
        sceKernelDeleteSema(arg0->unkC);
        sceKernelDeleteEventFlag(arg0->unkF8);
        sceKernelDeleteMbx(arg0->unkFC);
        func_00008470(arg0->unk100, arg0->unk104);
        func_00008470(arg0->unk100, arg0->unk108);
        sceKernelDmaOpFree(arg0->unkE8);
        func_00008470(arg0->unk100, arg0->unkEC);
        func_00008470(temp_s1, arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000ABA0);

#if FW_VERSION < 282
void func_00008394(void) {
    sceSysregMsifResetEnable(1);
    sceSysregMsifClkSelect(1, 0);
    sceSysregMsifBusClockEnable(1);
    sceSysregMsifClkEnable(1);
    sceSysregMsifIoEnable(1);
    sceSysregMsifResetDisable(1);
}

void func_000083DC(void) {
    sceSysregMsifResetEnable(1);
    sceSysregMsifIoDisable(1);
    sceSysregMsifClkDisable(1);
    sceSysregMsifBusClockDisable(1);
    sceSysregMsifClkSelect(1, 0);
    sceSysregMsifResetDisable(1);
}

void func_00008424(void *arg0) {
    s32 *temp_a3;
    s32 *temp_t6;
    void *temp_t9;

    temp_t9 = arg0 + 0xC;
    temp_t6 = M2C_FIELD(temp_t9, s32 **, 0x18);
    temp_a3 = M2C_FIELD(temp_t9, s32 **, 0x1C);
    *temp_t6 |= 0x2020;
    *temp_a3 |= 0x10000;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 4);
    *temp_a3 |= 0x20;
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 8);
    *temp_a3 |= 0x400;
}
#endif

#if FW_VERSION < 271
s32 func_00008480(SceWlanMac *mac, s32 on) {
    s8 v;

    if (func_000090E8(mac, 0x23, &v) < 0)
        return -1;
    if (v >= 0 && on == 1)
        return -2;
    if (v >= 0 && on == 0)
        return 0;
    v = (on == 1) ? 1 : -2;
    if (func_00009160(mac, 0x28, &v) < 0)
        return -1;
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_00008480);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00008524);
#else
void func_0000AC3C(void) {
    sceSysregMsifResetEnable(1);
    sceSysregMsifClkSelect(1, 0);
    sceSysregMsifDelaySelect(1, 4);
    sceSysregMsifBusClockEnable(1);
    sceSysregMsifClkEnable(1);
    sceSysregMsifIoEnable(1);
    sceSysregMsifResetDisable(1);
}

void func_0000AC90(struct Unk_func_0000AC90_0 *arg0) {
    s32 *temp_a3;
    s32 *temp_t6;
    struct Unk_func_0000AC90_temp_t9 *temp_t9;

    temp_t9 = (u8 *)arg0 + 0xC;
    temp_t6 = temp_t9->unk18;
    temp_a3 = temp_t9->unk1C;
    *temp_t6 |= 0x2020;
    *temp_a3 |= 0x10000;
    arg0->unk8 = (s32) (arg0->unk8 | 4);
    *temp_a3 |= 0x20;
    arg0->unk8 = (s32) (arg0->unk8 | 8);
    *temp_a3 |= 0x400;
}
#endif

#if FW_VERSION >= 350
s32 func_0000AF8C(s32 arg0) {
    func_000086B0(arg0);
    sceSysregMsifResetEnable(1);
    sceSysregMsifIoDisable(1);
    sceSysregMsifClkDisable(1);
    sceSysregMsifBusClockDisable(1);
    sceSysregMsifClkSelect(1, 0);
    sceSysregMsifDelaySelect(1, 4);
    sceSysregMsifResetDisable(1);
    return 0;
}

s32 func_0000AFEC(void) {
    sceSysconResetDevice(4, 1);
    sceKernelDelayThread(0x64U);
    sceSysconResetDevice(4, 0);
    return 0;
}
#endif

s32 func_0000ACEC(void *p) {
    u8 v = 0;

    func_000091D4((u8 *)p + 0xC, &v);
    return v == 0x88;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00009A6C);
#endif

#if FW_VERSION < 201
s32 func_00008690(SceWlanMac *mac) {
    sceKernelDmaOpSync(mac->dmaOp, 1, 0);
    if (mac->dmaBuf != NULL) {
        func_000067B8(mac->sc, mac->dmaBuf);
        mac->dmaBuf = NULL;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000AD1C);
#endif

s32 func_0000ADB0(SceWlanMac *mac, s32 ms) {
    SceWlanBus *bus = &mac->bus;
    u32 timeout = ms * 1000;
    u32 bits;
    s32 intr;
    u32 st;
    s32 ret;

    intr = sceKernelCpuSuspendIntr();
    st = *bus->statusReg;
    sceKernelCpuResumeIntrWithSync(intr);
    if ((st & 0xA) != 0xA) {
        ret = sceKernelWaitEventFlag(bus->evf, 0x18, 1, &bits, (timeout != 0) ? &timeout : NULL);
        sceKernelClearEventFlag(bus->evf, ~8);
        if (bits & 0x10)
            return -3;
        if (ret == 0x800201AA)
            return -1;
    }
    return 0;
}

s32 func_0000AE60(SceWlanMac *mac, s32 ms) {
    SceWlanBus *bus = &mac->bus;
    u32 timeout = ms * 1000;
    u32 bits;
    s32 intr;
    u32 st;
    s32 ret;

    intr = sceKernelCpuSuspendIntr();
    st = *bus->statusReg;
    sceKernelCpuResumeIntrWithSync(intr);
    if ((st & 0x2000) == 0) {
        ret = sceKernelWaitEventFlag(bus->evf, 0x11, 1, &bits, (timeout != 0) ? &timeout : NULL);
        sceKernelClearEventFlag(bus->evf, ~1);
        if (bits & 0x10)
            return -3;
        if (ret == 0x800201A8)
            return -1;
    }
    return ((st & 0x100) == 0) ? 0 : -1;
}

#if FW_VERSION < 282
void func_00008854(s32 arg0, s32 arg1) {
    func_00009500(arg0 + 0xC, arg1);
}

s32 func_00008870(SceWlanMac *mac, s32 ms) {
    SceWlanBus *bus = &mac->bus;
    u32 timeout = ms * 1000;
    u32 bits;
    s32 intr;
    u32 st;
    s32 ret;

    intr = sceKernelCpuSuspendIntr();
    st = *bus->statusReg;
    sceKernelCpuResumeIntrWithSync(intr);
    if ((st & 0x4000) == 0) {
    ret = sceKernelWaitEventFlag(bus->evf, 4, 1, &bits, (timeout != 0) ? &timeout : NULL);
    sceKernelClearEventFlag(bus->evf, ~4);
    if (ret == 0x800201A8)
        return -1;
    if (ret != 0)
        return -1;
    }
    return 0;
}

s32 func_00008914(void *arg0, s32 arg1, u16 *arg2) {
    s32 temp_s2;

    *arg2 = 0;
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0xC), 1, NULL);
    temp_s2 = func_0000BD90((s32) (arg0 + 0xC), arg1, 2, (s32) arg2);
    *arg2 = __builtin_allegrex_wsbh(*arg2);
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0xC), 1);
    return temp_s2;
}
#else
s32 func_0000AF1C(struct Unk_func_0000AF1C_0 *arg0, s32 arg1, u16 *arg2) {
    s32 temp_s2;

    *arg2 = 0;
    sceKernelWaitSema(arg0->unkC, 1, NULL);
    temp_s2 = func_0000BD90((s32) (&arg0->unkC), arg1, 2, (s32) arg2);
    *arg2 = __builtin_allegrex_wsbh(*arg2);
    sceKernelSignalSema(arg0->unkC, 1);
    return temp_s2;
}
#endif

s32 func_0000AF9C(SceWlanMac *mac, s32 a, u16 *p) {
    s32 ret;

    sceKernelWaitSema(mac->bus.sema, 1, NULL);
    ret = func_0000BE8C(&mac->bus, a, (s16)__builtin_allegrex_wsbh(*p), 2);
    if (ret < 0)
        ret = -1;
    sceKernelSignalSema(mac->bus.sema, 1);
    return ret;
}

#if FW_VERSION < 282
s32 func_00008A10(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_s2;

    *arg2 = 0;
    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0xC), 1, NULL);
    temp_s2 = func_0000BD90((s32) (arg0 + 0xC), arg1, 4, (s32) arg2);
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0xC), 1);
    return temp_s2;
}

s32 func_00008A84(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_s1;

    sceKernelWaitSema(M2C_FIELD(arg0, u32 *, 0xC), 1, NULL);
    temp_s1 = __builtin_allegrex_max(func_0000BE8C((s32) (arg0 + 0xC), arg1, *arg2, 2), -1);
    sceKernelSignalSema(M2C_FIELD(arg0, u32 *, 0xC), 1);
    return temp_s1;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/wlan", func_00008AF8);

INCLUDE_ASM("nonmatchings/wlan", func_00008CC8);

s32 func_00008EEC(SceWlanBus *bus, s32 unused, u32 val) {
    s32 intr;
    u32 st;
    u32 cmd;

    intr = sceKernelCpuSuspendIntr();
    *bus->reg |= 0xA00;
    sceKernelCpuResumeIntrWithSync(intr);
    for (;;) {
        intr = sceKernelCpuSuspendIntr();
        st = *bus->reg;
        sceKernelCpuResumeIntrWithSync(intr);
        if ((st & 0x200) == 0)
            break;
        sceKernelDelayThread(10000);
    }
    intr = sceKernelCpuSuspendIntr();
    cmd = val | 0x5000;
    *bus->reg &= ~0x100;
    sceKernelCpuResumeIntrWithSync(intr);
    intr = sceKernelCpuSuspendIntr();
    *bus->cmdReg = cmd;
    sceKernelCpuResumeIntrWithSync(intr);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_00008EEC);
#endif

#if FW_VERSION < 150
s32 func_00008FB4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/wlan", func_00008FBC);

s32 func_000091C4(SceWlanBus *bus, s32 unused, u32 val) {
    s32 intr;
    u32 st;
    u32 cmd;

    intr = sceKernelCpuSuspendIntr();
    *bus->reg |= 0xA00;
    sceKernelCpuResumeIntrWithSync(intr);
    for (;;) {
        intr = sceKernelCpuSuspendIntr();
        st = *bus->reg;
        sceKernelCpuResumeIntrWithSync(intr);
        if ((st & 0x200) == 0)
            break;
        sceKernelDelayThread(10000);
    }
    intr = sceKernelCpuSuspendIntr();
    cmd = val | 0xA000;
    *bus->reg |= 0x100;
    sceKernelCpuResumeIntrWithSync(intr);
    intr = sceKernelCpuSuspendIntr();
    *bus->cmdReg = cmd;
    sceKernelCpuResumeIntrWithSync(intr);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_000091C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00009678);

INCLUDE_ASM("nonmatchings/wlan", func_0000970C);
#endif

#if FW_VERSION < 150
s32 func_00009284(SceWlanMac *mac, s32 flag) {
    union {
        u32 w[2];
        u8 b[8];
    } cmd;
    struct {
        u16 reg;
        u32 val;
    } req;

    if (flag) {
        req.reg = 0xA5F0;
        req.val = 0x5D;
        mac->regWrite(mac, 0x20B, &req);
        req.reg = 0xA824;
        req.val = 0x80608;
        mac->regWrite(mac, 0x20B, &req);
        sceKernelDelayThread(1000000);
    }
    cmd.w[0] = 0;
    cmd.w[1] = 0;
    cmd.b[0] = 0x11;
    func_00008AF8(&mac->bus, &cmd, 1000);
    mac->flags |= 0x20;
    return 0;
}

s32 func_00009348(SceWlanMac *mac, s32 flag) {
    union {
        u32 w[2];
        u8 b[8];
    } cmd;
    struct {
        u16 reg;
        u32 val;
    } req;

    cmd.w[0] = 0;
    cmd.w[1] = 0;
    cmd.b[0] = 0x12;
    func_00008AF8(&mac->bus, &cmd, 1000);
    sceKernelDelayThread(500000);
    mac->flags &= ~0x20;
    if (flag) {
        req.reg = 0xA824;
        req.val = 0x80008;
        mac->regWrite(mac, 0x20B, &req);
        req.reg = 0xA5F0;
        req.val = 0x1D;
        mac->regWrite(mac, 0x20B, &req);
    }
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_0000B018(struct Unk_func_0000B018_0 *arg0, s32 arg1, s32 *arg2) {
    s32 temp_s2;

    *arg2 = 0;
    sceKernelWaitSema(arg0->unkC, 1, NULL);
    temp_s2 = func_0000BD90((s32) (&arg0->unkC), arg1, 4, (s32) arg2);
    sceKernelSignalSema(arg0->unkC, 1);
    return temp_s2;
}

INCLUDE_ASM("nonmatchings/wlan", func_0000B08C);

INCLUDE_ASM("nonmatchings/wlan", func_0000B120);
#endif

#if FW_VERSION < 310
void func_0000B194(u8 *p, s32 len) {
    s32 n = len >> 2;
    s32 rem = len - n * 4;
    u32 w;
    s32 i;

    for (i = 0; i < n; i++) {
        *(SceWlanBytes4 *)&w = *(SceWlanBytes4 *)&p[i * 4];
        w = __builtin_allegrex_wsbw(w);
        *(SceWlanBytes4 *)&p[i * 4] = *(SceWlanBytes4 *)&w;
    }
    if (rem != 0) {
        *(SceWlanBytes4 *)&w = *(SceWlanBytes4 *)&p[i * 4];
        w = __builtin_allegrex_wsbw(w) << ((4 - rem) * 8);
        memcpy(&p[i * 4], &w, rem);
    }
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_0000B194);
#endif

#if FW_VERSION < 282
s32 func_00009500(SceWlanBus *bus, s32 ms) {
    u32 timeout = ms * 1000;
    u32 bits;
    s32 intr;
    u32 st;
    s32 ret;

    intr = sceKernelCpuSuspendIntr();
    st = *bus->statusReg;
    sceKernelCpuResumeIntrWithSync(intr);
    if ((st & 0x1000) == 0) {
        ret = sceKernelWaitEventFlag(bus->evf, 2, 1, &bits, (timeout != 0) ? &timeout : NULL);
        sceKernelClearEventFlag(bus->evf, ~2);
        if (ret == 0x800201A8)
            return -1;
        intr = sceKernelCpuSuspendIntr();
        st = *bus->statusReg;
        sceKernelCpuResumeIntrWithSync(intr);
    }
    if (st & 0x200)
        return -2;
    return ((st & 0x100) == 0) ? 0 : -1;
}
#else
void func_0000B24C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000161A4(arg0, arg1, arg2, arg3, arg4);
}
#endif

s32 func_0000B268(SceWlanMac *mac) {
    u8 v;
    s32 ret;

    for (;;) {
        ret = func_000091D4(&mac->bus, &v);
        if (ret < 0)
            return -3;
        if (v == 0x80)
            break;
        if (v == 0xC0)
            return -1;
        if (v == 0xC1)
            return -2;
    }
    v = 0;
    if (func_000090E8(mac, 0x24, &v) != 0)
        return -3;
    return 0;
}

s32 func_0000B30C(SceWlanMac *mac, s32 bit) {
    u8 mask = 1 << bit;
    u8 v;
    s32 ret = -1;
    s32 i;

    if (func_000090E8(mac, 0x25, &v) < 0)
        goto end;
    v |= mask;
    if (func_00009160(mac, 0x25, &v) < 0)
        goto end;
    for (i = 0; i < 0x100; i++) {
        if (func_000090E8(mac, 0x25, &v) < 0)
            break;
        if (v & mask) {
            ret = 0;
            break;
        }
        sceKernelDelayThread(10000);
    }
end:
    return ret;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000A4C8(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_s3;

    temp_s3 = sceKernelCpuSuspendIntr();
    if (!(*M2C_FIELD(arg1, u16 **, 0x30) & 4)) {
        sceKernelCallSubIntrHandler(arg0, 0, arg0, arg2);
    }
    sceKernelCpuResumeIntr(temp_s3);
    return -1;
}
#endif

#if FW_VERSION >= 282
s32 func_0000B3CC(s32 arg0, struct Unk_func_0000B3CC_1 *arg1, M2C_UNK arg2) {
    s32 temp_s3;

    temp_s3 = sceKernelCpuSuspendIntr();
    if (!(*arg1->unk30 & 4)) {
        sceKernelCallSubIntrHandler(arg0, 0, arg0, arg2);
    }
    sceKernelCpuResumeIntr(temp_s3);
    return -1;
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000B450);

#if FW_VERSION < 201
s32 func_00009810(void) {
    return 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00009818);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000A710);

INCLUDE_ASM("nonmatchings/wlan", func_0000A810);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00009900);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000B524);

INCLUDE_ASM("nonmatchings/wlan", func_0000B670);

INCLUDE_ASM("nonmatchings/wlan", func_0000B8CC);

INCLUDE_ASM("nonmatchings/wlan", func_0000B9D8);

INCLUDE_ASM("nonmatchings/wlan", func_0000BAD0);
#endif

s32 func_0000BD90(SceWlanBus *bus, u32 cmd, s32 len, void *out) {
    u32 data[4];
    u8 hdr[2];
    s32 i;

    if (cmd >= 0x100)
        return -1;
    hdr[0] = cmd;
    hdr[1] = len;
    for (i = 0; i < 5; i++) {
        if (func_00009468(bus, &hdr[0], &hdr[1], 0, 0) == 0)
            break;
    }
    if (i == 5)
        return -3;
    for (i = 0; i < 5; i++) {
        if (func_000097DC(bus, data, len) == 0)
            break;
    }
    if (i == 5)
        return -3;
    memcpy(out, data, len);
    return 0;
}

INCLUDE_ASM("nonmatchings/wlan", func_0000BE8C);

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000ACB8(void) {
    return 0;
}
#endif

#if FW_VERSION < 271
s32 func_00009CB0(void *p, u8 a, u32 b, u32 c) {
    u8 buf[8];
    u16 lo = c;
    u16 hi = b >> 16;

    buf[0] = a;
    buf[1] = lo >> 8;
    buf[2] = lo;
    buf[3] = hi >> 8;
    buf[4] = hi;
    buf[5] = b >> 8;
    buf[6] = b;
    func_00008AF8((u8 *)p + 0xC, buf, 1000);
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_00009CB0);
#endif

#if FW_VERSION >= 282
s32 func_0000BF70(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000BF78);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00009FA8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000A620);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000A294);
#else
INCLUDE_ASM("nonmatchings/wlan", func_0000C210);

INCLUDE_ASM("nonmatchings/wlan", func_0000C508);

INCLUDE_ASM("nonmatchings/wlan", func_0000C800);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000CBA4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000A6E0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000A898);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/wlan", func_0000A98C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000B050);

INCLUDE_ASM("nonmatchings/wlan", func_0000B1CC);
#endif

#if FW_VERSION < 150
s32 func_0000AAB0(SceWlanMac *mac) {
    SceWlanMlmeBuf *b = mac->sync->buf;
    u16 len;
    u32 type;
    s32 (*fn)(SceWlanMac *, u8 *, s32, s32);

    func_00008914(mac, 0x4A, &len);
    if (len < 4)
        return -1;
    if (len > 0xC00)
        len = 0xC00;
    memset(b->frame, 0, 0xC00);
    if (func_0000F2A4(mac, b->frame, len) == 0) {
        type = (u16)(*(u16 *)b->frame - 0x8000);
        if (type < 0x50) {
            fn = D_000137D0[type];
            if (fn != NULL)
                fn(mac, b->frame, 0, 0);
            else
                func_0000ABB4(mac, b->frame, 0, 0);
        }
    }
    sceKernelSignalSema(mac->sync->buf->sema, 1);
    return 0;
}
#endif

#if FW_VERSION < 282
s32 func_0000ABB4(SceWlanMac *mac, u8 *frame, s32 a, s32 b) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000B328);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000CCC8);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/wlan", func_0000D020);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000CE48);

INCLUDE_ASM("nonmatchings/wlan", func_0000CFEC);

s32 func_0000D18C(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000D194);

#if FW_VERSION < 201
s32 func_0000AD1C(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));
    s32 v;
    u8 c;

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    if (((f[7] << 8) | f[6]) != 0)
        msg->status = -1;
    c = f[8];
    if (c & 3)
        msg->cmd = 0x107;
    else
        msg->cmd = 0x108;
    if (c & 5)
        msg->arg = 0;
    else
        msg->arg = 1;
    v = (f[0xB] << 8) | f[0xA];
    if (v == 1)
        msg->arg2 = 0;
    else if (v == 2)
        msg->arg2 = 1;
    else
        msg->arg2 = 0xFFFF;
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000AD1C);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000D2F4);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000B85C);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/wlan", func_0000B174);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000D658);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000D924);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000CBC4);

INCLUDE_ASM("nonmatchings/wlan", func_0000CF20);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000DBA4);

INCLUDE_ASM("nonmatchings/wlan", func_0000DF00);
#endif

#if FW_VERSION < 201
s32 func_0000E088(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));
    s32 x;
    s32 st;

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    x = (f[9] << 8) | f[8];
    if (x < 0)
        msg->cmd = 0x104;
    else if (x < 2)
        msg->cmd = 0x103;
    else
        msg->cmd = 0x104;
    if (f[0xD] == 0) {
        switch (f[0xC]) {
        case 0:
            msg->arg = 1;
            break;
        case 1:
            msg->arg = 2;
            break;
        case 2:
            msg->arg = 3;
            break;
        default:
            msg->arg = 4;
            break;
        }
    } else {
        msg->arg = 0;
    }
    st = (f[7] << 8) | f[6];
    if (st != 0)
        msg->status = -1;
    else
        msg->status = 0;
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_0000E088);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000E180);

#if FW_VERSION < 201
s32 func_0000E2CC(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));
    u8 c;

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    if (((f[9] << 8) | f[8]) == 0)
        msg->cmd = 0x10C;
    else
        msg->cmd = 0x10B;
    c = f[0xA];
    if (c & 4)
        msg->arg = 0;
    else if (c & 2)
        msg->arg = 1;
    else
        msg->arg = 2;
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_0000E2CC);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000E378);

INCLUDE_ASM("nonmatchings/wlan", func_0000E4EC);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_00016A0C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00018E98);

INCLUDE_RODATA("nonmatchings/wlan", D_00018FD8);
#endif

INCLUDE_RODATA("nonmatchings/wlan", D_00018FEC);

INCLUDE_RODATA("nonmatchings/wlan", D_00018FFC);

INCLUDE_RODATA("nonmatchings/wlan", D_00019000);

INCLUDE_RODATA("nonmatchings/wlan", D_00019004);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00019008);
#endif

INCLUDE_RODATA("nonmatchings/wlan", D_0001900C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_000167A4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_00013750);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/wlan", D_0001359C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00019010);
#endif

INCLUDE_RODATA("nonmatchings/wlan", D_0001901C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000BC54);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000C6E4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000ED98);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/wlan", func_0000C054);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/wlan", func_0000C1B4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000E5F0);

INCLUDE_ASM("nonmatchings/wlan", func_0000E99C);

INCLUDE_ASM("nonmatchings/wlan", func_0000EAD4);
#endif

#if FW_VERSION < 201
s32 func_0000ECD0(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));
    s32 i;

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    if (((f[9] << 8) | f[8]) == 0)
        msg->cmd = 0x207;
    else
        msg->cmd = 0x206;
    if (((f[7] << 8) | f[6]) == 0)
        msg->status = 0;
    else
        msg->status = -1;
    for (i = 0; i < 8; i++) {
        if ((f[0xA] >> i) & 1)
            break;
    }
    if (i < 8) {
        msg->arg = i;
        msg->arg2 = (f[0xB] >> i) & 1;
    } else {
        msg->status = -1;
    }
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_0000ECD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000EDC8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000DBFC);

INCLUDE_ASM("nonmatchings/wlan", func_0000DD0C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000E6DC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000E91C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000DD9C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000DF24);

INCLUDE_ASM("nonmatchings/wlan", func_0000DFCC);

INCLUDE_ASM("nonmatchings/wlan", func_0000E074);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000C488);
#else
INCLUDE_ASM("nonmatchings/wlan", func_0000F008);

INCLUDE_ASM("nonmatchings/wlan", func_0000F190);
#endif

#if FW_VERSION < 201
s32 func_0000F2A4(SceWlanMac *mac, void *buf, s32 len) {
    s32 small = len < 0x80;

    if (small)
        func_000068B4(mac, 2);
    while (func_00009FA8(mac, 0x100, (u16)len, buf) < len)
        ;
    if (small)
        func_000068B4(mac, 3);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_0000F2A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0000C5E4(void *arg0) {
    sceKernelSignalSema(*M2C_FIELD(M2C_FIELD(arg0, void **, 0xB8), u32 **, 0x40), 1);
    return 0;
}
#endif

#if FW_VERSION < 150
s32 func_0000C5E4(void *arg0) {
    sceKernelSignalSema(*M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), u32 **, 0x40), 1);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_0000F370(struct Unk_func_0000F370_0 *arg0) {
    sceKernelSignalSema(*arg0->unkB8->unk40, 1);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000F39C);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000F6B8);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000F4B8);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000F5A8);

INCLUDE_ASM("nonmatchings/wlan", func_0000F6C8);

INCLUDE_ASM("nonmatchings/wlan", func_0000F81C);

INCLUDE_ASM("nonmatchings/wlan", func_0000F984);

INCLUDE_ASM("nonmatchings/wlan", func_0000FA98);

INCLUDE_ASM("nonmatchings/wlan", func_0000FBC4);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000FEE4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000CFD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0000FCDC);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_0000FF9C);

INCLUDE_ASM("nonmatchings/wlan", func_00010068);

INCLUDE_ASM("nonmatchings/wlan", func_000101BC);

INCLUDE_ASM("nonmatchings/wlan", func_00010310);

INCLUDE_ASM("nonmatchings/wlan", func_00010464);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000DA38);
#else
INCLUDE_ASM("nonmatchings/wlan", func_000105B0);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00010778);

INCLUDE_ASM("nonmatchings/wlan", func_00010850);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00010DE0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00010954);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00010A20);

INCLUDE_ASM("nonmatchings/wlan", func_00010B08);

INCLUDE_ASM("nonmatchings/wlan", func_00010BC4);

INCLUDE_ASM("nonmatchings/wlan", func_00010CD0);

INCLUDE_ASM("nonmatchings/wlan", func_00010DCC);

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000FAEC(void) {
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_000110D4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
s32 func_0000FAF4(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000FAFC(void) {
    return 0;
}
#endif

#if FW_VERSION == 201
s32 func_0000FB04(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000FB0C);

INCLUDE_ASM("nonmatchings/wlan", func_0000FC90);

s32 func_0000FE1C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000E278);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/wlan", func_0000DF68);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00010EBC);

INCLUDE_ASM("nonmatchings/wlan", func_00010FCC);

INCLUDE_ASM("nonmatchings/wlan", func_0001115C);

INCLUDE_ASM("nonmatchings/wlan", func_00011304);

INCLUDE_ASM("nonmatchings/wlan", func_00011440);

INCLUDE_ASM("nonmatchings/wlan", func_00011574);

INCLUDE_ASM("nonmatchings/wlan", func_00011688);

INCLUDE_ASM("nonmatchings/wlan", func_00011798);

INCLUDE_ASM("nonmatchings/wlan", func_000118AC);
#endif

#if FW_VERSION < 201
s32 func_00011948(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));
    s32 st;

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    st = (f[7] << 8) | f[6];
    msg->cmd = 0x202;
    msg->status = st;
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00011948);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000117CC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_000119C8);
#endif

#if FW_VERSION < 201
s32 func_00011A4C(SceWlanMac *m) {
    u8 *f = m->sync->buf->frame;
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));
    s32 st;

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    st = (f[7] << 8) | f[6];
    msg->cmd = 0xE;
    if (st != 0)
        msg->status = -1;
    else
        msg->status = 0;
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00011A4C);
#endif

#if FW_VERSION < 201
s32 func_00011AE4(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    msg->cmd = 2;
    msg->status = 0;
    if (f[0x20] != 0) {
        msg->arg = f[0x20];
        msg->buf = func_0000840C(m->sc, f[0x20] * 0x88);
        func_0000ED5C(&f[0x21], (f[0x1F] << 8) | f[0x1E], f[0x20], &f[0xE], msg->buf);
    } else {
        msg->arg = 0;
        msg->buf = NULL;
    }
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00011AE4);
#endif

#if FW_VERSION < 201
s32 func_00011BB0(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    msg->cmd = 3;
    msg->status = (f[0xB] << 8) | f[0xA];
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00011BB0);
#endif

#if FW_VERSION < 201
s32 func_00011C30(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));
    s32 st;

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    st = (f[7] << 8) | f[6];
    msg->cmd = 4;
    msg->status = st;
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00011C30);
#endif

#if FW_VERSION < 201
s32 func_00011CB0(SceWlanMac *m) {
    u8 *f = m->sync->buf->frame;
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    msg->cmd = 6;
    if (((f[7] << 8) | f[6]) != 0)
        msg->status = -1;
    else
        msg->status = 0;
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00011CB0);
#endif

#if FW_VERSION < 201
s32 func_00011D44(SceWlanMac *m) {
    u8 *f = m->sync->buf->frame;
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));
    s32 st;

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    msg->cmd = 7;
    st = (f[7] << 8) | f[6];
    if (st != 0)
        msg->status = -1;
    else
        msg->status = 0;
    *(SceWlanEtherAddr *)&msg->arg = *(SceWlanEtherAddr *)&f[8];
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00011D44);
#endif

#if FW_VERSION < 201
s32 func_00011DF8(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    msg->cmd = 0xA;
    msg->status = (f[7] << 8) | f[6];
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00011DF8);
#endif

#if FW_VERSION < 201
s32 func_00011E78(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    msg->cmd = 0xB;
    msg->status = (f[7] << 8) | f[6];
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00011E78);
#endif

#if FW_VERSION < 201
s32 func_00011EF8(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    msg->cmd = (((f[9] << 8) | f[8]) == 0) ? 0x102 : 0x101;
    msg->status = (f[7] << 8) | f[6];
    msg->arg = func_00016010((f[0xB] << 8) | f[0xA]);
    msg->arg2 = (f[0xD] << 8) | f[0xC];
    msg->buf18 = func_0000840C(m->sc, 4);
    memcpy(msg->buf18, &f[0xE], msg->arg2);
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00011EF8);
#endif

#if FW_VERSION < 201
s32 func_00011FE0(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));
    s32 st;

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    st = (f[7] << 8) | f[6];
    msg->cmd = 9;
    if (st != 0)
        msg->status = -1;
    else
        msg->status = 0;
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00011FE0);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00012070);

INCLUDE_ASM("nonmatchings/wlan", func_00012138);

INCLUDE_ASM("nonmatchings/wlan", func_00012200);

#if FW_VERSION < 201
s32 func_000122AC(SceWlanMac *m) {
    u8 *f = m->sync->buf->frame;
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));
    s32 st;

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    st = (f[7] << 8) | f[6];
    msg->cmd = 8;
    if (st != 0)
        msg->status = -1;
    else
        msg->status = 0;
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_000122AC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000AD1C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00012344);
#endif

#if FW_VERSION < 201
s32 func_00012430(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));
    s32 st;

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    st = (f[7] << 8) | f[6];
    if (st != 0)
        msg->status = -1;
    msg->cmd = (((f[9] << 8) | f[8]) == 0) ? 0x10A : 0x109;
    if (msg->cmd == 0x10A)
        msg->arg = (f[0xB] << 8) | f[0xA];
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00012430);
#endif

#if FW_VERSION < 201
s32 func_000124EC(SceWlanMac *m) {
    u8 *f = m->sync->buf->frame;
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));
    s32 st;

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    st = (f[7] << 8) | f[6];
    msg->cmd = 0x10;
    if (st == 0)
        msg->status = 0;
    else
        msg->status = -1;
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_000124EC);
#endif

#if FW_VERSION < 201
s32 func_00012584(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));
    s32 st;

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    st = (f[7] << 8) | f[6];
    msg->cmd = 0x304;
    if (st == 0)
        msg->status = 0;
    else
        msg->status = -1;
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00012584);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0001232C);
#endif

#if FW_VERSION < 150
s32 func_00012614(SceWlanMac *m) {
    u8 *f = m->sync->buf->frame;
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    msg->cmd = 0x204;
    if (((f[7] << 8) | f[6]) == 0)
        msg->status = 0;
    else
        msg->status = -1;
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00012614);
#endif

#if FW_VERSION < 201
s32 func_000126AC(SceWlanMac *m, u8 *f) {
    SceWlanMlmeMsg *msg = func_0000840C(m->sc, sizeof(SceWlanMlmeMsg));

    memset(msg, 0, sizeof(SceWlanMlmeMsg));
    if (((f[9] << 8) | f[8]) == 0)
        msg->cmd = 0x209;
    else
        msg->cmd = 0x208;
    if (((f[7] << 8) | f[6]) == 0)
        msg->status = 0;
    else
        msg->status = -1;
    msg->arg = f[0xA];
    msg->arg2 = (f[0xB] == 1);
    sceKernelSendMbx(m->mbx, msg);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_000126AC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00010ADC(void) {
    return 0;
}

s32 func_00010AE4(void) {
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000DD0C);

INCLUDE_ASM("nonmatchings/wlan", func_0000E91C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00010AEC(void) {
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000DF24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00010AF4(void) {
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0000DFCC);

INCLUDE_ASM("nonmatchings/wlan", func_0000E074);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00010AFC(void) {
    return 0;
}

s32 func_00010B04(void) {
    return 0;
}
#endif

#if FW_VERSION == 201
s32 func_00010B0C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00010B14);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_0000ED5C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_0000F2DC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0001276C);

INCLUDE_ASM("nonmatchings/wlan", func_00012814);

INCLUDE_ASM("nonmatchings/wlan", func_000128A4);

INCLUDE_ASM("nonmatchings/wlan", func_00012934);

INCLUDE_ASM("nonmatchings/wlan", func_000129EC);

INCLUDE_ASM("nonmatchings/wlan", func_00012ABC);

INCLUDE_ASM("nonmatchings/wlan", func_00012B4C);

INCLUDE_ASM("nonmatchings/wlan", func_00012BDC);

INCLUDE_ASM("nonmatchings/wlan", func_00012C6C);

INCLUDE_ASM("nonmatchings/wlan", func_00012CFC);

INCLUDE_ASM("nonmatchings/wlan", func_00012D8C);
#endif

#if FW_VERSION < 271
s32 func_00013620(SceWlanMac *mac, void *buf, u32 size) {
    u16 n;

    if (size > 0xFFFF)
        return 0;
    if (mac->flags & 0x20)
        return 0;
    n = (size + 3) & ~3;
    func_0000AF9C(mac, 0x42, &n);
    return func_0000A294(mac, 0x102, n, buf);
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00013620);
#endif

#if FW_VERSION < 150
u32 func_0000F550(SceWlanMac *mac, void *buf, u32 max) {
    u16 len;
    u32 n;

    if (mac->flags & 0x20)
        return 0;
    func_00008914(mac, 0x40, &len);
    n = (len + 3) & 0xFFFC;
    if (max < n)
        return 0;
    func_00009FA8(mac, 0x102, n, buf);
    return len;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000F550);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/wlan", D_0001795C);

INCLUDE_RODATA("nonmatchings/wlan", D_00016810);

INCLUDE_RODATA("nonmatchings/wlan", D_0001907C);

INCLUDE_RODATA("nonmatchings/wlan", D_000137C0);

INCLUDE_RODATA("nonmatchings/wlan", D_00019090);

INCLUDE_RODATA("nonmatchings/wlan", D_000179A8);

INCLUDE_RODATA("nonmatchings/wlan", D_000180E4);

INCLUDE_ASM("nonmatchings/wlan", func_00012398);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00011730);

INCLUDE_ASM("nonmatchings/wlan", func_000117F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_0000FAA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0000FC6C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/wlan", func_0000F5E4);

INCLUDE_ASM("nonmatchings/wlan", func_0000F7A0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00010364);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000105A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00012B20);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/wlan", func_000108EC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/wlan", func_000104E4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00010720);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00012E18);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_000136A0);

INCLUDE_ASM("nonmatchings/wlan", func_0001374C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/wlan", func_00015E14);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0001381C);

INCLUDE_ASM("nonmatchings/wlan", func_00013A00);

INCLUDE_ASM("nonmatchings/wlan", func_00014A98);

INCLUDE_ASM("nonmatchings/wlan", func_00014CA0);

INCLUDE_ASM("nonmatchings/wlan", func_00014ED4);

INCLUDE_ASM("nonmatchings/wlan", func_00014FC4);

INCLUDE_ASM("nonmatchings/wlan", func_000151C8);
#endif

INCLUDE_ASM("nonmatchings/wlan", func_000152B4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00013004);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_0001411C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
void func_00015218(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xB8);
    if (M2C_FIELD(temp_s0, s32 *, 0x74) == 0) {
        sceKernelClearEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), -0x201U);
        M2C_FIELD(temp_s0, s32 *, 0x30) = 1;
        M2C_FIELD(temp_s0, s32 *, 0x6C) = -1;
        if ((u32) (sceKernelGetSystemTimeLow() - D_0002E3DC) >= (u32) (M2C_FIELD(arg0, s32 *, 0x128) * 0x3E8)) {

        } else if (sceKernelPollEventFlag(M2C_FIELD(temp_s0, s32 *, 0x34), 0x400U, 1, NULL) != 0) {
            func_0000BC54((s32) arg0, 2, 0);
        }
        sceKernelSetEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), 0x400U);
        M2C_FIELD(temp_s0, s32 *, 0x74) = 1;
    }
}
#endif

#if FW_VERSION == 250
void func_000144F0(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xB8);
    if (M2C_FIELD(temp_s0, s32 *, 0x74) == 0) {
        sceKernelClearEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), -0x201U);
        M2C_FIELD(temp_s0, s32 *, 0x6C) = -1;
        M2C_FIELD(temp_s0, s32 *, 0x30) = 1;
        if (((u32) (sceKernelGetSystemTimeLow() - D_0002EE00) >= (u32) (M2C_FIELD(arg0, s32 *, 0x128) * 0x3E8)) || (M2C_FIELD(temp_s0, u8 *, 0x144) != 1)) {

        } else {
            func_0000BC54((s32) arg0, 2, 0);
        }
        sceKernelSetEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), 0x400U);
        M2C_FIELD(temp_s0, s32 *, 0x74) = 1;
    }
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/wlan", func_000131E8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00010A58);

INCLUDE_ASM("nonmatchings/wlan", func_00010C1C);
#endif

#if FW_VERSION == 201
void func_00010F6C(void *arg0) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0xB8);
    if (M2C_FIELD(temp_s1, s32 *, 0x74) == 0) {
        sceKernelClearEventFlag(M2C_FIELD(temp_s1, s32 *, 0x38), -0x201U);
        M2C_FIELD(temp_s1, s32 *, 0x6C) = -1;
        M2C_FIELD(temp_s1, s32 *, 0x30) = 1;
        if ((u32) (sceKernelGetSystemTimeLow() - D_0002D7A8) >= (u32) (M2C_FIELD(arg0, s32 *, 0x128) * 0x3E8)) {

        } else {
            func_0000BC54((s32) arg0, 2, 0);
        }
        sceKernelSetEventFlag(M2C_FIELD(temp_s1, s32 *, 0x38), 0x400U);
        M2C_FIELD(temp_s1, s32 *, 0x74) = 1;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00010F6C(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xB8);
    if (M2C_FIELD(temp_s0, s32 *, 0x74) == 0) {
        sceKernelClearEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), -0x201U);
        M2C_FIELD(temp_s0, s32 *, 0x6C) = -1;
        M2C_FIELD(temp_s0, s32 *, 0x30) = 1;
        func_0000BC54((s32) arg0, 2, 0);
        sceKernelSetEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), 0x400U);
        M2C_FIELD(temp_s0, s32 *, 0x74) = 1;
    }
}
#endif

#if FW_VERSION < 150
void func_00010F6C(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x7C);
    if (M2C_FIELD(temp_s0, s32 *, 0x74) == 0) {
        sceKernelClearEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), -0x201U);
        M2C_FIELD(temp_s0, s32 *, 0x6C) = -1;
        M2C_FIELD(temp_s0, s32 *, 0x30) = 1;
        func_0000BC54((s32) arg0, 2, 0);
        sceKernelSetEventFlag(M2C_FIELD(temp_s0, s32 *, 0x38), 0x400U);
        M2C_FIELD(temp_s0, s32 *, 0x74) = 1;
    }
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00010FE8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_0001795C);
#endif

#if FW_VERSION == 201 || (FW_VERSION >= 260 && FW_VERSION < 282)
INCLUDE_RODATA("nonmatchings/wlan", D_00016810);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_0001907C);

INCLUDE_RODATA("nonmatchings/wlan", D_000137C0);

INCLUDE_RODATA("nonmatchings/wlan", D_00019090);

INCLUDE_RODATA("nonmatchings/wlan", D_000188C4);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/wlan", D_00019090_v271);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/wlan", D_00019000_v260);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/wlan", D_000190C4);

INCLUDE_RODATA("nonmatchings/wlan", D_0002E23C);

INCLUDE_RODATA("nonmatchings/wlan", D_000190F8);

INCLUDE_ASM("nonmatchings/wlan", func_00012398);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/wlan", D_00013604);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_000153A8);

INCLUDE_ASM("nonmatchings/wlan", func_0001558C);

void func_00015958(struct Unk_func_00015958_0 *arg0) {
    struct Unk_func_00015958_temp_s0 *temp_s0;

    temp_s0 = arg0->unkB8;
    if (temp_s0->unk74 == 0) {
        sceKernelClearEventFlag(temp_s0->unk38, -0x201U);
        temp_s0->unk30 = 1;
        temp_s0->unk6C = -1;
        if ((u32) (sceKernelGetSystemTimeLow() - D_00019290) >= (u32) (arg0->unk128 * 0x3E8)) {

        } else if (sceKernelPollEventFlag(temp_s0->unk34, 0x400U, 1, NULL) != 0) {
            func_0000E5F0((s32) arg0, 2, 0);
        }
        sceKernelSetEventFlag(temp_s0->unk38, 0x400U);
        temp_s0->unk74 = 1;
    }
}

INCLUDE_ASM("nonmatchings/wlan", func_00015A1C);

INCLUDE_RODATA("nonmatchings/wlan", D_00019078);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/wlan", D_000195C0);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/wlan", D_000192B0_v303);
#endif

#if FW_VERSION == 302
INCLUDE_RODATA("nonmatchings/wlan", D_000192B0_v302);
#endif

#if FW_VERSION == 301
INCLUDE_RODATA("nonmatchings/wlan", D_000192B0_v301);
#endif

#if FW_VERSION == 300
INCLUDE_RODATA("nonmatchings/wlan", D_000192B0_v300);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_0001907C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/wlan", D_000137C0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00019080);

INCLUDE_RODATA("nonmatchings/wlan", D_00019088);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/wlan", D_00019090);

INCLUDE_RODATA("nonmatchings/wlan", D_000190C4);

INCLUDE_RODATA("nonmatchings/wlan", D_000190EC);

INCLUDE_RODATA("nonmatchings/wlan", D_000190F8);

INCLUDE_ASM("nonmatchings/wlan", func_00015B48);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_000116BC);
#endif

#if FW_VERSION < 150
void func_0001129C(SceWlanMac *mac) {
    SceWlanMlmeSync *s = mac->sync;

    if (s != NULL) {
        sceKernelDeleteEventFlag(s->evf38);
        sceKernelDeleteEventFlag(s->evf34);
        sceKernelDeleteSema(s->buf->sema);
        sceKernelDeleteSema(s->sema3C);
        if (s->buf != NULL)
            func_000067B8(mac->sc, s->buf);
        func_000067B8(mac->sc, s->unk50);
        func_000067B8(mac->sc, s->unk54);
        func_000067B8(mac->sc, s);
    }
}
#endif

INCLUDE_ASM("nonmatchings/wlan", func_00015C9C);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/wlan", func_00015E14);
#endif

#if FW_VERSION < 201
s32 func_00011718(SceWlanMac *m, s32 ms) {
    SceWlanMlmeSync *s = m->sync;
    u32 timeout = ms * 1000;
    u32 bits;

    if (sceKernelWaitEventFlag(s->evf34, 2, 1, &bits, (timeout != 0) ? &timeout : NULL) < 0)
        return -1;
    sceKernelClearEventFlag(s->evf34, ~2);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00011718);
#endif

s32 func_00016010(u16 key) {
    u32 i;

    for (i = 0; i < 5; i++) {
        if (D_000190C4[i].key == key)
            break;
    }
    if (i < 5)
        return D_000190C4[i].val;
    return -1;
}

#if FW_VERSION < 201
s32 func_000117D8(SceWlanMac *mac, u8 *buf, u32 max, s16 *out) {
    SceWlanMlmeSync *s = mac->sync;
    u32 timeout = 100000;
    u32 bits;
    s32 n;

    if (sceKernelWaitEventFlag(s->evf34, 2, 1, &bits, (timeout != 0) ? &timeout : NULL) < 0)
        return 0;
    sceKernelClearEventFlag(s->evf34, ~2);
    n = func_0000F550(mac, buf, max);
    if (n <= 0) {
        n = 0;
    } else if (out != NULL) {
        out[0] = buf[2];
        out[1] = (s8)(-((~buf[6] & 0x1F) * 4) - 24);
    }
    return n;
}

s32 func_000118BC(SceWlanMac *mac, s32 idx, void *dst, u32 len, u32 *out) {
    SceWlanMlmeSync *s = mac->sync;
    SceWlanBssEnt *e;

    sceKernelWaitSema(s->sema3C, 1, NULL);
    e = mac->bss[idx];
    if (out != NULL && out[0] >= 8)
        out[1] = e->flags;
    e->flags &= ~1;
    memcpy(dst, e->info + 0x10, len);
    sceKernelSignalSema(s->sema3C, 1);
    return 0;
}

s32 func_00016060(SceWlanMac *m, u8 *addr) {
    s32 i;

    for (i = 0; i < m->nAddrs; i++) {
        if (memcmp(m->bss[i], addr, 6) == 0)
            return i;
    }
    return -1;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00016060);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00013D64);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00011E64);

INCLUDE_ASM("nonmatchings/wlan", func_000122C8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000143E4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/wlan", func_00011A08);

INCLUDE_ASM("nonmatchings/wlan", func_00011E2C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00011F5C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000122B8);
#else
INCLUDE_ASM("nonmatchings/wlan", func_000160E0);

INCLUDE_ASM("nonmatchings/wlan", func_000161A4);

INCLUDE_ASM("nonmatchings/wlan", func_000161D0);

INCLUDE_ASM("nonmatchings/wlan", func_00016780);

INCLUDE_ASM("nonmatchings/wlan", func_000168E8);

INCLUDE_ASM("nonmatchings/wlan", func_00016D98);
#endif

#if FW_VERSION == 100
s32 func_00016F70(SceWlanMac *mac, s32 kind, s32 *out) {
    SceWlanMlmeSync *s = mac->sync;
    u16 v;

    if (s->unk30 == 1)
        sceKernelWaitEventFlag(s->evf38, 0x200, 1, NULL, NULL);
    if (kind != 0xC) {
        v = 2;
        if (func_0000F7A0(mac, 0xC, &v) == 0 && func_000122B8(mac, 0xC, &v) == 0 && v == 2)
            *out = 1;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00016F70);
#endif

#if FW_VERSION < 150
s32 func_00017048(SceWlanMac *mac, s32 mode, u32 *arg) {
    s32 ret = 0;

    switch (mode) {
    case 2:
        arg[0xF] = 0;
        ret = -2;
        break;
    case 3:
        ret = -2;
        break;
    case 4:
        ret = -2;
        break;
    case 6:
        sceKernelDelayThread(500000);
        ret = -2;
        break;
    case 7:
        sceKernelDelayThread(1000000);
        ret = -2;
        break;
    case 8:
        sceKernelDelayThread(100000);
        ret = -2;
        break;
    case 0xB:
        ret = -2;
        break;
    case 0x101:
    case 0x102:
        ret = -2;
        break;
    case 0x202:
        break;
    default:
        ret = -3;
        break;
    }
    func_0000C5E4(mac);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/wlan", func_00017048);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00014C0C);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDropCheck);

s32 sceWlanGetDropRate(s32 *arg0, s32 *arg1) {
    s32 var_a2;

    var_a2 = 0x80410003;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_a2 = 0;
        *arg0 = D_0002D7AC;
        *arg1 = D_0002D7B0;
    }
    return var_a2;
}

s32 sceWlanSetDropRate(u32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v1;

    var_v1 = 0x80410003;
    if (arg0 < 0x65U) {
        if (D_0002D7B4 == 0) {
            D_0002D7B4 = 1;
            func_000152F4(sceKernelGetSystemTimeLow());
        }
        temp_a0 = sceKernelCpuSuspendIntr();
        D_0002D7AC = (s32) arg0;
        D_0002D7B0 = arg1;
        D_0002D7B8 = 0;
        D_0002D7BC = 0;
        D_0002D7C0 = 0;
        D_0002D7C4 = 0;
        sceKernelCpuResumeIntr(temp_a0);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/wlan", func_000152F4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/wlan", func_00006278);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/wlan", func_00006338);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00006338(void *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    M2C_UNK (*temp_v0)(void *, s32, s32, u32, s32);
    s32 var_s0;
    void *temp_s2;

    var_s0 = 0;
    temp_s2 = M2C_FIELD(arg0, void **, 0x184);
    func_000022C0(arg0);
    if ((M2C_FIELD(arg0, s32 *, 0) & 0x3800) != 0x800) {
        var_s0 = 0x80410D14;
    } else if ((M2C_FIELD(temp_s2, s16 *, 0x10E) < arg1) || ((u32) M2C_FIELD(temp_s2, s16 *, 0x110) < arg3)) {
        var_s0 = 0x80410D13;
    } else if (sceWlanDropCheck() <= 0) {
        temp_v0 = M2C_FIELD(temp_s2, M2C_UNK (**)(void *, s32, s32, u32, s32), 0xD8);
        if (temp_v0 != NULL) {
            temp_v0(temp_s2, arg1, arg2, arg3, arg4);
        }
    }
    func_000022E4(arg0);
    return var_s0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000060FC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/wlan", func_000156F8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_000156F8(void *arg0, s32 arg1, s32 arg2) {
    s32 (*temp_v0)(void *, s32, s32);
    s32 temp_v0_2;
    s32 var_s0;
    void *temp_s2;

    temp_s2 = M2C_FIELD(arg0, void **, 0x184);
    func_000022C0(arg0);
    var_s0 = 0x80410D14;
    if ((M2C_FIELD(arg0, s32 *, 0) & 0x3800) == 0x800) {
        temp_v0 = M2C_FIELD(temp_s2, s32 (**)(void *, s32, s32), 0xE4);
        var_s0 = 0x80410D13;
        if (temp_v0 != NULL) {
            temp_v0_2 = temp_v0(temp_s2, arg1, arg2);
            var_s0 = (temp_v0_2 < 0) ? 0x80410D13 : temp_v0_2;
        }
    }
    func_000022E4(arg0);
    return var_s0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00006194);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/wlan", func_0001760C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_00017E04);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/wlan", func_00006458);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00006458(void *arg0, void *arg1) {
    s32 temp_v1;
    s32 var_s2;
    u16 temp_a0;
    void *temp_s1;

    var_s2 = 0;
    temp_s1 = M2C_FIELD(arg0, void **, 0x184);
    func_000022C0(arg0);
    if ((M2C_FIELD(arg0, s32 *, 0) & 0x3800) != 0x800) {
        var_s2 = 0x80410D14;
    } else {
        temp_a0 = M2C_FIELD(temp_s1, u16 *, 0x18E);
        M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(temp_s1, s32 *, 0x190);
        temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x1A0);
        M2C_FIELD(arg1, u16 *, 4) = temp_a0;
        if (temp_v1 == 1) {
            M2C_FIELD(arg1, u16 *, 4) = (u16) (temp_a0 | (temp_v1 << M2C_FIELD(temp_s1, s16 *, 0x112)));
        }
    }
    func_000022E4(arg0);
    return var_s2;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/wlan", func_000064F0);

s32 func_00006574(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x184);
    func_000022C0(arg0);
    M2C_FIELD(arg1, u16 *, 0) = (u16) M2C_FIELD(temp_s0, u16 *, 0x12C);
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(temp_s0, u16 *, 0x12E);
    M2C_FIELD(arg1, u16 *, 4) = (u16) M2C_FIELD(temp_s0, u16 *, 0x130);
    func_000022E4(arg0);
    return 0;
}
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/wlan", D_000190C4);

INCLUDE_RODATA("nonmatchings/wlan", D_0002ECD8);

INCLUDE_RODATA("nonmatchings/wlan", D_000190F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/wlan", func_00012630);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_0001712C);

INCLUDE_ASM("nonmatchings/wlan", sceWlanDropCheck);

s32 sceWlanGetDropRate(s32 *arg0, s32 *arg1) {
    s32 var_a2;

    var_a2 = 0x80410003;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_a2 = 0;
        *arg0 = D_0001929C;
        *arg1 = D_000192A0;
    }
    return var_a2;
}
#endif

#if FW_VERSION >= 300
s32 sceWlanSetDropRate(u32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v1;

    var_v1 = 0x80410003;
    if (arg0 < 0x65U) {
        if (D_000194E4 == 0) {
            D_000194E4 = 1;
            func_00017880(sceKernelGetSystemTimeLow());
        }
        temp_a0 = sceKernelCpuSuspendIntr();
        D_0001929C = (s32) arg0;
        D_000192A0 = arg1;
        D_000192A8 = 0;
        D_000192AC = 0;
        D_000192B0 = 0;
        sceKernelCpuResumeIntr(temp_a0);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
s32 sceWlanSetDropRate(u32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v1;

    var_v1 = 0x80410003;
    if (arg0 < 0x65U) {
        if (D_000192A4 == 0) {
            D_000192A4 = 1;
            func_00017880(sceKernelGetSystemTimeLow());
        }
        temp_a0 = sceKernelCpuSuspendIntr();
        D_0001929C = (s32) arg0;
        D_000192A0 = arg1;
        D_000192A8 = 0;
        D_000192AC = 0;
        D_000192B0 = 0;
        D_000192B4 = 0;
        sceKernelCpuResumeIntr(temp_a0);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00017880);
#endif

#if FW_VERSION >= 300
s32 func_00017A3C(struct Unk_func_00003114_0 *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    M2C_UNK (*temp_v0)(void *, s32, s32, u32, s32);
    s32 var_s0;
    void *temp_s2;

    var_s0 = 0;
    temp_s2 = M2C_FIELD(arg0, void **, 0x180);
    func_00003114(arg0);
    if ((arg0->unk0 & 0x3800) != 0x800) {
        var_s0 = 0x80410D14;
    } else if ((M2C_FIELD(temp_s2, s16 *, 0x10E) < arg1) || ((u32) M2C_FIELD(temp_s2, s16 *, 0x110) < arg3)) {
        var_s0 = 0x80410D13;
    } else if (sceWlanDropCheck() <= 0) {
        temp_v0 = M2C_FIELD(temp_s2, M2C_UNK (**)(void *, s32, s32, u32, s32), 0xD8);
        if (temp_v0 != NULL) {
            temp_v0(temp_s2, arg1, arg2, arg3, arg4);
        }
    }
    func_00003138(arg0);
    return var_s0;
}
#endif

#if FW_VERSION == 282
s32 func_00017A3C(struct Unk_func_00003114_0 *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    M2C_UNK (*temp_v0)(void *, s32, s32, u32, s32);
    s32 var_s0;
    struct Unk_func_00017A3C_temp_s2 *temp_s2;

    var_s0 = 0;
    temp_s2 = arg0->unk184;
    func_00003114(arg0);
    if ((arg0->unk0 & 0x3800) != 0x800) {
        var_s0 = 0x80410D14;
    } else if ((temp_s2->unk10E < arg1) || ((u32) temp_s2->unk110 < arg3)) {
        var_s0 = 0x80410D13;
    } else if (sceWlanDropCheck() <= 0) {
        temp_v0 = temp_s2->unkD8;
        if (temp_v0 != NULL) {
            temp_v0(temp_s2, arg1, arg2, arg3, arg4);
        }
    }
    func_00003138(arg0);
    return var_s0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00017B2C);
#endif

#if FW_VERSION >= 300
s32 func_00017BCC(struct Unk_func_00003114_0 *arg0, s32 arg1, s32 arg2) {
    s32 (*temp_v0)(void *, s32, s32);
    s32 temp_v0_2;
    s32 var_s0;
    void *temp_s2;

    temp_s2 = M2C_FIELD(arg0, void **, 0x180);
    func_00003114(arg0);
    var_s0 = 0x80410D14;
    if ((arg0->unk0 & 0x3800) == 0x800) {
        temp_v0 = M2C_FIELD(temp_s2, s32 (**)(void *, s32, s32), 0xE4);
        var_s0 = 0x80410D13;
        if (temp_v0 != NULL) {
            temp_v0_2 = temp_v0(temp_s2, arg1, arg2);
            var_s0 = (temp_v0_2 < 0) ? 0x80410D13 : temp_v0_2;
        }
    }
    func_00003138(arg0);
    return var_s0;
}
#endif

#if FW_VERSION == 282
s32 func_00017BCC(struct Unk_func_00003114_0 *arg0, s32 arg1, s32 arg2) {
    s32 (*temp_v0)(void *, s32, s32);
    s32 temp_v0_2;
    s32 var_s0;
    struct Unk_func_00017BCC_temp_s2 *temp_s2;

    temp_s2 = arg0->unk184;
    func_00003114(arg0);
    var_s0 = 0x80410D14;
    if ((arg0->unk0 & 0x3800) == 0x800) {
        temp_v0 = temp_s2->unkE4;
        var_s0 = 0x80410D13;
        if (temp_v0 != NULL) {
            temp_v0_2 = temp_v0(temp_s2, arg1, arg2);
            var_s0 = (temp_v0_2 < 0) ? 0x80410D13 : temp_v0_2;
        }
    }
    func_00003138(arg0);
    return var_s0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00017C7C);

INCLUDE_ASM("nonmatchings/wlan", func_00017D40);

INCLUDE_ASM("nonmatchings/wlan", func_00017E04);
#endif

#if FW_VERSION >= 300
s32 func_00017EA4(struct Unk_func_00003114_0 *arg0, struct Unk_func_00017EA4_1 *arg1) {
    s32 temp_v1;
    s32 var_s2;
    u16 temp_a0;
    void *temp_s1;

    var_s2 = 0;
    temp_s1 = M2C_FIELD(arg0, void **, 0x180);
    func_00003114(arg0);
    if ((arg0->unk0 & 0x3800) != 0x800) {
        var_s2 = 0x80410D14;
    } else {
        temp_a0 = M2C_FIELD(temp_s1, u16 *, 0x18E);
        arg1->unk0 = M2C_FIELD(temp_s1, s32 *, 0x190);
        temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x1A0);
        arg1->unk4 = temp_a0;
        if (temp_v1 == 1) {
            arg1->unk4 = temp_a0 | (temp_v1 << M2C_FIELD(temp_s1, s16 *, 0x112));
        }
    }
    func_00003138(arg0);
    return var_s2;
}
#endif

#if FW_VERSION == 282
s32 func_00017EA4(struct Unk_func_00003114_0 *arg0, struct Unk_func_00017EA4_1 *arg1) {
    s32 temp_v1;
    s32 var_s2;
    u16 temp_a0;
    struct Unk_func_00017EA4_temp_s1 *temp_s1;

    var_s2 = 0;
    temp_s1 = arg0->unk184;
    func_00003114(arg0);
    if ((arg0->unk0 & 0x3800) != 0x800) {
        var_s2 = 0x80410D14;
    } else {
        temp_a0 = temp_s1->unk18E;
        arg1->unk0 = (s32) temp_s1->unk190;
        temp_v1 = temp_s1->unk1A0;
        arg1->unk4 = temp_a0;
        if (temp_v1 == 1) {
            arg1->unk4 = (u16) (temp_a0 | (temp_v1 << temp_s1->unk112));
        }
    }
    func_00003138(arg0);
    return var_s2;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/wlan", func_00017F40);
#endif

#if FW_VERSION >= 300
s32 func_00017FC4(struct Unk_func_00003114_0 *arg0, struct Unk_func_00017FC4_1 *arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x180);
    func_00003114(arg0);
    arg1->unk0 = M2C_FIELD(temp_s0, u16 *, 0x12C);
    arg1->unk2 = M2C_FIELD(temp_s0, u16 *, 0x12E);
    arg1->unk4 = M2C_FIELD(temp_s0, u16 *, 0x130);
    func_00003138(arg0);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_00017FC4(struct Unk_func_00003114_0 *arg0, struct Unk_func_00017FC4_1 *arg1) {
    struct Unk_func_00017FC4_temp_s0 *temp_s0;

    temp_s0 = arg0->unk184;
    func_00003114(arg0);
    arg1->unk0 = (u16) temp_s0->unk12C;
    arg1->unk2 = (u16) temp_s0->unk12E;
    arg1->unk4 = (u16) temp_s0->unk130;
    func_00003138(arg0);
    return 0;
}
#endif
