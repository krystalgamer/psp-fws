#include "common.h"
#include "ddrdb.h"
#include "idstorage.h"

typedef struct {
    /* 0x000 */ u8 iv[0x10];
    /* 0x010 */ u8 unk10[0x14];
    /* 0x024 */ u8 unk24[0x28];
    /* 0x04C */ u8 cert[0xB8];
    /* 0x104 */ u8 unk104[0x1C];
} McctrlBlock; /* size 0x120 */

typedef struct {
    /* 0x000 */ u8 iv[0x10];
    /* 0x010 */ u8 unk10[0x28];
    /* 0x038 */ u8 unk38[0x60];
    /* 0x098 */ u8 unk98[0x18];
    /* 0x0B0 */ u8 unkB0[0x1C8];
} McctrlBlock2; /* size 0x278 */

extern s32 D_000012D0;
extern McctrlBlock D_000012D4;
extern McctrlBlock2 D_000013F4;

int func_00000BC8(u8 *src, u8 *dst, u32 size);
int func_00000C48(u8 *src, u8 *dst, u32 size);
int func_00000D3C(u8 *buf, u32 size, u8 *arg2);
int func_00000E78(void *buf, u32 size);
void func_00000EB4(int, int);
int func_00000EBC(u8 *buf, u32 size);
int func_00000F70(u8 *buf);
int func_00000FCC(u8 *cert);
int func_000010A8(u8 *src, u8 *dst, u32 size);
int func_000010F0(u8 *src, u8 *dst, u32 size);

static inline void mcctrl_memclr(void *p, u32 size) {
    u32 i;
    u8 *buf = p;

    for (i = 0; i < size; i++) {
        buf[i] = 0;
    }
}

static inline int mcctrl_memcmp(void *p1, void *p2, int size) {
    int ret = 0;
    int i;
    s8 *a = p1;
    s8 *b = p2;

    for (i = 0; i < size; i++) {
        if (*a != *b) {
            ret = *a - *b;
            break;
        }
        a++;
        b++;
    }
    return ret;
}

static inline void mcctrl_memcpy(void *p1, void *p2, int size) {
    int i;
    u8 *dst = p1;
    u8 *src = p2;

    for (i = 0; i < size; i++) {
        dst[i] = src[i];
    }
}

int module_start(SceSize args, void *argp) {
    return 0;
}

int module_stop(SceSize args, void *argp) {
    return 0;
}

int sceMcctrl_3EF531DB(void) {
    if (D_000012D0 == 0) {
        func_00000EB4(0, 0);
        D_000012D0 = 1;
    }
    return 0;
}

int sceMcctrl_877CD3A5(void) {
    D_000012D0 = 0;
    return 0;
}

#ifdef NON_MATCHING
int sceMcctrl_1EDFD6BB(u8 *arg0, u8 *arg1) {
    McctrlBlock *buf1 = &D_000012D4;
    McctrlBlock2 *buf2 = &D_000013F4;
    int ret = 0x80530001;

    if (D_000012D0 == 0) {
        goto end;
    }
    mcctrl_memclr(buf2, 0xB0);
    mcctrl_memclr(buf1, sizeof(McctrlBlock));
    ret = 0x80530012;
    if (func_00000E78(buf1->cert, sizeof(buf1->cert)) != 0) {
        goto end;
    }
    ret = 0x80530013;
    if (func_00000FCC(buf1->cert) != 0) {
        goto end;
    }
    ret = 0x80530010;
    if (func_00000F70(buf1->unk10) != 0) {
        goto end;
    }
    mcctrl_memcpy(buf2->unk10, buf1->unk24, sizeof(buf2->unk10));
    mcctrl_memcpy(buf2->unk38, buf1->cert, sizeof(buf2->unk38));
    func_00000EBC(buf2->iv, sizeof(buf2->iv));
    ret = func_00000BC8((u8 *)buf2, arg1, 0xB0);
    if (ret != 0) {
        goto end;
    }
    func_00000EBC(buf1->iv, sizeof(buf1->iv));
    ret = func_00000BC8((u8 *)buf1, arg0, sizeof(McctrlBlock));

end:
    func_00000EBC((u8 *)&D_000012D4, sizeof(McctrlBlock));
    func_00000EBC((u8 *)&D_000013F4, sizeof(McctrlBlock2));
    if ((ret & 0xFFFF0000) == 0x80530000) {
        ret |= 0x80530300;
    }
    return ret;
}
#else
INCLUDE_ASM("tmp/asm/360/mcctrl/nonmatchings/mcctrl", sceMcctrl_1EDFD6BB);
#endif

INCLUDE_ASM("tmp/asm/360/mcctrl/nonmatchings/mcctrl", sceMcctrl_7CAC25B2);

int sceMcctrl_9618EE57(u8 *arg0, u8 *arg1, u32 arg2) {
    McctrlBlock *buf1 = &D_000012D4;
    u8 *buf2 = (u8 *)&D_000013F4;
    int ret = 0x80530001;
    u32 len;
    u32 i;

    if (D_000012D0 == 0) {
        goto end;
    }
    ret = func_00000C48(arg0, (u8 *)buf1, sizeof(McctrlBlock));
    if (ret != 0) {
        goto end;
    }
    for (i = 0; i < 4; i++) {
        buf2[i] = arg1[i] ^ buf1->unk10[0x10 + i];
    }
    len = (buf2[0] << 24) | (buf2[1] << 16) | (buf2[2] << 8) | buf2[3];
    ret = 0x80530004;
    if (len <= arg2) {
        ret = (len + 15) & ~15;
    }

end:
    func_00000EBC((u8 *)&D_000012D4, sizeof(McctrlBlock));
    func_00000EBC((u8 *)&D_000013F4, sizeof(McctrlBlock2));
    if ((ret & 0xFFFF0000) == 0x80530000) {
        ret |= 0x80530300;
    }
    return ret;
}

INCLUDE_ASM("tmp/asm/360/mcctrl/nonmatchings/mcctrl", sceMcctrl_61550814);

int func_00000BC8(u8 *src, u8 *dst, u32 size) {
    int ret;

    if (size & 0xF) {
        return 0x80530002;
    }
    ret = func_000010A8(src, dst, size - 16);
    if (ret < 0) {
        ret = 0x80530003;
    } else {
        ret = func_00000D3C(dst, size - 16, dst + size - 16);
    }
    return ret;
}

int func_00000C48(u8 *src, u8 *dst, u32 size) {
    u8 mac[16];
    int ret;

    if (size & 0xF) {
        return 0x80530002;
    }
    ret = func_00000D3C(src, size - 16, mac);
    if (ret < 0) {
        goto end;
    }
    if (mcctrl_memcmp(src + size - 16, mac, 16) != 0) {
        ret = 0x80530006;
        goto end;
    }
    ret = func_000010F0(src, dst, size - 16);
    if (ret < 0) {
        ret = 0x80530004;
    }
end:
    func_00000EBC(mac, 0x10);
    return ret;
}

INCLUDE_ASM("tmp/asm/360/mcctrl/nonmatchings/mcctrl", func_00000D3C);

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
