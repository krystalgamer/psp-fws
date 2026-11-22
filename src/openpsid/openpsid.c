#include "common.h"
#include "openpsid_decls.h"
#include "kirk.h"

extern u8 *g_ddrdbBufPtr;
extern SceUID g_openPsidSema;
extern u8 g_openPsidCert[0xB8];

/* The kernel keeps the caller's privilege level in $k1. */
static inline u32 shiftK1(void) {
    u32 oldK1;

    __asm__ __volatile__("move %0, $27\n\tsrl $27, $27, 16" : "=r"(oldK1));
    return oldK1;
}

static inline int k1IsUserMode(void) {
    int ret;

    __asm__ __volatile__("andi %0, $27, 0x18" : "=r"(ret));
    return ret;
}

static inline void setK1(u32 k1) {
    __asm__ __volatile__("move $27, %0" : : "r"(k1));
}

int sceIdStorageLookup(u16 key, u32 offset, void *buf, u32 len);
SceUID sceKernelCreateSema(const char *name, u32 attr, int initVal, int maxVal, void *option);
int sceKernelWaitSema(SceUID semaid, int signal, u32 *timeout);
int sceKernelSignalSema(SceUID semaid, int signal);
extern u32 g_ddrdbBuf[];

static inline void ddrdb_memcpy(void *p1, void *p2, u32 size) {
    u32 i;
    u8 *dst = p1;
    u8 *src = p2;

    for (i = 0; i < size; i++) {
        dst[i] = src[i];
    }
}

static inline void ddrdb_memclr(u8 *buf, u32 size) {
    u32 i;

    for (i = 0; i < size; i++) {
        buf[i] = 0;
    }
}

static int func_00000000(u8 *cert) {
    if (sceIdStorageLookup(0x101, 0x1D0, cert, 0x30) < 0 && sceIdStorageLookup(0x121, 0x1D0, cert, 0x30) < 0) {
        return 0xC0520002;
    }
    if (sceIdStorageLookup(0x102, 0, cert + 0x30, 0x88) < 0 && sceIdStorageLookup(0x122, 0, cert + 0x30, 0x88) < 0) {
        return 0xC0520002;
    }
    return (sceUtilsBufferCopyWithRange(NULL, 0, cert, 0xB8, KIRK_CMD_CERTVRY) == 0) ? 0 : 0xC0520001;
}

int module_start(SceSize args, void *argp) {
    u32 i;

    for (i = 0; i < sizeof(g_openPsidCert); i++) {
        g_openPsidCert[i] = 0;
    }
    g_openPsidSema = sceKernelCreateSema("SceOpenPSID", 0, 1, 1, NULL);
    return g_openPsidSema < 1;
}

