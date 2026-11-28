/* cflags[100,102,103,150,152]: -Os */
#include "common.h"
#include "msstor_decls.h"

#if FW_VERSION < 201
s32 func_000077C4(s32 err) {
    s32 ret;

    switch (err) {
    case 0:
        ret = 0;
        break;
    case 0x80220087:
    case 0x800201A8:
        ret = -4;
        break;
    case 0x80220088:
        ret = -2;
        break;
    case 0x80220089:
        ret = -3;
        break;
    case 0x8022008B:
        ret = -5;
        break;
    case 0x8022008C:
        ret = -6;
        break;
    default:
        ret = -1;
        break;
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0077C4", func_000077C4);
#endif

#if FW_VERSION < 201
s32 func_00007850(s32 err) {
    switch (err) {
    case -1:
        err = 0x80220180;
        break;
    case -2:
        err = 0x80220088;
        break;
    case -3:
        err = 0x80220089;
        break;
    case -4:
        err = 0x80220087;
        break;
    case -5:
        err = 0x8022008B;
        break;
    case -6:
    case -7:
    case -8:
    case -9:
    case -10:
    case -11:
        err = 0x8022008C;
        break;
    case -12:
        err = 0x80220185;
        break;
    case -13:
        err = 0x80220186;
        break;
    case -14:
    case -15:
        err = 0x80220100;
        break;
    }
    return err;
}
#else
INCLUDE_ASM("nonmatchings/msstor_0077C4", func_00007850);
#endif

#if FW_VERSION < 201
s32 sceMSstorRegisterCLDMSelf(char *path) {
    D_00009A28.path = path;
    if (path != NULL) {
        D_00009A28.load = NULL;
        D_00009A28.unload = 0;
    }
    return sceMScmRegisterCLDM(&D_00009A28);
}
#else
INCLUDE_ASM("nonmatchings/msstor_0077C4", sceMSstorRegisterCLDMSelf);
#endif

INCLUDE_ASM("nonmatchings/msstor_0077C4", func_00007928);

INCLUDE_ASM("nonmatchings/msstor_0077C4", func_00007B38);

INCLUDE_ASM("nonmatchings/msstor_0077C4", func_00007D38);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msstor_0077C4", func_00007F38);
#endif

INCLUDE_ASM("nonmatchings/msstor_0077C4", func_000080E4);

INCLUDE_ASM("nonmatchings/msstor_0077C4", func_000086F4);

INCLUDE_ASM("nonmatchings/msstor_0077C4", func_00008A54);

INCLUDE_RODATA("nonmatchings/msstor_0077C4", D_0000930C);

INCLUDE_RODATA("nonmatchings/msstor_0077C4", D_0000931C);

INCLUDE_RODATA("nonmatchings/msstor_0077C4", D_00009398);

INCLUDE_RODATA("nonmatchings/msstor_0077C4", D_00009414);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msstor_0077C4", D_0000947C);
#endif

INCLUDE_RODATA("nonmatchings/msstor_0077C4", D_000094BC);

INCLUDE_RODATA("nonmatchings/msstor_0077C4", D_00009588);

INCLUDE_RODATA("nonmatchings/msstor_0077C4", D_0000962C);

INCLUDE_RODATA("nonmatchings/msstor_0077C4", D_00009698);

INCLUDE_RODATA("nonmatchings/msstor_0077C4", D_00009758);

INCLUDE_RODATA("nonmatchings/msstor_0077C4", D_000097E8);
