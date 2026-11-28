/* compiler[280]: 1.9.2 */
/* cflags[280]: -O2 -mext */
/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -mext */
/* cflags[100,102,103,150,152]: -Os */
#include "common.h"
#include "msstor_decls.h"
#include "k1.h"

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000015A0);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001660);
#else
s32 func_000016E4(SceMSstorDev *dev, s32 on) {
    if (on != 0) {
        return sceMScmSetHCTransferMode(dev->hc, 2, 2, 3);
    }
    return sceMScmSetHCTransferMode(dev->hc, 1, 1, 2);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000016E4);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000172C);

s32 func_00001794(SceMSstorDev *dev, u8 *intr) {
    return func_000077C4(sceMScmTPCGetIntHelper(dev->hc, intr, -1));
}

#if FW_VERSION < 201
s32 func_000013E0(SceMSstorDev *dev, u8 *buf) {
    return func_000077C4(sceMScmReadDataPIO(dev->hc, buf, 8, -1));
}

s32 func_0000140C(SceMSstorDev *dev, s32 size, u8 *buf) {
    return func_000077C4(sceMScmReadDataPIO(dev->hc, buf, size, -1));
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000047C8);
#endif

#if FW_VERSION < 201
s32 func_0000181C(SceMSstorDev *dev, s32 size, u8 *buf) {
    return func_000077C4(sceMScmReadMSRegHelper(dev->hc, buf, size, -1));
}

s32 func_00001534(SceMSstorDev *dev, s32 size, u8 *buf) {
    return func_000077C4(sceMScmTPCReadShortData(dev->hc, buf, size, -1));
}

s32 func_00001568(SceMSstorDev *dev) {
    return func_000077C4(sceMScmResetHC(dev->hc, 2));
}

s32 func_00001590(SceMSstorDev *dev, s32 cmd) {
    return func_000077C4(sceMScmTPCSetCmdHelper(dev->hc, cmd & 0xFF, -1));
}
#else
void func_000017BC(s32 *arg0, s32 arg1) {
    func_000077C4(sceMScmReadDataPIO(*arg0, arg1, 8, -1));
}

void func_000017E8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScmReadDataPIO(*arg0, arg2, arg1, -1));
}

void func_0000181C(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScmReadMSRegHelper(*arg0, arg2, arg1, -1));
}

void func_00001850(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScmTPCReadShortData(*arg0, arg2, arg1, -1));
}

void func_00001884(s32 *arg0) {
    func_000077C4(sceMScmResetHC(*arg0, 2));
}

void func_000018AC(s32 *arg0, s32 arg1) {
    func_000077C4(sceMScmTPCSetCmdHelper(*arg0, arg1 & 0xFF, -1));
}
#endif

s32 func_000018D8(SceMSstorDev *dev, s32 readAddr, s32 readSize, s32 writeAddr, s32 writeSize) {
    u8 adr[8];

    adr[0] = readAddr;
    adr[1] = readSize;
    adr[2] = writeAddr;
    adr[3] = writeSize;
    adr[4] = 0;
    adr[5] = 0;
    adr[6] = 0;
    adr[7] = 0;
    return func_000077C4(sceMScmTPCSetRWRegAdrs(dev->hc, adr, -1));
}

#if FW_VERSION >= 102 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001550);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001610);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000192C);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000019C8);

#if FW_VERSION < 201
s32 func_00001808(SceMSstorDev *dev, u8 *buf) {
    return func_000077C4(sceMScmWriteDataPIO(dev->hc, buf, 8, -1));
}

s32 func_00001834(SceMSstorDev *dev, s32 size, u8 *buf) {
    return func_000077C4(sceMScmWriteDataPIO(dev->hc, buf, size, -1));
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000048D4);
#endif

#if FW_VERSION < 201
s32 func_00001B88(SceMSstorDev *dev, s32 size, u8 *buf) {
    return func_000077C4(sceMScmWriteMSRegHelper(dev->hc, buf, size, -1));
}

s32 func_00001958(SceMSstorDev *dev, s32 size, u8 *buf) {
    return func_000077C4(sceMScmTPCWriteShortData(dev->hc, buf, size, -1));
}
#else
void func_00001B28(s32 *arg0, s32 arg1) {
    func_000077C4(sceMScmWriteDataPIO(*arg0, arg1, 8, -1));
}

void func_00001B54(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScmWriteDataPIO(*arg0, arg2, arg1, -1));
}

void func_00001B88(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScmWriteMSRegHelper(*arg0, arg2, arg1, -1));
}

void func_00001BBC(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000077C4(sceMScmTPCWriteShortData(*arg0, arg2, arg1, -1));
}
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001BF0);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00001F78);

#if FW_VERSION < 201
s32 func_0000263C(SceMSstorDev *dev, u32 block) {
    s32 n;
    s32 i;
    u8 *tbl;

    n = (dev->boot[0x174] << 24) | (dev->boot[0x175] << 16) | (dev->boot[0x176] << 8) | dev->boot[0x177];
    tbl = dev->unk4460;
    for (i = 0; i < n; i += 2) {
        if (((tbl[i] << 8) | tbl[i + 1]) == block) {
            return -1;
        }
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000263C);
#endif

s32 func_000026A8(SceMSstorDev *dev) {
    return func_000008B8(dev, 0xC3, 1);
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000026C8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000299C);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009194);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_000091AC);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_0000842C);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00008434);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00008170);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00008178);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_0000920C);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009214);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00002A54);

