#include "common.h"
#include "k1.h"
#include "chnnlsv_decls.h"

INCLUDE_ASM("nonmatchings/chnnlsv", func_00000000);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/chnnlsv", D_00001700);

INCLUDE_RODATA("nonmatchings/chnnlsv", D_00001710);

INCLUDE_RODATA("nonmatchings/chnnlsv", D_00001720);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/chnnlsv", D_000019A0);

INCLUDE_RODATA("nonmatchings/chnnlsv", D_000019B0);

INCLUDE_RODATA("nonmatchings/chnnlsv", D_000019C0);

INCLUDE_RODATA("nonmatchings/chnnlsv", D_000019D0);

INCLUDE_RODATA("nonmatchings/chnnlsv", D_000019E0);

INCLUDE_RODATA("nonmatchings/chnnlsv", D_000019F0);
#endif

s32 module_start(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    temp_v0 = sceKernelCreateSema("SceChnnlsv1", 0U, 1, 1, NULL);
    D_00002AD4 = temp_v0;
    var_v1 = 1;
    if (temp_v0 > 0) {
        temp_v0_2 = sceKernelCreateSema("SceChnnlsv2", 0U, 1, 1, NULL);
        D_00002AD8 = temp_v0_2;
        var_v1 = 0;
        if (temp_v0_2 <= 0) {
            sceKernelDeleteSema(D_00002AD4);
            var_v1 = 1;
        }
    }
    return var_v1;
}

s32 module_stop(SceSize args, void *argp) {
    u32 timeout = 1000000;

    if (sceKernelWaitSema(D_00002AD4, 1, &timeout) != 0) {
        return 1;
    }
    sceKernelDeleteSema(D_00002AD4);
    if (sceKernelWaitSema(D_00002AD8, 1, &timeout) != 0) {
        return 1;
    }
    sceKernelDeleteSema(D_00002AD8);
    return 0;
}

