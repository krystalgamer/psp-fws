#include "common.h"
#include "crypto.h"

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

typedef struct {
    /* 0x00 */ u8 key[0x40];
    /* 0x40 */ u8 digest[0x14];
} McctrlMacCtx; /* size 0x54 */

extern s32 D_000012D0;
extern McctrlBlock D_000012D4;
extern McctrlBlock2 D_000013F4;
extern u8 D_0000166C[0xD0];
extern McctrlMacCtx D_0000173C;

int func_00000BC8(u8 *src, u8 *dst, u32 size);
int func_00000C48(u8 *src, u8 *dst, u32 size);
int func_00000D3C(u8 *buf, u32 size, u8 *arg2);

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
    ret = func_00000F70(buf1->unk10);
    if (ret != 0) {
        ret = 0x80530010;
        goto end;
    }
    mcctrl_memcpy(buf2->unk10, buf1->unk24, sizeof(buf2->unk10));
    mcctrl_memcpy(buf2->unk38, buf1->cert, sizeof(buf2->unk38));
    func_00000EBC(buf2->iv, sizeof(buf2->iv));
    /* FAKEMATCH: no-op that raises arg0's allocation priority (s4/s5 order). */
    arg0++;
    arg0--;
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

#ifdef NON_MATCHING
int sceMcctrl_7CAC25B2(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, u8 *arg4, u8 *arg5) {
    McctrlBlock *buf1 = &D_000012D4;
    u8 *buf2 = (u8 *)&D_000013F4;
    u8 *in = buf2 + 0x28;
    u8 *out = buf2 + 0x148;
    int ret = 0x80530001;
    u8 *work;

    if (D_000012D0 == 0) {
        goto end;
    }
    mcctrl_memclr(out, 0x130);
    ret = func_00000C48(arg1, in, 0x120);
    if (ret != 0) {
        goto end;
    }
    ret = func_00000C48(arg0, (u8 *)buf1, sizeof(McctrlBlock));
    if (ret != 0) {
        goto end;
    }
    ret = 0x80530013;
    if (func_00000FCC(buf1->cert) != 0) {
        goto end;
    }
    mcctrl_memcpy(D_0000166C, in + 0xAC, 0x38);
    ret = 0x80530019;
    if (func_00000FE8(in + 0xE4, buf1->cert + 0x60, D_0000166C, 0x38) != 0) {
        goto end;
    }
    mcctrl_memcpy(D_0000166C, in + 0x10, 0x60);
    ret = 0x8053001A;
    if (func_00000FE8(in + 0x70, in + 0xBC, D_0000166C, 0x60) != 0) {
        goto end;
    }
    if (mcctrl_memcmp(in + 0x38, buf1->unk24, 0x28) != 0) {
        ret = 0x80530029;
        goto end;
    }
    if (mcctrl_memcmp(in + 0x60, buf1->cert, 0x10) != 0) {
        ret = 0x80530028;
        goto end;
    }
    ret = 0x80530011;
    if (func_00000F8C(buf2, in + 0x10, buf1->unk10) != 0) {
        goto end;
    }
    work = D_0000166C;
    mcctrl_memcpy(work, buf2, 0x14);
    work += 0x14;
    mcctrl_memcpy(work, in + 0x10, 0x60);
    ret = func_00000FB0(D_0000166C, 0x74, D_0000166C);
    if (ret != 0) {
        ret = 0x80530020;
        goto end;
    }
    if (mcctrl_memcmp(in + 0x98, D_0000166C, 0x14) != 0) {
        ret = 0x80530021;
        goto end;
    }
    mcctrl_memcpy(out + 0x10, buf1->unk24, 0x28);
    mcctrl_memcpy(out + 0x38, in + 0x10, 0x28);
    mcctrl_memcpy(out + 0x60, in + 0xAC, 0x10);
    mcctrl_memcpy(out + 0xAC, arg2, 0x20);
    mcctrl_memcpy(out + 0xCC, arg3, 0x40);
    mcctrl_memcpy(out + 0x10C, arg4, 0x10);
    work = D_0000166C;
    mcctrl_memcpy(work, out + 0x10, 0x60);
    work += 0x60;
    mcctrl_memcpy(work, out + 0xAC, 0x20);
    work += 0x20;
    mcctrl_memcpy(work, out + 0xCC, 0x40);
    work += 0x40;
    mcctrl_memcpy(work, out + 0x10C, 0x10);
    ret = 0x80530018;
    if (func_00001048(out + 0x70, buf1->cert + 0x88, D_0000166C, 0xD0) != 0) {
        goto end;
    }
    work = D_0000166C;
    mcctrl_memcpy(work, buf2, 0x14);
    work += 0x14;
    mcctrl_memcpy(work, out + 0x10, 0x60);
    ret = func_00000FB0(work - 0x14, 0x74, work - 0x14);
    if (ret != 0) {
        ret = 0x80530020;
        goto end;
    }
    mcctrl_memcpy(out + 0x98, work - 0x14, 0x14);
    mcctrl_memclr(buf1, sizeof(McctrlBlock));
    mcctrl_memcpy(buf1->unk10, buf2, 0x14);
    func_00000EBC(out, 0x10);
    ret = func_00000BC8(out, arg5, 0x130);
    if (ret != 0) {
        goto end;
    }
    func_00000EBC(buf1->iv, sizeof(buf1->iv));
    ret = func_00000BC8((u8 *)buf1, arg0, sizeof(McctrlBlock));

end:
    func_00000EBC((u8 *)&D_000012D4, sizeof(McctrlBlock));
    func_00000EBC((u8 *)&D_000013F4, sizeof(McctrlBlock2));
    func_00000EBC(D_0000166C, sizeof(D_0000166C));
    if ((ret & 0xFFFF0000) == 0x80530000) {
        ret |= 0x80530300;
    }
    return ret;
}
#else
INCLUDE_ASM("tmp/asm/360/mcctrl/nonmatchings/mcctrl", sceMcctrl_7CAC25B2);
#endif

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

