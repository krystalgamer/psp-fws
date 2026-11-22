#include "common.h"
#include "ddrdb.h"
#include "idstorage.h"
#include "crypto.h"

int func_00000E78(void *buf, u32 size) {
    int ret;

    if (size >= 0xB8) {
        size = 0xB8;
    }
    ret = sceIdStorageLookup(0x100, 0x38, buf, size);
    return (ret < 0) ? ret : 0;
}

void func_00000EB4(int arg0, int arg1) {
}

int func_00000EBC(u8 *buf, u32 size) {
    u8 rand[20];
    u32 i;
    int ret = 0;

    for (i = 0; i < size; i++) {
        if (i % 20 == 0) {
            ret = sceDdrdbPrngen(rand);
            if (ret < 0) {
                break;
            }
        }
        buf[i] = rand[i % 20];
    }
    return ret;
}

int func_00000F70(u8 *buf) {
    return sceDdrdbMul1(buf);
}

int func_00000F8C(u8 *out, u8 *b, u8 *a) {
    return sceDdrdbMul2(a, b, out);
}

int func_00000FB0(u8 *data, u32 size, u8 *digest) {
    return sceDdrdbHash(data, size, digest);
}

int func_00000FCC(u8 *cert) {
    return sceDdrdbCertvry(cert);
}

int func_00000FE8(u8 *sig, u8 *pubKey, u8 *data, u32 size) {
    u8 digest[20];
    int ret;

    ret = sceDdrdbHash(data, size, digest);
    if (ret < 0) {
        return ret;
    }
    return sceDdrdbSigvry(pubKey, digest, sig);
}

int func_00001048(u8 *sig, u8 *privKey, u8 *data, u32 size) {
    u8 digest[20];
    int ret;

    ret = sceDdrdbHash(data, size, digest);
    if (ret < 0) {
        return ret;
    }
    return sceDdrdbSiggen(privKey, digest, sig);
}

int func_000010A8(u8 *src, u8 *dst, u32 size) {
    u32 i;

    for (i = 0; i < size; i++) {
        dst[i] = src[i];
    }
    return sceDdrdbEncrypt(dst, size);
}

int func_000010F0(u8 *src, u8 *dst, u32 size) {
    u32 i;

    for (i = 0; i < size; i++) {
        dst[i] = src[i];
    }
    return sceDdrdbDecrypt(dst, size);
}