#if FW_VERSION < 352
s32 sceSdSetIndex(SceSdCtx2 *ctx, s32 mode) {
    u32 oldK1 = shiftK1();
    s32 ret;
    u32 i;

    if (k1IsUserMode() && (s32)((u32)ctx | ((u32)ctx + sizeof(SceSdCtx2))) < 0) {
        ret = -259;
    } else {
        ctx->mode = mode;
        for (i = 0; i < 16; i++) {
            ctx->data[i] = 0;
        }
        for (i = 0; i < 16; i++) {
            ctx->key[i] = 0;
        }
        ctx->size = 0;
        ret = 0;
    }
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/chnnlsv", sceSdSetIndex);
#endif

INCLUDE_ASM("nonmatchings/chnnlsv", sceSdRemoveValue);

INCLUDE_ASM("nonmatchings/chnnlsv", sceSdGetLastIndex);

INCLUDE_ASM("nonmatchings/chnnlsv", sceSdCreateList);

INCLUDE_ASM("nonmatchings/chnnlsv", sceSdSetMember);

#if FW_VERSION < 352
s32 sceSdCleanList(SceSdCtx1 *ctx) {
    u32 oldK1 = shiftK1();
    s32 ret;
    u32 i;

    if (k1IsUserMode() && (s32)((u32)ctx | ((u32)ctx + sizeof(SceSdCtx1))) < 0) {
        ret = -259;
    } else {
        for (i = 0; i < 16; i++) {
            ctx->data[i] = 0;
        }
        ctx->mode = 0;
        ctx->unk4 = 0;
        ret = 0;
    }
    setK1(oldK1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/chnnlsv", sceSdCleanList);
#endif

s32 _kirk4(void *buf, u32 size, u32 scramble_code) {
    ((u32 *)buf)[3] = scramble_code;
    ((u32 *)buf)[0] = 4;
    ((u32 *)buf)[1] = 0;
    ((u32 *)buf)[2] = 0;
    ((u32 *)buf)[4] = size;
    if (sceUtilsBufferCopyWithRange(buf, size + 20, buf, size + 20, 4) != 0) {
        return -257;
    }
    return 0;
}

s32 _kirk7(void *buf, u32 size, u32 scramble_code) {
    ((u32 *)buf)[3] = scramble_code;
    ((u32 *)buf)[0] = 5;
    ((u32 *)buf)[1] = 0;
    ((u32 *)buf)[2] = 0;
    ((u32 *)buf)[4] = size;
    if (sceUtilsBufferCopyWithRange(buf, size + 20, buf, size + 20, 7) != 0) {
        return -257;
    }
    return 0;
}

s32 _kirk5(void *buf, u32 size) {
    ((u32 *)buf)[0] = 4;
    ((u32 *)buf)[3] = 256;
    ((u32 *)buf)[1] = 0;
    ((u32 *)buf)[2] = 0;
    ((u32 *)buf)[4] = size;
    if (sceUtilsBufferCopyWithRange(buf, size + 20, buf, size + 20, 5) != 0) {
        return -258;
    }
    return 0;
}

s32 _kirk8(void *buf, u32 size) {
    ((u32 *)buf)[0] = 5;
    ((u32 *)buf)[3] = 256;
    ((u32 *)buf)[1] = 0;
    ((u32 *)buf)[2] = 0;
    ((u32 *)buf)[4] = size;
    if (sceUtilsBufferCopyWithRange(buf, size + 20, buf, size + 20, 8) != 0) {
        return -258;
    }
    return 0;
}

s32 _kirk4Xor(void *buf, u32 size, u8 *data, u32 scramble_code) {
    s32 ret;
    u32 i;
    u32 j;

    for (i = 0; i < 16; i++) {
        ((u8 *)buf)[20 + i] ^= data[i];
    }
    ret = _kirk4(buf, size, scramble_code);
    if (ret == 0) {
        for (j = 0; j < 16; j++) {
            data[j] = ((u8 *)buf + size)[j + 4];
        }
        ret = 0;
    }
    return ret;
}

s32 _kirk7Xor(void *buf, u32 size, u8 *data, u32 scramble_code) {
    s32 ret;
    u32 i;
    u32 j;
    u32 k;
    u8 block[16];

    for (i = 0; i < 16; i++) {
        block[i] = ((u8 *)buf + size)[i + 4];
    }
    ret = _kirk7(buf, size, scramble_code);
    if (ret == 0) {
        for (j = 0; j < 16; j++) {
            ((u8 *)buf)[j] ^= data[j];
        }
        for (k = 0; k < 16; k++) {
            data[k] = block[k];
        }
        ret = 0;
    }
    return ret;
}

s32 _kirk5Xor(void *buf, u32 size, u8 *data) {
    s32 ret;
    u32 i;
    u32 j;

    for (i = 0; i < 16; i++) {
        ((u8 *)buf)[20 + i] ^= data[i];
    }
    ret = _kirk5(buf, size);
    if (ret == 0) {
        for (j = 0; j < 16; j++) {
            data[j] = ((u8 *)buf + size)[j + 4];
        }
        ret = 0;
    }
    return ret;
}

s32 _kirk8Xor(void *buf, u32 size, u8 *data) {
    s32 ret;
    u32 i;
    u32 j;
    u32 k;
    u8 block[16];

    for (i = 0; i < 16; i++) {
        block[i] = ((u8 *)buf + size)[i + 4];
    }
    ret = _kirk8(buf, size);
    if (ret == 0) {
        for (j = 0; j < 16; j++) {
            ((u8 *)buf)[j] ^= data[j];
        }
        for (k = 0; k < 16; k++) {
            data[k] = block[k];
        }
        ret = 0;
    }
    return ret;
}

s32 _kirk14(u8 *buf) {
    if (sceUtilsBufferCopyWithRange(buf, 0x14, NULL, 0, 0xE) != 0) {
        return -261;
    }
    return 0;
}