#if FW_VERSION < 201
s32 func_000031EC(SceMSstorDev *dev, s32 *blk, s32 seg) {
    u16 *list;
    s32 n;
    s32 last;

    n = dev->freeCount[seg];
    last = (seg == (dev->boot[0x1A4] >> 1) - 1);
    list = dev->freeBlk[seg];
    if (last < n) {
        *blk = list[0];
        n--;
        func_0000432C((u8 *)list, (u8 *)&list[1], n * 2);
        list[n] = 0xFFFF;
        dev->freeCount[seg] = n;
        return 0;
    }
    dev->writable = 0;
    return -13;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000031EC);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000032A4);

s32 func_000034CC(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_a1;
    s32 var_a0;

    temp_a1 = arg1 & 0xFFFF;
    var_a0 = -1;
    if (((((s32) ((M2C_FIELD(arg0, u8 *, 0x4404) << 8) | M2C_FIELD(arg0, u8 *, 0x4405)) >> 9) * 0x1F0) - 3) >= temp_a1) {
        var_a0 = 0;
        *arg2 = (s32) M2C_FIELD(((temp_a1 * 2) + arg0), u16 *, 0x260);
    }
    return var_a0;
}

#if FW_VERSION == 152
u32 func_00003130(SceMSstorDev *dev) {
    u32 n;
    s32 bs;
    s32 nseg;

    nseg = ((dev->boot[0x1A4] << 8) | dev->boot[0x1A5]) >> 9;
    bs = (dev->boot[0x1A2] << 8) | dev->boot[0x1A3];
    n = ((nseg * 496 - 2) * bs) << 1;
    if (n > 0x3DF00) {
        n = 0x3DF00;
    } else if (n > 0x1EF80) {
        n = 0x1EF80;
    }
    return n;
}
#endif

#if FW_VERSION < 152
u32 func_00003298(SceMSstorDev *dev) {
    u32 n;
    s32 bs;
    s32 nseg;

    nseg = ((dev->boot[0x1A4] << 8) | dev->boot[0x1A5]) >> 9;
    bs = (dev->boot[0x1A2] << 8) | dev->boot[0x1A3];
    n = ((nseg * 496 - 2) * bs) << 1;
    if (n > 0x3DF00) {
        n = 0x3DF00;
    } else if (n > 0x1EF80) {
        n = 0x1EF80;
    }
    return n;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000351C);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003588);

#if FW_VERSION < 201
s32 func_0000366C(SceMSstorDev *dev, s32 block, s32 page, u8 *extra) {
    s32 ret;

    if (dev->writable == 0) {
        return -13;
    }
    if (dev->wpSwitch != 0) {
        return -12;
    }
    ret = func_000008F0(dev, block, page, 0x80, extra, 1);
    if (ret != 0) {
        return ret;
    }
    ret = func_000008B8(dev, 0x55, 10);
    if (ret != 0 && ret != -6) {
        return ret;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000366C);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000036F8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003A60);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003BD4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003CA4);

#if FW_VERSION < 201
s32 func_00003E20(SceMSstorDev *dev) {
    s32 ret;

    ret = func_000008B8(dev, 0x3C, 10);
    if (ret != 0) {
        return ret;
    }
    if (dev->parallel != 1) {
        return 0;
    }
    func_000016E4(dev, 0);
    return func_00000654(dev, 1);
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003E20);
#endif

#if FW_VERSION < 201
s32 func_00003C2C(SceMSstorDev *dev) {
    return func_000008B8(dev, 0x5A, 1);
}

s32 func_00003C4C(SceMSstorDev *dev) {
    return func_000008B8(dev, 0xCC, 5);
}
#else
void func_00003E88(s32 arg0) {
    func_000008B8(arg0, 0x5A, 1);
}

void func_00003EA8(s32 arg0) {
    func_000008B8(arg0, 0xCC, 5);
}
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003EC8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000413C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004204);

#if FW_VERSION < 201
void func_00004300(u8 *p, u8 c, s32 n) {
    while (n-- != 0) {
        *p++ = c;
    }
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004300);
#endif

#if FW_VERSION < 201
void func_0000432C(u8 *dst, const u8 *src, s32 n) {
    while (n-- != 0) {
        *dst++ = *src++;
    }
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000432C);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004360);

#if FW_VERSION < 201
s32 func_00004664(SceMSstorDev *dev) {
    SceUID fpl;
    s32 ret;

    if (dev->workFpl != 0) {
        return 0xC0220100;
    }
    if (dev->workArea != NULL) {
        return 0xC0220100;
    }
    dev->workArea = NULL;
    dev->workFpl = 0;
    fpl = sceKernelCreateFpl("SceMSstorWorkArea", 1, 1, 0x4000, 1, NULL);
    dev->workFpl = fpl;
    if (fpl < 0) {
        return fpl;
    }
    ret = sceKernelTryAllocateFpl(fpl, &dev->workArea);
    if (ret >= 0) {
        return 0;
    }
    dev->workArea = NULL;
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004664);
#endif

s32 func_000046FC(SceMSstorDev *dev) {
    s32 ret;

    ret = sceKernelFreeFpl(dev->workFpl, dev->workArea);
    if (ret < 0) {
        return ret;
    }
    dev->workArea = NULL;
    ret = sceKernelDeleteFpl(dev->workFpl);
    if (ret < 0) {
        return ret;
    }
    dev->workFpl = 0;
    return 0;
}

#if FW_VERSION >= 102 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000047C8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000048D4);
#endif

#if FW_VERSION < 201
void sceMSstorEntry(void) {
    sceMSstorRegisterCLDMSelf(0);
}

s32 func_00004514(void) {
    s32 temp_s0;

    temp_s0 = sceMScmRegisterCLD(0, &D_0000883C);
    bzero(&D_00008AA4, 0x4E84);
    return temp_s0;
}

s32 func_00004558(void) {
    sceIoDelDrv(&D_00009264);
    sceIoDelDrv(&D_00009248);
    return 0;
}
#else
void func_00004750(s32 arg0) {
    func_000008B8(arg0, 0x5A, 1);
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004770);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000047C8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000048D4);

