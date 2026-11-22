#include "common.h"
#include "openpsid_decls.h"
#include "kirk.h"

extern u8 *g_ddrdbBufPtr;
extern u32 g_ddrdbBuf[];

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

INCLUDE_ASM("tmp/asm/282/openpsid/nonmatchings/openpsid", sceDdrdbSigvry);

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

INCLUDE_ASM("tmp/asm/282/openpsid/nonmatchings/openpsid", sceDdrdbMul2);

INCLUDE_ASM("tmp/asm/282/openpsid/nonmatchings/openpsid", sceDdrdbSiggen);

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

#ifdef NON_MATCHING
/* 7 words off: psp-gcc moves `ret = 0` into the digest copy loop. */
int sceDdrdbHash(u8 *data, u32 size, u8 *digest) {
    int ret = 0x80530301;
    u32 i;
    u32 j;
    u32 k;

    if (size <= 0x800) {
        g_ddrdbBuf[0] = size;
        for (i = 0; i < size; i++) {
            g_ddrdbBufPtr[4 + i] = data[i];
        }
        ret = 0x80530300;
        if (sceUtilsBufferCopyWithRange(g_ddrdbBufPtr, 0x14, g_ddrdbBufPtr, size + 4, KIRK_CMD_SHA1) == 0) {
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
#else
INCLUDE_ASM("tmp/asm/282/openpsid/nonmatchings/openpsid", sceDdrdbHash);
#endif

INCLUDE_ASM("tmp/asm/282/openpsid/nonmatchings/openpsid", sceDdrdbEncrypt);

INCLUDE_ASM("tmp/asm/282/openpsid/nonmatchings/openpsid", sceDdrdbDecrypt);