int sceMcctrl_61550814(u8 *arg0, u8 *arg1, int size, u8 *out, u32 outSize) {
    McctrlBlock *buf1 = &D_000012D4;
    u8 *buf2 = (u8 *)&D_000013F4;
    u8 *data = arg1 + 4;
    int ret = 0x80530001;
    u32 len;
    int i;

    if (D_000012D0 == 0) {
        goto end;
    }
    ret = func_00000C48(arg0, (u8 *)buf1, sizeof(McctrlBlock));
    if (ret != 0) {
        goto end;
    }
    for (i = 0; i < sizeof(u32); i++) {
        buf2[i] = arg1[i] ^ buf1->unk10[0x10 + i];
    }
    len = (buf2[0] << 24) | (buf2[1] << 16) | (buf2[2] << 8) | buf2[3];
    ret = 0x80530002;
    if (outSize < ((len + 15) & ~15)) {
        goto end;
    }
    ret = func_00000C48(data, out, size - 4);
    if (ret != 0) {
        goto end;
    }
    for (i = 0; i < len; i++) {
        out[i] ^= buf1->unk10[i % 16];
        if (i % 16 == 15) {
            ret = func_000010A8(D_000012D4.unk10, D_000012D4.unk10, 0x10);
            if (ret < 0) {
                ret = 0x80530004;
                goto end;
            }
        }
    }
    ret = len;

end:
    func_00000EBC((u8 *)&D_000012D4, sizeof(McctrlBlock));
    func_00000EBC((u8 *)&D_000013F4, sizeof(McctrlBlock2));
    if ((ret & 0xFFFF0000) == 0x80530000) {
        ret |= 0x80530300;
    }
    return ret;
}

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

int func_00000D3C(u8 *buf, u32 size, u8 *mac) {
    u8 *key;
    int ret = 0x80530006;

    if (func_00000FB0(buf, size, D_0000173C.digest) < 0) {
        goto end;
    }
    /* The MAC key is embedded in .text behind a dead `jr $ra` stub. */
    __asm__ __volatile__(
        ".set noreorder\n"
        "    la      %0, 1f\n"
        "    b       2f\n"
        "    nop\n"
        "    jr      $31\n"
        "    nop\n"
        "1:\n"
        "    .word   0x2021CDAA, 0xB64FDA4E, 0x8891FEDA, 0x3BC6A8CD\n"
        "    .word   0x9EB34F8D, 0x12F769F8, 0x4F108508, 0x5CFB72DF\n"
        "    .word   0x0C4460EC, 0x3F222AD6, 0x52E27FF3, 0x75D00F40\n"
        "    .word   0x3B9C492B, 0x30826A0A, 0xCE4D6B44, 0x20D12AC2\n"
        "    nop\n"
        "2:\n"
        ".set reorder\n"
        : "=r"(key));
    mcctrl_memcpy(D_0000173C.key, key, sizeof(D_0000173C.key));
    ret = func_00000FB0((u8 *)&D_0000173C, sizeof(McctrlMacCtx), (u8 *)&D_0000173C);
    if (ret < 0) {
        ret = 0x80530006;
    } else {
        mcctrl_memcpy(mac, &D_0000173C, 16);
    }
end:
    func_00000EBC((u8 *)&D_0000173C, sizeof(McctrlMacCtx));
    return ret;
}