void sceMSstorEntry(void) {
    sceMSstorRegisterCLDMSelf(0);
}

s32 func_000049E4(void) {
    s32 temp_s1;

    temp_s1 = sceMScmRegisterCLD(0, &D_000098DC);
    bzero(&D_00009B54, 0x4E94);
    D_00009B54.unk4E88 = 0x1F4;
    func_000077A0(&D_00009B54, 1);
    return temp_s1;
}

s32 func_00004A48(void) {
    sceIoDelDrv(&D_00009264);
    sceIoDelDrv(&D_00009248);
    return 0;
}
#endif

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009248);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009250);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009264);

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009270);

#if FW_VERSION < 201
s32 func_00004588(SceMScmHC *hc, s32 cmd, unsigned long *result, s32 arg3, SceMSstorDev *dev) {
    MSSTOR_ASSERT(dev == &D_00008AA4, 0xF9);
    switch (cmd) {
    case 0:
        MSSTOR_POWER_LOCK(0);
        sceLedSetMode(0, 2, &D_00008954);
        dev->hc = hc;
        if (func_00000548(dev) == 0) {
            *result = 0;
        } else {
            *result = 1;
        }
        sceLedSetMode(0, 2, &D_00008968);
        MSSTOR_POWER_UNLOCK(0);
        break;
    case 1:
        MSSTOR_ASSERT(dev->hc != NULL, 0x10D);
        MSSTOR_POWER_LOCK(0);
        sceLedSetMode(0, 2, &D_00008954);
        D_00008934.sema = sceKernelCreateSema("SceMSstorIolock", 1, 1, 1, NULL);
        sceKernelWaitSema(D_00008934.sema, 1, NULL);
        if (func_00000060(dev) != 0) {
            *result = 1;
            sceKernelSignalSema(D_00008934.sema, 1);
            sceKernelDeleteSema(D_00008934.sema);
            D_00008934.sema = 0;
            sceLedSetMode(0, 2, &D_00008968);
            MSSTOR_POWER_UNLOCK(0);
            break;
        }
        sceKernelSignalSema(D_00008934.sema, 1);
        sceKernelDeleteSema(D_00008934.sema);
        D_00008934.sema = 0;
        sceLedSetMode(0, 2, &D_00008968);
        MSSTOR_POWER_UNLOCK(0);
        if (sceIoAddDrv(&D_0000890C) < 0) {
            *result = 1;
        } else if (sceIoAddDrv(&D_00008920) < 0) {
            *result = 1;
        } else {
            *result = 0;
        }
        break;
    case 2:
        *result = 0;
        break;
    case 3:
        sceKernelWaitSema(D_00008934.sema, 1, NULL);
        *result = 1;
        break;
    case 4:
        sceKernelSignalSema(D_00008934.sema, 1);
        sceIoDelDrv(D_00009264);
        sceIoDelDrv(D_00009248);
        *result = 0;
        break;
    default:
        MSSTOR_ASSERT(0, 0x149);
        *result = 1;
        break;
    }
    return 0;
}

s32 module_reboot_before(void) {
    sceKernelWaitSema(D_00008934.sema, 1, NULL);
    sceIoDelDrv(&D_00009264);
    sceIoDelDrv(&D_00009248);
    sceKernelSignalSema(D_00008934.sema, 1);
    return 0;
}
#else
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009284);
#endif

#if FW_VERSION < 201
s32 func_000048A8(SceIoDeviceEntry *de) {
    SceUID thid;

    D_00008934.hc = D_00008AA4.hc;
    D_00008934.dev = &D_00008AA4;
#if FW_VERSION < 201
    D_00008934.sema = sceKernelCreateSema("SceMSstorIolock", 1, 1, 1, NULL);
#else
    D_00008934.sema = sceKernelCreateSema(D_00009284, 1, 1, 1, NULL);
#endif
    D_00008934.lockTimeout = 0;
    D_00008934.retry = 0;
    D_00008934.openCount = 0;
    D_00008934.evf = sceKernelCreateEventFlag("SceMSstorSleeper", 0x201, 0, NULL);
    thid = sceKernelCreateThread("SceMSstorSleep", func_00006858, 0x6F, 0x800, 0, NULL);
    D_00008934.thread = thid;
    sceKernelStartThread(thid, 0x20, &D_00008934);
    de->d_private = &D_00008934;
    return 0;
}

