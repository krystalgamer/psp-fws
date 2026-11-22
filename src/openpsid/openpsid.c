#include "common.h"
#include "openpsid_decls.h"
#include "kirk.h"

extern u8 *g_ddrdbBufPtr;
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

INCLUDE_ASM("tmp/asm/282/openpsid/nonmatchings/openpsid", func_00000000);

INCLUDE_ASM("tmp/asm/282/openpsid/nonmatchings/openpsid", module_start);

INCLUDE_ASM("tmp/asm/282/openpsid/nonmatchings/openpsid", sceOpenPSIDGetOpenPSID);

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

INCLUDE_ASM("tmp/asm/282/openpsid/nonmatchings/openpsid", sceDdrdbEncrypt);

INCLUDE_ASM("tmp/asm/282/openpsid/nonmatchings/openpsid", sceDdrdbDecrypt);
