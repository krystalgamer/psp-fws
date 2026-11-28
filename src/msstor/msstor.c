/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -mext */
/* cflags[152]: -Os */
/* cflags[150]: -Os */
/* cflags[100,102,103]: -Os */
#include "common.h"
#include "msstor_decls.h"

#if FW_VERSION < 201
s32 func_00000000(s32 arg) {
    s32 ret;

    ret = -0xD;
    if (D_00009B50->writable != 0) {
        ret = -0xC;
        if (D_00009B50->wpSwitch == 0) {
            D_00009B50->partStart = 0;
            D_00009B50->unk4E64 = 0;
            ret = D_00009888->unk8(D_00009B50, arg);
        }
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/msstor", func_00000000);
#endif

#if FW_VERSION < 201
s32 func_00000060(SceMSstorDev *dev) {
    s32 ret;

    D_00009B50 = dev;
    ret = func_00000518(dev, 0);
    if (ret != 0) {
        return ret;
    }
    return func_0000009C();
}
#else
INCLUDE_ASM("nonmatchings/msstor", func_00000060);
#endif

#if FW_VERSION < 201
s32 func_0000009C(void) {
    s32 ret;

    ret = func_00000548(D_00009B50);
    if (ret == 0) {
        ret = -1;
        switch (D_00009B50->mediaType2) {
        case 0x40:
        case 0x41:
            D_00009888 = &D_00009850;
            break;
        case 0x10:
        case 0x11:
            D_00009888 = &D_0000986C;
            break;
        default:
            goto end;
        }
        ret = D_00009888->attach(D_00009B50);
    }
end:
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/msstor", func_0000009C);
#endif

#if FW_VERSION < 201
s32 func_00000134(s32 lba, s32 count, void *buf) {
    return D_00009888->read(D_00009B50, lba + D_00009B50->partStart, count, buf);
}
#else
INCLUDE_ASM("nonmatchings/msstor", func_00000134);
#endif

#if FW_VERSION < 201
s32 func_0000017C(s32 lba, s32 count, void *buf) {
    return D_00009888->read(D_00009B50, lba, count, buf);
}
#else
INCLUDE_ASM("nonmatchings/msstor", func_0000017C);
#endif

#if FW_VERSION < 201
s32 func_000001BC(s32 lba, s32 count, void *buf) {
    s32 ret;

    ret = -0xD;
    if (D_00009B50->writable != 0) {
        ret = -0xC;
        if (D_00009B50->wpSwitch == 0) {
            ret = D_00009888->write(D_00009B50, lba + D_00009B50->partStart, count, buf);
        }
    }
    return ret;
}

s32 func_00000220(s32 lba, s32 count, void *buf) {
    s32 ret;

    ret = -0xD;
    if (D_00009B50->writable != 0) {
        ret = -0xC;
        if (D_00009B50->wpSwitch == 0) {
            ret = D_00009888->write(D_00009B50, lba, count, buf);
        }
    }
    return ret;
}

s32 func_00000288(void) {
    return D_00009888->unk10(D_00009B50);
}

s32 func_00000518(SceMSstorDev *dev, s32 arg1) {
    dev->writable = 1;
    dev->parallel = 0;
    return func_00001568(dev);
}
#endif