s32 func_0000497C(SceIoDeviceEntry *de) {
    de->d_private = &D_00008934;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004990(void) {
    if (D_00008934.sema > 0) {
        sceKernelDeleteSema(D_00008934.sema);
    }
    if (D_00008934.thread > 0) {
        sceKernelTerminateDeleteThread(D_00008934.thread);
    }
    if (D_00008934.evf > 0) {
        sceKernelDeleteEventFlag(D_00008934.evf);
    }
    D_00008934.sema = -1;
    return 0;
}
#endif

#if FW_VERSION == 102
s32 func_00004990(void) {
    if (D_00008934.sema > 0) {
        sceKernelDeleteSema(D_00008934.sema);
    }
    if (D_00008934.thread > 0) {
        func_00007D38_v102(D_00008934.thread);
    }
    if (D_00008934.evf > 0) {
        sceKernelDeleteEventFlag(D_00008934.evf);
    }
    D_00008934.sema = -1;
    return 0;
}
#endif

#if FW_VERSION == 103
s32 func_00004990(void) {
    if (D_00008934.sema > 0) {
        sceKernelDeleteSema(D_00008934.sema);
    }
    if (D_00008934.thread > 0) {
        func_00007D38_v102(D_00008934.thread);
    }
    if (D_00008934.evf > 0) {
        func_00007CF0(D_00008934.evf);
    }
    D_00008934.sema = -1;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00004990(void) {
    if (D_00008934.sema > 0) {
        sceKernelDeleteSema(D_00008934.sema);
    }
    if (D_00008934.thread > 0) {
        sceKernelTerminateDeleteThread(D_00008934.thread);
    }
    if (D_00008934.evf > 0) {
        sceKernelDeleteEventFlag(D_00008934.sema);
    }
    D_00008934.sema = -1;
    return 0;
}
#endif

#if FW_VERSION < 201
s32 func_00004A04(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004A90(SceIoIob *iob, char *name, s32 flags, SceMode mode) {
    s32 ret;
    s32 intr;

    ret = 0x80020328;
    intr = sceKernelCpuSuspendIntr();
    if (iob != NULL) {
        ret = 0x80220183;
        if (iob->i_unit == 0) {
            ret = func_00004C00(iob, name, flags, mode);
        }
    }
    sceKernelCpuResumeIntr(intr);
    return ret;
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004B30);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004C00);

s32 func_00004C88(SceIoIob *iob) {
    s32 ret;
    SceMSstorIoCtx *ctx;

    ret = 0x80020328;
    if (iob != NULL) {
        ctx = iob->i_private;
        ret = 0;
        ctx->openCount--;
    }
    return ret;
}
#endif

#if FW_VERSION < 150
s32 func_00004A0C(SceIoIob *iob, char *name, s32 flags, SceMode mode) {
    s32 ret;

    ret = 0x80220183;
    if (iob->i_unit == 0) {
        ret = func_00004A98(iob, name, flags, mode);
    }
    return ret;
}

s32 func_00004A40(SceIoIob *iob, char *name, s32 flags, SceMode mode) {
    SceMSstorIoCtx *ctx;
    s32 ret;

    ctx = iob->i_de->d_private;
    ret = 0x80220183;
    if (iob->i_unit == 1) {
        ret = 0x80220182;
        if (ctx->dev->unk4E64 & 1) {
            ret = func_00004A98(iob, name, flags, mode);
        }
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004A98);

s32 func_00004B14(SceIoIob *iob) {
    SceMSstorIoCtx *ctx;

    ctx = iob->i_private;
    ctx->openCount--;
    return 0;
}

s32 func_00004B2C(SceIoIob *iob, void *buf, SceSize size, s32 write, s32 (*io)(s32 lba, s32 count, void *buf)) {
    SceMSstorIoCtx *ctx;
    u32 timeout;
    s32 start;
    s32 count;
    s32 retry;
    s32 r;
    s32 lba;
    s32 left;
    s32 n;
    u8 *p;
    u32 *pt;

    ctx = iob->i_private;
    if (size & 0x1FF) {
        return 0x80220183;
    }
    count = size >> 9;
    sceKernelSetEventFlag(ctx->evf, 1);
    start = iob->i_fpos / 512;
    timeout = ctx->lockTimeout;
    pt = &timeout;
    if (timeout == 0) {
        pt = NULL;
    }
    sceKernelPowerLockForUser(0);
    if (sceKernelWaitSema(ctx->sema, 1, pt) == 0) {
        sceLedSetMode(0, 2, &D_00008954);
        retry = ctx->retry;
        do {
            lba = start;
            left = count;
            p = buf;
            r = 0;
            if (left != 0) {
                do {
                    n = (left < 0x21D) ? left : 0x21D;
                    r = io(lba, n, p);
                    left -= n;
                    p += n << 9;
                    lba += n;
                } while (left > 0 && r >= 0);
            }
        } while (retry-- > 0 && r < 0);
        if (r < 0) {
            size = func_00007850(r);
        } else {
            iob->i_fpos += (s32)(count << 9);
        }
        if (write) {
            sceLedSetMode(0, 2, &D_00008968);
        } else {
            sceLedSetMode(0, 0, NULL);
        }
        sceKernelSignalSema(ctx->sema, 1);
    } else {
        size = 0x80220184;
    }
    sceKernelPowerUnlockForUser(0);
    return size;
}
#endif

#if FW_VERSION == 152
s32 func_00004B2C(SceIoIob *iob, void *buf, SceSize size, s32 write, s32 (*io)(s32 lba, s32 count, void *buf)) {
    SceMSstorIoCtx *ctx;
    u32 timeout;
    s32 start;
    s32 count;
    s32 retry;
    s32 r;
    s32 lba;
    s32 left;
    s32 n;
    u8 *p;
    u32 *pt;

    ctx = iob->i_private;
    if (ctx == NULL) {
        return 0xC0220100;
    }
    if (size & 0x1FF) {
        return 0x80220183;
    }
    count = size >> 9;
    sceKernelSetEventFlag(ctx->evf, 1);
    start = iob->i_fpos / 512;
    timeout = ctx->lockTimeout;
    pt = &timeout;
    if (timeout == 0) {
        pt = NULL;
    }
    sceKernelPowerLock(0);
    if (sceKernelWaitSema(ctx->sema, 1, pt) == 0) {
        sceLedSetMode(0, 2, &D_00008954);
        retry = ctx->retry;
        do {
            lba = start;
            left = count;
            p = buf;
            r = 0;
            if (left != 0) {
                do {
                    n = (left < 0x21D) ? left : 0x21D;
                    r = io(lba, n, p);
                    left -= n;
                    p += n << 9;
                    lba += n;
                } while (left > 0 && r >= 0);
            }
        } while (retry-- > 0 && r < 0);
        if (r < 0) {
            size = func_00007850(r);
        } else {
            iob->i_fpos += (s32)(count << 9);
        }
        if (write) {
            sceLedSetMode(0, 2, &D_00008968);
        } else {
            sceLedSetMode(0, 0, NULL);
        }
        sceKernelSignalSema(ctx->sema, 1);
    } else {
        size = 0x80220184;
    }
    sceKernelPowerUnlock(0);
    return size;
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004B2C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004A78);

INCLUDE_ASM("nonmatchings/msstor_0015A0", module_reboot_before);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004D14);

s32 func_00004E2C(struct Unk_func_00004E2C_0 *arg0) {
    arg0->unk4 = &D_000099D4;
    return 0;
}

s32 func_00004E40(void) {
    if (D_000099D4.unk0 > 0) {
        sceKernelDeleteSema(D_000099D4.unk0);
    }
    if (D_000099D4.unk18 > 0) {
        sceKernelTerminateDeleteThread(D_000099D4.unk18);
    }
    if (D_000099D4.unk28 > 0) {
        sceKernelTerminateDeleteThread(D_000099D4.unk28);
    }
    if (D_000099D4.unk24 > 0) {
        sceKernelDeleteEventFlag(D_000099D4.unk24);
    }
    D_000099D4.unk0 = -1;
    return 0;
}

s32 func_00004EC8(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004ED0);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004F70);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005040);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000050C8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000513C);
#endif