#ifdef NON_MATCHING
/* Register allocation and the WaitSema success-path layout differ. */
int sceOpenPSIDGetOpenPSID(u8 *psid) {
    u32 oldK1;
    int ret;
    u32 i;
    u32 j;

    oldK1 = shiftK1();
    if (k1IsUserMode() && (s32)((u32)psid | (u32)(psid + 0x10)) < 0) {
        ret = 0x80000023;
    } else {
        ret = 0x80000041;
        if (sceKernelWaitSema(g_openPsidSema, 1, NULL) == 0) {
            ret = func_00000000(g_openPsidCert);
            if (ret == 0) {
                for (i = 0; i < 0x10; i++) {
                    psid[i] = g_openPsidCert[i];
                }
                ret = 0;
            }
            for (j = 0; j < sizeof(g_openPsidCert); j++) {
                g_openPsidCert[j] = 0;
            }
            if (sceKernelSignalSema(g_openPsidSema, 1) != 0) {
                ret = 0x80000041;
            }
        }
    }
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("tmp/asm/282/openpsid/nonmatchings/openpsid", sceOpenPSIDGetOpenPSID);
#endif

s32 func_00000244(void) {
    return 0;
}

s32 func_0000024C(void) {
    return 0;
}

int sceDdrdbSigvry(u8 *pubKey, u8 *digest, u8 *sig) {
    u8 *buf = g_ddrdbBufPtr;
    int ret;
    u32 i;

    ddrdb_memcpy(buf, pubKey, 0x28);
    buf += 0x28;
    ddrdb_memcpy(buf, digest, 0x14);
    buf += 0x14;
    ddrdb_memcpy(buf, sig, 0x28);
    ret = (sceUtilsBufferCopyWithRange(NULL, 0, g_ddrdbBufPtr, 0x64, KIRK_CMD_SIGVRY) == 0) ? 0 : 0x80530300;
    for (i = 0; i < 0x64; i++) {
        g_ddrdbBufPtr[i] = 0;
    }
    return ret;
}

int sceDdrdbCertvry(u8 *cert) {
    int ret;
    u32 i;
    u32 j;

    for (i = 0; i < 0xB8; i++) {
        g_ddrdbBufPtr[i] = cert[i];
    }
    ret = (sceUtilsBufferCopyWithRange(NULL, 0, g_ddrdbBufPtr, 0xB8, KIRK_CMD_CERTVRY) == 0) ? 0 : 0x80530300;
    for (j = 0; j < 0xB8; j++) {
        g_ddrdbBufPtr[j] = 0;
    }
    return ret;
}

int sceDdrdbMul1(u8 *out) {
    int ret = 0x80530300;
    u32 i;
    u32 j;

    if (sceUtilsBufferCopyWithRange(g_ddrdbBufPtr, 0x3C, NULL, 0, KIRK_CMD_MUL1) == 0) {
        for (i = 0; i < 0x3C; i++) {
            out[i] = g_ddrdbBufPtr[i];
        }
        ret = 0;
    }
    for (j = 0; j < 0x3C; j++) {
        g_ddrdbBufPtr[j] = 0;
    }
    return ret;
}

int sceDdrdbMul2(u8 *a, u8 *b, u8 *out) {
    int ret;
    u32 i;
    u32 j;
    u32 k;
    u32 l;

    for (i = 0; i < 0x14; i++) {
        g_ddrdbBufPtr[i] = a[i];
    }
    for (j = 0; j < 0x28; j++) {
        g_ddrdbBufPtr[0x14 + j] = b[j];
    }
    if (sceUtilsBufferCopyWithRange(g_ddrdbBufPtr, 0x28, g_ddrdbBufPtr, 0x3C, KIRK_CMD_MUL2) != 0) {
        ret = 0x80530300;
    } else {
        for (k = 0; k < 0x28; k++) {
            out[k] = g_ddrdbBufPtr[k];
        }
        ret = 0;
    }
    for (l = 0; l < 0x3C; l++) {
        g_ddrdbBufPtr[l] = 0;
    }
    return ret;
}

int sceDdrdbSiggen(u8 *privKey, u8 *digest, u8 *sig) {
    int ret;
    u32 i;
    u32 j;
    u32 k;
    u32 l;

    for (i = 0; i < 0x20; i++) {
        g_ddrdbBufPtr[i] = privKey[i];
    }
    for (j = 0; j < 0x14; j++) {
        g_ddrdbBufPtr[0x20 + j] = digest[j];
    }
    if (sceUtilsBufferCopyWithRange(g_ddrdbBufPtr, 0x34, g_ddrdbBufPtr, 0x34, KIRK_CMD_SIGGEN) != 0) {
        ret = 0x80530300;
    } else {
        for (k = 0; k < 0x28; k++) {
            sig[k] = g_ddrdbBufPtr[k];
        }
        ret = 0;
    }
    for (l = 0; l < 0x34; l++) {
        g_ddrdbBufPtr[l] = 0;
    }
    return ret;
}

int sceDdrdbPrngen(u8 *out) {
    int ret = 0x80530300;
    u32 i;
    u32 j;

    if (sceUtilsBufferCopyWithRange(g_ddrdbBufPtr, 0x14, NULL, 0, KIRK_CMD_PRNG) == 0) {
        for (i = 0; i < 0x14; i++) {
            out[i] = g_ddrdbBufPtr[i];
        }
        ret = 0;
    }
    for (j = 0; j < 0x14; j++) {
        g_ddrdbBufPtr[j] = 0;
    }
    return ret;
}

int sceDdrdbHash(u8 *data, u32 size, u8 *digest) {
    int ret;
    u32 i;
    u32 j;
    u32 k;

    if (size > 0x800) {
        ret = 0x80530301;
    } else {
        g_ddrdbBuf[0] = size;
        for (i = 0; i < size; i++) {
            g_ddrdbBufPtr[4 + i] = data[i];
        }
        if (sceUtilsBufferCopyWithRange(g_ddrdbBufPtr, 0x14, g_ddrdbBufPtr, size + 4, KIRK_CMD_SHA1) != 0) {
            ret = 0x80530300;
        } else {
            for (j = 0; j < 0x14; j++) {
                digest[j] = g_ddrdbBufPtr[j];
            }
            ret = 0;
        }
    }
    if (size + 4 < 0x14) {
        for (k = 0; k < 0x14; k++) {
            g_ddrdbBufPtr[k] = 0;
        }
    } else {
        for (k = 0; k < size + 4; k++) {
            g_ddrdbBufPtr[k] = 0;
        }
    }
    return ret;
}

#ifdef NON_MATCHING
/* size and size + 0x14 end up in swapped saved registers. */
int sceDdrdbEncrypt(u8 *buf, u32 size) {
    int ret;
    u32 i;
    u32 j;
    u32 k;

    if (size > 0x800 || (size & 0xF) != 0) {
        ret = 0x80530301;
    } else {
        g_ddrdbBuf[0] = 4;
        g_ddrdbBuf[1] = 0;
        g_ddrdbBuf[2] = 0;
        g_ddrdbBuf[3] = 0xB;
        g_ddrdbBuf[4] = size;
        for (i = 0; i < size; i++) {
            g_ddrdbBufPtr[0x14 + i] = buf[i];
        }
        ret = sceUtilsBufferCopyWithRange(g_ddrdbBufPtr, size + 0x14, g_ddrdbBufPtr, size + 0x14, KIRK_CMD_ENCRYPT);
        if (ret != 0) {
            ret = 0x80530300;
        } else {
            for (j = 0; j < size; j++) {
                buf[j] = g_ddrdbBufPtr[0x14 + j];
            }
            ret = 0;
        }
    }
    for (k = 0; k < size + 0x14; k++) {
        g_ddrdbBufPtr[k] = 0;
    }
    return ret;
}
#else
INCLUDE_ASM("tmp/asm/282/openpsid/nonmatchings/openpsid", sceDdrdbEncrypt);
#endif

int sceDdrdbDecrypt(u8 *buf, u32 size) {
    int ret;
    u32 i;
    u32 j;
    u32 k;

    if (size > 0x800 || (size & 0xF) != 0) {
        ret = 0x80530301;
    } else {
        g_ddrdbBuf[0] = 5;
        g_ddrdbBuf[1] = 0;
        g_ddrdbBuf[2] = 0;
        g_ddrdbBuf[3] = 0xB;
        g_ddrdbBuf[4] = size;
        for (i = 0; i < size; i++) {
            g_ddrdbBufPtr[0x14 + i] = buf[i];
        }
        if (sceUtilsBufferCopyWithRange(g_ddrdbBufPtr, size + 0x14, g_ddrdbBufPtr, size + 0x14, KIRK_CMD_DECRYPT) != 0) {
            ret = 0x80530300;
        } else {
            for (j = 0; j < size; j++) {
                buf[j] = g_ddrdbBufPtr[j];
            }
            ret = 0;
        }
    }
    for (k = 0; k < size + 0x14; k++) {
        g_ddrdbBufPtr[k] = 0;
    }
    return ret;
}
