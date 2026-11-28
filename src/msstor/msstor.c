/* cflags[152]: -Os */
/* cflags[150]: -Os */
/* cflags[100,102,103]: -Os */
#include "common.h"
#include "msstor_decls.h"

INCLUDE_ASM("nonmatchings/msstor", func_00000000);

INCLUDE_ASM("nonmatchings/msstor", func_00000060);

INCLUDE_ASM("nonmatchings/msstor", func_0000009C);

INCLUDE_ASM("nonmatchings/msstor", func_00000134);

INCLUDE_ASM("nonmatchings/msstor", func_0000017C);

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