#if FW_VERSION < 150
s32 func_000053B4(SceIoIob *iob, void *buf, SceSize size) {
    if (func_00005684(iob, iob->i_fpos + size) == 0) {
        return 0x80220183;
    }
    return func_00004B2C(iob, buf, size, 0, func_0000017C);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000053B4(SceIoIob *iob, void *buf, SceSize size) {
    if (iob == NULL) {
        return 0x80020328;
    }
    if (func_00005684(iob, iob->i_fpos + size) == 0) {
        return 0x80220183;
    }
    return func_00004B2C(iob, buf, size, 0, func_0000017C);
}
#endif

#if FW_VERSION == 201
s32 func_000053B4(SceIoIob *iob, void *buf, SceSize size) {
    if (iob == NULL) {
        return 0x80020328;
    }
    if (func_00005684(iob, iob->i_fpos + size) == 0) {
        return 0x80220183;
    }
    return func_0000513C(iob, buf, size, 0, func_0000017C);
}
#endif

#if FW_VERSION < 150
s32 func_0000544C(SceIoIob *iob, void *buf, SceSize size) {
    if (func_00005708(iob, iob->i_fpos + size) == 0) {
        return 0x80220183;
    }
    return func_00004B2C(iob, buf, size, 0, func_00000134);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000544C(SceIoIob *iob, void *buf, SceSize size) {
    if (iob == NULL) {
        return 0x80020328;
    }
    if (func_00005708(iob, iob->i_fpos + size) == 0) {
        return 0x80220183;
    }
    return func_00004B2C(iob, buf, size, 0, func_00000134);
}
#endif

#if FW_VERSION == 201
s32 func_0000544C(SceIoIob *iob, void *buf, SceSize size) {
    if (iob == NULL) {
        return 0x80020328;
    }
    if (func_00005708(iob, iob->i_fpos + size) == 0) {
        return 0x80220183;
    }
    return func_0000513C(iob, buf, size, 0, func_00000134);
}
#endif

#if FW_VERSION < 150
s32 func_00004E70(SceIoIob *iob, const void *buf, SceSize size) {
    if (func_00005684(iob, iob->i_fpos + size) == 0) {
        return 0x80220183;
    }
    return func_00004B2C(iob, (void *)buf, size, 1, func_00000220);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004E70(SceIoIob *iob, const void *buf, SceSize size) {
    if (iob == NULL) {
        return 0x80020328;
    }
    if (func_00005684(iob, iob->i_fpos + size) == 0) {
        return 0x80220183;
    }
    return func_00004B2C(iob, (void *)buf, size, 1, func_00000220);
}
#endif

#if FW_VERSION < 150
s32 func_00004F04(SceIoIob *iob, const void *buf, SceSize size) {
    if (func_00005708(iob, iob->i_fpos + size) == 0) {
        return 0x80220183;
    }
    return func_00004B2C(iob, (void *)buf, size, 1, func_000001BC);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004F04(SceIoIob *iob, const void *buf, SceSize size) {
    if (iob == NULL) {
        return 0x80020328;
    }
    if (func_00005708(iob, iob->i_fpos + size) == 0) {
        return 0x80220183;
    }
    return func_00004B2C(iob, (void *)buf, size, 1, func_000001BC);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000054E4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000055B4);
#else
s32 func_00005684(SceIoIob *iob, SceOff end) {
    u32 n;

    n = func_00000288();
    if ((end & 0x1FF) != 0) {
        return 0;
    }
    if (end < 0) {
        return 0;
    }
    if (end > (SceOff)(n << 9)) {
        return 0;
    }
    return 1;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005684);
#else
s32 func_00005708(SceIoIob *iob, SceOff end) {
    u32 n;

    n = func_00000288() - ((SceMSstorIoCtx *)iob->i_private)->dev->partStart;
    if ((end & 0x1FF) != 0) {
        return 0;
    }
    if (end < 0) {
        return 0;
    }
    if (end > (SceOff)(n << 9)) {
        return 0;
    }
    return 1;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005708);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000057A4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005938);

#if FW_VERSION < 150
s32 func_00005AD4(SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen) {
    SceMSstorIoCtx *ctx;
    u32 timeout;
    u32 *pt;
    s32 ret;

    ctx = iob->i_private;
    timeout = ctx->lockTimeout;
    pt = &timeout;
    if (timeout == 0) {
        pt = NULL;
    }
    sceKernelSetEventFlag(ctx->evf, 1);
    if (((cmd >> 15) & 1) && k1IsUserMode()) {
        return 0x80220188;
    }
    switch (cmd) {
    case 0x0210D016:
        return sceKernelPollSema(ctx->sema, 1);
    case 0x0210D017:
        return sceKernelSignalSema(ctx->sema, 1);
    }
    sceKernelPowerLockForUser(0);
    if (cmd == 0x02125006) {
        ret = sceKernelWaitSema(ctx->sema, 1, pt);
        if (ret == 0) {
            if (outlen != 4 || out == NULL || (k1IsUserMode() && (s32)((u32)out | ((u32)out + 4)) < 0)) {
                ret = 0x80220183;
            } else {
                ret = 0;
                *(s32 *)out = func_00000288();
            }
            sceKernelSignalSema(ctx->sema, 1);
        }
    } else {
        ret = func_00005738(iob, cmd, in, inlen, out, outlen);
    }
    sceKernelPowerUnlockForUser(0);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00005AD4(SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen) {
    SceMSstorIoCtx *ctx;
    u32 timeout;
    u32 *pt;
    s32 ret;

    if (iob == NULL) {
        return 0x80020328;
    }
    ctx = iob->i_private;
    if (ctx == NULL) {
        return 0xC0220100;
    }
    sceKernelSetEventFlag(ctx->evf, 1);
    if (((cmd >> 15) & 1) && k1IsUserMode()) {
        return 0x80220188;
    }
    switch (cmd) {
    case 0x0210D016:
        return sceKernelPollSema(ctx->sema, 1);
    case 0x0210D017:
        return sceKernelSignalSema(ctx->sema, 1);
    }
    timeout = ctx->lockTimeout;
    pt = &timeout;
    if (timeout == 0) {
        pt = NULL;
    }
    sceKernelPowerLock(0);
    if (cmd == 0x02125006) {
        ret = sceKernelWaitSema(ctx->sema, 1, pt);
        if (ret == 0) {
            if (outlen != 4 || out == NULL || (k1IsUserMode() && (s32)((u32)out | ((u32)out + 4)) < 0)) {
                ret = 0x80220183;
            } else {
                ret = 0;
                *(s32 *)out = func_00000288();
            }
            sceKernelSignalSema(ctx->sema, 1);
        }
    } else {
        ret = func_00005738(iob, cmd, in, inlen, out, outlen);
    }
    sceKernelPowerUnlock(0);
    return ret;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005AD4);
#endif

#if FW_VERSION < 150
s32 func_00005D18(SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen) {
    SceMSstorIoCtx *ctx;
    u32 timeout;
    u32 *pt;
    s32 ret;

    ctx = iob->i_private;
    sceKernelSetEventFlag(ctx->evf, 1);
    if (((cmd >> 15) & 1) && k1IsUserMode()) {
        return 0x80220188;
    }
    switch (cmd) {
    case 0x0210D016:
        return sceKernelPollSema(ctx->sema, 1);
    case 0x0210D017:
        return sceKernelSignalSema(ctx->sema, 1);
    }
    timeout = ctx->lockTimeout;
    pt = &timeout;
    if (timeout == 0) {
        pt = NULL;
    }
    sceKernelPowerLockForUser(0);
    if (cmd == 0x02125006) {
        ret = sceKernelWaitSema(ctx->sema, 1, pt);
        if (ret == 0) {
            if (outlen != 4 || out == NULL) {
                ret = 0x80220183;
            } else {
                *(s32 *)out = func_00000288() - ctx->dev->partStart;
            }
            sceKernelSignalSema(ctx->sema, 1);
        }
    } else {
        ret = func_00005738(iob, cmd, in, inlen, out, outlen);
    }
    sceKernelPowerUnlockForUser(0);
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00005D18(SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen) {
    SceMSstorIoCtx *ctx;
    u32 timeout;
    u32 *pt;
    s32 ret;

    if (iob == NULL) {
        return 0x80020328;
    }
    ctx = iob->i_private;
    if (ctx == NULL) {
        return 0xC0220100;
    }
    sceKernelSetEventFlag(ctx->evf, 1);
    if (((cmd >> 15) & 1) && k1IsUserMode()) {
        return 0x80220188;
    }
    switch (cmd) {
    case 0x0210D016:
        return sceKernelPollSema(ctx->sema, 1);
    case 0x0210D017:
        return sceKernelSignalSema(ctx->sema, 1);
    }
    timeout = ctx->lockTimeout;
    pt = &timeout;
    if (timeout == 0) {
        pt = NULL;
    }
    sceKernelPowerLock(0);
    if (cmd == 0x02125006) {
        ret = sceKernelWaitSema(ctx->sema, 1, pt);
        if (ret == 0) {
            if (outlen != 4 || out == NULL) {
                ret = 0x80220183;
            } else {
                *(s32 *)out = func_00000288() - ctx->dev->partStart;
            }
            sceKernelSignalSema(ctx->sema, 1);
        }
    } else {
        ret = func_00005738(iob, cmd, in, inlen, out, outlen);
    }
    sceKernelPowerUnlock(0);
    return ret;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005D18);
#else
s32 func_00005738(SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen) {
    SceMSstorIoCtx *ctx;
    SceMSstorDev *dev;
    u32 timeout;
    u32 *pt;
    s32 ret;

    ret = 0;
    ctx = iob->i_private;
    switch (cmd) {
    case 0x0211D018:
        return func_00006C70(iob, cmd, in, inlen, out, outlen, 0);
    case 0x0211D019:
        return func_00006C70(iob, cmd, in, inlen, out, outlen, 1);
    case 0x0211D817:
        return func_00006EBC(iob, cmd, in, inlen, out, outlen);
    case 0x02125008:
        return func_00006DFC(iob, cmd, in, inlen, out, outlen);
    case 0x02125009:
        return func_00006E60(iob, cmd, in, inlen, out, outlen);
    case 0x02125001:
        if (outlen < 4 || out == NULL || (k1IsUserMode() && (s32)((u32)out | ((u32)out + 4)) < 0)) {
            ret = 0x80220183;
        } else {
            *(s32 *)out = 1;
        }
        return ret;
    case 0x02125007:
        if (outlen < 4 || out == NULL || (k1IsUserMode() && (s32)((u32)out | ((u32)out + 4)) < 0)) {
            ret = 0x80220183;
        } else {
            *(s32 *)out = 0x200;
        }
        return ret;
    case 0x02105002:
    case 0x02105003:
    case 0x02105004:
    case 0x02105005:
        return 0x80220183;
    }
    timeout = ctx->lockTimeout;
    pt = &timeout;
    if (timeout == 0) {
        pt = NULL;
    }
    ret = sceKernelWaitSema(ctx->sema, 1, pt);
    if (ret != 0) {
        return ret;
    }
    sceLedSetMode(0, 2, &D_00008954);
    switch (cmd) {
    case 0x0211D01A:
        ret = func_0000700C(1, iob, cmd, in, inlen, out, outlen);
        break;
    case 0x0211D01B:
        ret = func_0000700C(2, iob, cmd, in, inlen, out, outlen);
        break;
    case 0x0211D01C:
        ret = func_00007108(1, iob, cmd, in, inlen, out, outlen);
        break;
    case 0x0211D01D:
        ret = func_00007108(2, iob, cmd, in, inlen, out, outlen);
        break;
    case 0x0211D01E:
        ret = func_00007108(3, iob, cmd, in, inlen, out, outlen);
        break;
    case 0x0211D01F:
        ret = func_00006A68(iob, cmd, in, inlen, out, outlen);
        break;
    case 0x0212D021:
        ret = func_00006F10(iob, cmd, in, inlen, out, outlen);
        break;
    case 0x0213D020:
        ret = func_00006AC8(iob, cmd, in, inlen, out, outlen);
        break;
    case 0x02125803:
        if (out == NULL || outlen < 0x60 || (k1IsUserMode() && (s32)((u32)out | ((u32)out + 0x60)) < 0)) {
            ret = 0x80220183;
        }
        dev = ctx->dev;
        if (dev->mediaType2 & 0x40) {
            __builtin_memcpy(out, &dev->boot[0], 0x60);
        } else {
            __builtin_memcpy(out, &dev->boot[0x1A0], 0x60);
        }
        break;
    case 0x0211D015:
        if (inlen < 4 || in == NULL) {
            ret = 0x80220183;
        } else {
            ctx->lockTimeout = *(u32 *)in;
        }
        break;
    case 0x0212D014:
        if (outlen < 4 || out == NULL) {
            ret = 0x80220183;
        } else {
            *(u32 *)out = ctx->lockTimeout;
        }
        break;
    default:
        ret = 0x80220183;
        break;
    }
    sceLedSetMode(0, 2, &D_00008968);
    sceKernelSignalSema(ctx->sema, 1);
    return func_00007850(ret);
}

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005D0C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005ED0);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006758);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006A68);

#if FW_VERSION < 201
s32 func_00006AC8(SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen) {
    SceMSstorDev *dev;

    if (in == NULL || inlen != 4) {
        return 0x80220183;
    }
    if (out == NULL || outlen < 0x200) {
        return 0x80220183;
    }
    if (*(s32 *)in != 1) {
        return 0x80220183;
    }
    dev = ((SceMSstorIoCtx *)iob->i_private)->dev;
    if (dev->mediaType2 & 0x40) {
        return 0x80220183;
    }
    if (dev->unk8 < 0 && dev->unkC < 0) {
        return 0x80220183;
    }
    __builtin_memcpy(out, dev->unk4460, 0x200);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006AC8);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006BE8);

s32 func_00006C70(SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen, s32 flag) {
    s32 v;

    if (in == NULL || inlen != 4) {
        return 0x80220183;
    }
    v = *(s32 *)in;
    if (v < 0) {
        return 0x80220183;
    }
    return func_00007850(func_00006CD8(((SceMSstorIoCtx *)iob->i_private)->dev, v, flag));
}

#if FW_VERSION < 201
s32 func_00006CD8(SceMSstorDev *dev, s32 delay, s32 flag) {
    s32 ret;
    s32 parallel;

    ret = 0;
    if (delay < 0) {
        return 0x80220183;
    }
    if (flag != 0 && (dev->mediaType2 & 0x40)) {
        return 0x80220183;
    }
    parallel = dev->parallel;
    if (flag == 0) {
        sceMScmSetSlotPower(dev->hc, 1);
        sceKernelDelayThread(delay);
        sceMScmSetSlotPower(dev->hc, 2);
        if (dev->mediaType2 & 0x40) {
            sceKernelDelayThread(0x5014);
        } else {
            sceKernelDelayThread(0x9C4);
        }
    } else {
        if (dev->mediaType2 & 0x10) {
            ret = func_000008B8(dev, 0x3C, delay);
        }
        sceKernelDelayThread(delay);
    }
    if (parallel == 1) {
        func_000016E4(dev, 0);
        func_00000654(dev, 1);
    }
    if (dev->mediaType2 & 0x40) {
        ret = func_0000149C(dev);
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006CD8);
#endif

#if FW_VERSION < 201
s32 func_00006DFC(SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen) {
    SceMSstorDev *dev;

    if (out == NULL || outlen < 4 || (k1IsUserMode() && (s32)((u32)out | ((u32)out + 4)) < 0)) {
        return 0x80220183;
    }
    dev = ((SceMSstorIoCtx *)iob->i_private)->dev;
    if (dev->writable == 0 || dev->wpSwitch == 1) {
        *(s32 *)out = 0;
    } else {
        *(s32 *)out = 1;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006DFC);
#endif

#if FW_VERSION < 201
s32 func_00006E60(SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen) {
    SceMSstorDev *dev;

    if (out == NULL || outlen < 4 || (k1IsUserMode() && (s32)((u32)out | ((u32)out + 4)) < 0)) {
        return 0x80220183;
    }
    dev = ((SceMSstorIoCtx *)iob->i_private)->dev;
    if (dev->wpSwitch == 1) {
        *(s32 *)out = 1;
    } else {
        *(s32 *)out = 0;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006E60);
#endif

#if FW_VERSION < 201
s32 func_00006EBC(SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen) {
    s32 ret;

    if (out == NULL || outlen < 4 || (k1IsUserMode() && (s32)((u32)out | ((u32)out + 0xC)) < 0)) {
        ret = 0x80220183;
    } else {
        ret = 0;
        *(SceMScmHC **)out = ((SceMSstorIoCtx *)iob->i_private)->dev->hc;
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006EBC);
#endif

#if FW_VERSION < 201
s32 func_00006F10(SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen) {
    SceMSstorDev *dev;
    SceMSstorRawParam *p;
    s32 seg;
    s32 r;
    s32 ret;
    s32 writable;
    s32 blk;

    dev = ((SceMSstorIoCtx *)iob->i_private)->dev;
    p = out;
    r = 0;
    if (dev->mediaType2 & 0x40) {
        return 0x80220183;
    }
    if (out == NULL || outlen < 0x20) {
        return 0x80220183;
    }
    seg = ((u32)((dev->boot[0x1A4] << 8) | dev->boot[0x1A5]) >> 9) - 1;
    writable = dev->writable;
    for (; seg > 0; seg--) {
        blk = 0;
        r = func_000031EC(dev, &blk, seg);
        if (r == 0) {
            break;
        }
        if (r == -13) {
            dev->writable = writable;
        }
    }
    if (blk == 0) {
        p->result = 0x80220187;
        return 0x80220187;
    }
    ret = func_00007850(r);
    p->result = ret;
    p->unk0 = blk;
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006F10);
#endif

#if FW_VERSION < 201
s32 func_0000700C(s32 mode, SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen) {
    SceMSstorDev *dev;
    SceMSstorRawParam *p;
    s32 r;
    s32 ret;

    r = 0x80220183;
    dev = ((SceMSstorIoCtx *)iob->i_private)->dev;
    p = in;
    if (dev->mediaType2 & 0x40) {
        return r;
    }
    if (in == NULL || inlen < 0x20) {
        return r;
    }
    if (p->unk14 < 0x200 || p->unk18 < 4) {
        return 0x80220183;
    }
    if (p->unk8 != 1) {
        return 0x80220183;
    }
    switch (mode) {
    case 1:
        r = func_000086F4(dev, p->unk0, p->unk4, p->unk4, p->unkC, p->unk10);
        break;
    case 2:
        r = func_00008A54(dev, p->unk0, p->unk4, p->unk4, p->unkC, p->unk10);
        break;
    }
    ret = func_00007850(r);
    p->result = ret;
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000700C);
#endif

#if FW_VERSION < 201
s32 func_00007108(s32 mode, SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen) {
    SceMSstorDev *dev;
    SceMSstorRawParam *p;
    s32 r;
    s32 ret;

    dev = ((SceMSstorIoCtx *)iob->i_private)->dev;
    p = in;
    if (dev->mediaType2 & 0x40) {
        return 0x80220183;
    }
    if (in == NULL || inlen < 0x20) {
        return 0x80220183;
    }
    if (mode == 3) {
        if (p->unk18 <= 0) {
            return 0x80220183;
        }
    } else if (p->unk18 < 4) {
        return 0x80220183;
    }
    if (p->unk8 != 1) {
        return 0x80220183;
    }
    r = 0;
    switch (mode) {
    case 1:
        r = func_00003BD4(dev, p->unk0, p->unk4, p->unk10);
        break;
    case 2:
        r = func_0000413C(dev, p->unk0, p->unk4, p->unk10);
        break;
    case 3:
        r = func_0000366C(dev, p->unk0, p->unk4, p->unk10);
        break;
    }
    ret = func_00007850(r);
    p->result = ret;
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00007108);
#endif

#if FW_VERSION < 201
s32 func_00007234(SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen) {
    SceMSstorDev *dev;
    u8 *o;
    s32 ret;

    dev = ((SceMSstorIoCtx *)iob->i_private)->dev;
    if (out == NULL || outlen < 5 || (k1IsUserMode() && (s32)((u32)out | ((u32)out + 5)) < 0)) {
        ret = 0x80220183;
    } else {
        o = out;
        ret = 0;
        o[0] = dev->mediaType.type;
        o[1] = dev->mediaType.category;
        o[2] = dev->mediaType.cls;
        o[3] = dev->mediaType.parallel;
        o[4] = dev->mediaType.deviceId;
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00007234);
#endif

#if FW_VERSION < 201
s32 func_000072A4(SceIoIob *iob, s32 cmd, void *in, SceSize inlen, void *out, SceSize outlen) {
    SceMSstorDev *dev;

    dev = ((SceMSstorIoCtx *)iob->i_private)->dev;
    if (out == NULL || outlen < 4 || (k1IsUserMode() && (s32)((u32)out | ((u32)out + 4)) < 0)) {
        return 0x80220183;
    }
    switch (dev->mediaType2) {
    case 0x10:
    case 0x11:
    case 0x40:
    case 0x41:
        *(s32 *)out = dev->mediaType2;
        break;
    default:
        *(s32 *)out = 0;
        break;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000072A4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006858);
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00007318);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000073D8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00007498);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000074E8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00007550);
#endif
