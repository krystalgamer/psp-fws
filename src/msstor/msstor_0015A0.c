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

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000263C);

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

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000031EC);

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
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003130);
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

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000366C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000036F8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003A60);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003BD4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003CA4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00003E20);

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

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004300);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000432C);

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
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004588);

s32 module_reboot_before(void) {
    sceKernelWaitSema(D_00008934.sema, 1, NULL);
    sceIoDelDrv(&D_00009264);
    sceIoDelDrv(&D_00009248);
    sceKernelSignalSema(D_00008934.sema, 1);
    return 0;
}
#endif

INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00009284);

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00008368);
#endif

#if FW_VERSION == 102
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_000082D8);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_000084F8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_00008508);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/msstor_0015A0", D_0000823C);
#endif

#if FW_VERSION < 201
s32 func_000048A8(SceIoDeviceEntry *de) {
    SceUID thid;

    D_00008934.hc = D_00008AA4.hc;
    D_00008934.dev = &D_00008AA4;
    D_00008934.sema = sceKernelCreateSema(D_00009284, 1, 1, 1, NULL);
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

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004990);
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
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00004A90);

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

#if FW_VERSION >= 150 && FW_VERSION < 201
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
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_000053B4);
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
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000544C);
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

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005AD4);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005D18);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005738);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005D0C);
#else
INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00005ED0);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006758);
#endif

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006A68);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006AC8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006BE8);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006C70);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006CD8);

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

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00006F10);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_0000700C);

INCLUDE_ASM("nonmatchings/msstor_0015A0", func_00007108);

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
