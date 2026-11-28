/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "umd9660_decls.h"

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umd9660", func_00000000);

INCLUDE_ASM("nonmatchings/umd9660", func_000000E0);

INCLUDE_ASM("nonmatchings/umd9660", func_00000190);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_0000030C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/umd9660", D_00005624);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00000338);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/umd9660", D_00006698);

INCLUDE_RODATA("nonmatchings/umd9660", D_0000669C);

INCLUDE_RODATA("nonmatchings/umd9660", D_000066B0);

INCLUDE_RODATA("nonmatchings/umd9660", D_000066C8);

INCLUDE_RODATA("nonmatchings/umd9660", D_000066DC);

INCLUDE_RODATA("nonmatchings/umd9660", D_000066FC);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006710);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006728);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006740);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006758);

INCLUDE_RODATA("nonmatchings/umd9660", D_0000676C);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006778);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006790);

INCLUDE_RODATA("nonmatchings/umd9660", D_000067A4);

INCLUDE_RODATA("nonmatchings/umd9660", D_000067C4);

INCLUDE_RODATA("nonmatchings/umd9660", D_000067D8);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006830);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006834);

INCLUDE_RODATA("nonmatchings/umd9660", D_0000683C);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006848);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006850);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006854);

INCLUDE_RODATA("nonmatchings/umd9660", D_0000686C);

INCLUDE_RODATA("nonmatchings/umd9660", D_00006894);

INCLUDE_RODATA("nonmatchings/umd9660", D_000068C0);

INCLUDE_RODATA("nonmatchings/umd9660", D_000068C8);

INCLUDE_RODATA("nonmatchings/umd9660", D_000068D8);

INCLUDE_RODATA("nonmatchings/umd9660", D_000068FC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/umd9660", D_00005A98);
#endif

INCLUDE_RODATA("nonmatchings/umd9660", D_00005AF0);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005AF4);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/umd9660", D_00005858);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00000374);

INCLUDE_ASM("nonmatchings/umd9660", func_00000564);

INCLUDE_ASM("nonmatchings/umd9660", func_000007BC);
#else
INCLUDE_RODATA("nonmatchings/umd9660", D_00005AFC);
#endif

#if FW_VERSION < 201
SceOff umd9660_lseek(SceIoIob *iob, SceOff ofs, s32 whence) {
    SceOff ret;
    UMD9660_ASSERT(iob != NULL, D_00005A70, D_00005AFC, "umd9660_lseek", UMD9660_V(0x1B3, 0x1B3, 0x1B3, 0x124, 0x125));
    UMD9660_ASSERT(iob->i_private != NULL, D_00005A70, D_00005AFC, "umd9660_lseek", UMD9660_V(0x1B4, 0x1B4, 0x1B4, 0x125, 0x126));
    if (iob == NULL) {
        return 0x80010016;
    }
    if (iob->i_private == NULL) {
        return 0x80010013;
    }
    ret = umd9660_set_lseek(iob->i_private, ofs, whence);
    iob->i_fpos = ret;
    return ret;
}

INCLUDE_RODATA("nonmatchings/umd9660", D_00005A70);

s32 umd9660_close(SceIoIob *iob) {
    s32 ret;
    UMD9660_ASSERT(iob != NULL, D_00005A70, D_00005AFC, "umd9660_close", UMD9660_V(0x1D5, 0x1D5, 0x1D5, 0x145, 0x146));
    ret = 0x80010016;
    if (iob != NULL) {
        ret = func_00003D28(iob);
        if (ret == 0) {
            iob->i_private = NULL;
        }
    }
    return ret;
}
#endif

#if FW_VERSION == 100
s32 umd9660_read(SceIoIob *iob, void *buf, SceSize cnt) {
    SceUmd9660File *file = iob->i_private;
    SceUmdLbnParam param;
    s32 ret;
    UMD9660_ASSERT(cnt != 0, D_00005A70, D_00005AFC, "umd9660_read", 0x1FF);
    UMD9660_ASSERT(iob != NULL, D_00005A70, D_00005AFC, "umd9660_read", 0x200);
    UMD9660_ASSERT(buf != NULL, D_00005A70, D_00005AFC, "umd9660_read", 0x201);
    UMD9660_ASSERT(file != NULL, D_00005A70, D_00005AFC, "umd9660_read", 0x202);
    if (iob == NULL || file == NULL || file->drive == NULL) {
        return 0x80010002;
    }
    sceKernelWaitSema(file->drive->semaId, 1, NULL);
    ret = 0x80010016;
    if (buf == NULL || cnt == 0) {
        goto end;
    }
    if (file->pos > file->numSectors) {
        ret = 0x80210002;
        goto end;
    }
    if (cnt + file->pos > file->numSectors) {
        cnt = file->numSectors - file->pos;
    }
    param.unk0 = 0;
    param.cmd = 0;
    param.lbn = file->pos;
    param.lbnSize = cnt;
    param.size = cnt << 11;
    param.byteSizeMiddle = cnt << 11;
    param.byteSizeFirst = 0;
    param.byteSizeLast = 0;
    ret = func_00002974(file->drive, buf, cnt << 11, &param);
    if (ret == 0) {
        file->pos += cnt;
        ret = cnt;
    }
end:
    sceKernelSignalSema(file->drive->semaId, 1);
    return ret;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", umd9660_read);
#endif

#if FW_VERSION < 201
s32 umd9660_exit(void *dev) {
    s32 ret = 0;
    UMD9660_ASSERT(dev != NULL, D_00005A70, D_00005AFC, "umd9660_exit", UMD9660_V(0x275, 0x280, 0x27F, 0x1FD, 0x1FE));
    if (dev == NULL) {
        return 0x80010016;
    }
#if FW_VERSION < 150
    if (sceKernelDipswAll() & 0x10000) {
#else
    if (sceAtaIsDvdDrive()) {
#endif
        func_00004330();
        ret = func_00004FE4();
        if (ret != 0) {
            return ret;
        }
    }
    sceUmd9660Term();
    return ret;
}

INCLUDE_ASM("nonmatchings/umd9660", umd9660_open);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umd9660", func_000007CC);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/umd9660", func_00000780);
#endif

#if FW_VERSION < 150
s32 umd9660_devctl(SceIoIob *iob, const char *name, s32 cmd, void *indata, SceSize inlen, void *outdata, SceSize outlen) {
    SceUmd9660Drive *drive;
    char devname[0x20];
    s32 ret;
    s32 res;
    UMD9660_ASSERT(iob != NULL, D_00005A70, D_00005AFC, "umd9660_devctl", UMD9660_V(0x49E, 0x4AB, 0x4B8, 0x44C, 0x44D));
    drive = sceUmd9660GetDrive(iob->i_unit);
    res = 0x80010016;
    ret = 0x80010013;
    if (drive == NULL) {
        goto end;
    }
    memset(devname, 0, sizeof(devname));
    if (iob == NULL || iob->i_unit < 0 || iob->i_unit >= 3 || cmd < 1) {
        goto out;
    }
    sprintf(devname, "%s%01d:/MASTER", D_00005AF0, iob->i_unit);
    res = umd9660_exec_devctl(iob, devname, cmd, indata, inlen, outdata, outlen);
out:
    ret = res;
end:
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", umd9660_devctl);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
s32 func_000009BC(s32 arg0) {
    return !(arg0 & 0xF02) ? 0 : 0x8001B004;
}
#endif

#if FW_VERSION < 151
s32 func_00000964(s32 arg0) {
    return (-((arg0 & 0xF02) == 0) & 0x7FFE4FFC) - 0x7FFE4FFC;
}
#endif

#if FW_VERSION == 271
s32 func_00000984(s32 arg0) {
    return __builtin_allegrex_ext(arg0, 0x10, 4);
}
#endif

#if FW_VERSION < 271
s32 func_00000984(s32 arg0) {
    return (arg0 >> 0x10) & 0xF;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_000003A0);

INCLUDE_ASM("nonmatchings/umd9660", func_00000594);

INCLUDE_ASM("nonmatchings/umd9660", func_0000090C);

s32 func_00000B34(s32 arg0) {
    return !(arg0 & 0xF02) ? 0 : 0x8001B004;
}

s32 func_00000B48(s32 arg0) {
    return __builtin_allegrex_ext(arg0, 0x10, 4);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/umd9660", func_00000CDC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umd9660", module_start);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 module_start(void) {
    func_000026E4()->maxFiles = 8;
    sceIoAddDrv(&D_00006318);
    if (sceAtaIsDvdDrive() == 0) {

    } else {
        func_000043DC();
        func_00004308();
    }
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_000009B0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_00000BD4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umd9660", func_00000AF4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/umd9660", func_000009D8);
#endif

#if FW_VERSION < 150
s32 module_start(void) {
    func_000026E4()->maxFiles = 8;
    sceIoAddDrv(&D_00005D38);
    if (!(sceKernelDipswAll() & 0x10000)) {

    } else {
        func_000043DC();
        func_00004308();
    }
    return 0;
}
#endif

#if FW_VERSION < 201
s32 umd9660_init(void *dev) {
    s32 ret;
    UMD9660_ASSERT(dev != NULL, D_00005A70, D_00005AFC, "umd9660_init", UMD9660_V(0x252, 0x25D, 0x25C, 0x1DA, 0x1DB));
    if (dev == NULL) {
        return 0x80010016;
    }
    ret = sceUmd9660Init();
    if (ret != 0) {
        return ret;
    }
    return 0;
}

/* the devctl helpers have other auto names in these versions */
#if FW_VERSION == 103
#define func_00003818 func_000039E8
#define func_000038F0 func_00003B9C
#define func_0000397C func_00003C88
#define func_00003A74 func_00003DC0
#define func_00003E54 func_00004288
#elif FW_VERSION >= 150 && FW_VERSION < 152
#define func_000022E8 func_000022EC
#define func_000023E4 func_000023E0
#define func_00003818 func_000038C8
#define func_000038F0 func_00003A68
#define func_0000397C func_00003B5C
#define func_00003A74 func_00003C9C
#define func_00003AF8 func_00003D78
#define func_000042A8 func_00003F40
#define func_00003C8C func_00004038
#define func_00003E54 func_00004218
#elif FW_VERSION == 152
#define func_000022E8 func_000022EC
#define func_000023E4 func_000023E0
#define func_00003818 func_000038A4
#define func_000038F0 func_00003A68
#define func_0000397C func_00003B5C
#define func_00003A74 func_00003C9C
#define func_00003AF8 func_00003D78
#define func_000042A8 func_00003F40
#define func_00003C8C func_00004038
#define func_00003E54 func_00004218
#endif

s32 umd9660_exec_devctl(SceIoIob *iob, const char *name, s32 cmd, void *indata, SceSize inlen, void *outdata, SceSize outlen) {
    SceUmd9660Drive *drive;
    SceUmd9660DevctlArgs args;
    s32 val;
    s32 ret = 0;
    UMD9660_ASSERT(cmd >= 0, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x345, 0x350, 0x34F, 0x2E3, 0x2E4));
    UMD9660_ASSERT(iob != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x346, 0x351, 0x350, 0x2E4, 0x2E5));
    if (iob == NULL || cmd < 0) {
        return 0x80010016;
    }
    drive = sceUmd9660GetDrive(iob->i_unit);
    switch (cmd) {
    case 0x1F21011:
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x352, 0x35D, 0x35C, 0x2F0, 0x2F1));
        UMD9660_ASSERT(outlen >= 0x10, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x353, 0x35E, 0x35D, 0x2F1, 0x2F2));
        ret = func_00003C8C(drive, outdata);
        break;
    case 0x1F20002:
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x35C, 0x367, 0x366, 0x2FA, 0x2FB));
        UMD9660_ASSERT(outlen >= 4, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x35D, 0x368, 0x367, 0x2FB, 0x2FC));
        *(s32 *)outdata = func_0000420C();
        break;
    case 0x1E380C0:
        UMD9660_ASSERT(outlen != 0, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x369, 0x374, 0x373, 0x307, 0x308));
        UMD9660_ASSERT(indata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x36A, 0x375, 0x374, 0x308, 0x309));
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x36B, 0x376, 0x375, 0x309, 0x30A));
        args.iob = iob;
        args.name = name;
        args.cmd = cmd;
        args.indata = indata;
        args.inlen = inlen;
        args.outlen = outlen;
        args.outdata = outdata;
        args.drive = drive;
        ret = sceKernelExtendKernelStack(0x1000, func_000013F4, &args);
        break;
    case 0x1F200A1:
        UMD9660_ASSERT(outlen != 0, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x37A, 0x385, 0x384, 0x318, 0x319));
        UMD9660_ASSERT(indata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x37B, 0x386, 0x385, 0x319, 0x31A));
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x37C, 0x387, 0x386, 0x31A, 0x31B));
        ret = func_00003FC0(drive, outdata, indata);
        break;
    case 0x1F200A2:
        UMD9660_ASSERT(outlen != 0, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x382, 0x38D, 0x38C, 0x320, 0x321));
        UMD9660_ASSERT(indata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x383, 0x38E, 0x38D, 0x321, 0x322));
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x384, 0x38F, 0x38E, 0x322, 0x323));
        ret = func_00004004(drive, outdata, outlen, indata);
        break;
    case 0x1E180C1:
        UMD9660_ASSERT(indata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x389, 0x394, 0x393, 0x327, 0x328));
        UMD9660_ASSERT(inlen >= 0x1C, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x38A, 0x395, 0x394, 0x328, 0x329));
        ret = func_00003818(drive, indata);
        break;
    case 0x1E38012:
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x390, 0x39B, 0x39A, 0x32E, 0x32F));
        UMD9660_ASSERT(outlen >= sizeof(SceUmd9660DiscInfo), D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x391, 0x39C, 0x39B, 0x32F, 0x330));
        if (outdata == NULL || outlen < sizeof(SceUmd9660DiscInfo)) {
            return 0x80010016;
        }
        func_000022E8();
        *(SceUmd9660DiscInfo *)outdata = drive->disc;
        break;
    case 0x1E18021:
        UMD9660_ASSERT(indata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3A1, 0x3AC, 0x3AB, 0x33F, 0x340));
        UMD9660_ASSERT(inlen >= 4, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3A2, 0x3AD, 0x3AC, 0x340, 0x341));
        ret = func_000040C8(drive, indata, inlen);
        break;
    case 0x1E18024:
        UMD9660_ASSERT(indata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3AF, 0x3BA, 0x3B9, 0x34D, 0x34E));
        UMD9660_ASSERT(inlen >= 0x14, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3B0, 0x3BB, 0x3BA, 0x34E, 0x34F));
        ret = func_00002CE4(drive, indata, inlen);
        break;
    case 0x1F200A4:
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3B6, 0x3C1, 0x3C0, 0x354, 0x355));
        UMD9660_ASSERT(outlen == 4, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3B7, 0x3C2, 0x3C1, 0x355, 0x356));
        if (drive == NULL || drive->umdDrive == NULL) {
            return 0x80010016;
        }
        *(s32 *)outdata = func_0000434C(drive);
        break;
    case 0x1F200A0:
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3C4, 0x3CF, 0x3CE, 0x362, 0x363));
        UMD9660_ASSERT(outlen >= 4, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3C5, 0x3D0, 0x3CF, 0x363, 0x364));
        ret = func_00003DEC(drive, outdata, outlen);
        break;
    case 0x1F20001:
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3CB, 0x3D6, 0x3D5, 0x369, 0x36A));
        UMD9660_ASSERT(outlen >= 8, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3CC, 0x3D7, 0x3D6, 0x36A, 0x36B));
        if (outdata == NULL || outlen < 8) {
            return 0x80010016;
        }
        ret = func_00004250(outdata);
        break;
    case 0x1E280DA:
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3DB, 0x3E6, 0x3E5, 0x379, 0x37A));
        UMD9660_ASSERT(outlen >= 0x10, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3DC, 0x3E7, 0x3E6, 0x37A, 0x37B));
        if (outdata == NULL || outlen < 0x10) {
            return 0x80010016;
        }
        ret = func_000042A8(outdata);
        break;
    case 0x1F200A5:
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3E9, 0x3F4, 0x3F3, 0x387, 0x388));
        UMD9660_ASSERT(outlen == 4, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3EA, 0x3F5, 0x3F4, 0x388, 0x389));
        if (outdata == NULL || outlen < 4) {
            return 0x80010016;
        }
        *(s32 *)outdata = func_000037AC(drive);
        break;
    case 0x1F20014:
        UMD9660_ASSERT(outlen != 0, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3F7, 0x402, 0x401, 0x395, 0x396));
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x3F8, 0x403, 0x402, 0x396, 0x397));
        if (outdata == NULL || outlen == 0) {
            return 0x80010016;
        }
        ret = func_00003F3C(drive, outlen, outdata);
        break;
    case 0x1E180D0:
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x405, 0x410, 0x40F, 0x3A3, 0x3A4));
        UMD9660_ASSERT(outlen >= 4, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x406, 0x411, 0x410, 0x3A4, 0x3A5));
        ret = func_000038F0(drive, *(s32 *)outdata);
        break;
    case 0x1E280D1:
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x411, 0x41C, 0x41B, 0x3AF, 0x3B0));
        UMD9660_ASSERT(outlen >= 0x18, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x412, 0x41D, 0x41C, 0x3B0, 0x3B1));
        ret = func_0000397C(drive, outdata);
        break;
    case 0x1E180D3:
        UMD9660_ASSERT(indata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x41B, 0x426, 0x425, 0x3B9, 0x3BA));
        UMD9660_ASSERT(inlen >= 0x18, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x41C, 0x427, 0x426, 0x3BA, 0x3BB));
        ret = func_00003AF8(drive, indata);
        break;
    case 0x1E280D2:
        UMD9660_ASSERT(indata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x424, 0x42F, 0x42E, 0x3C2, 0x3C3));
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x425, 0x430, 0x42F, 0x3C3, 0x3C4));
        UMD9660_ASSERT(inlen >= 8, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x426, 0x431, 0x430, 0x3C4, 0x3C5));
        UMD9660_ASSERT(outlen >= 0x1C, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x427, 0x432, 0x431, 0x3C5, 0x3C6));
        ret = func_000036C4(drive, indata, outdata);
        break;
    case 0x1F000A3:
#if FW_VERSION == 100
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x42D, 0x438, 0x437, 0x3CB, 0x3CC));
        UMD9660_ASSERT(outlen >= 4, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x42E, 0x439, 0x438, 0x3CC, 0x3CD));
        ret = func_00003A74(drive, *(s32 *)outdata);
#else
        UMD9660_ASSERT(indata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x42D, 0x438, 0x437, 0x3CB, 0x3CC));
        UMD9660_ASSERT(inlen >= 4, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x42E, 0x439, 0x438, 0x3CC, 0x3CD));
        ret = func_00003A74(drive, *(s32 *)indata);
#endif
        break;
    case 0x1F000A6:
        val = 0x20;
        ret = func_000040C8(drive, &val, 4);
        break;
    case 0x1F00003:
        ret = func_000023E4(NULL, NULL, &iob->i_unit, 4);
        break;
    case 0x1E000D5:
        ret = func_00004064(drive);
        break;
    case 0x1E080D4:
        ret = func_00004024(drive);
        break;
    case 0x1E080D7:
        ret = func_000040E4(drive);
        break;
    case 0x1E080D8:
        ret = func_000040A4(drive);
        break;
    case 0x1E180D6:
        UMD9660_ASSERT(indata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x44D, 0x45A, 0x459, 0x3ED, 0x3EE));
        UMD9660_ASSERT(inlen >= 0x1C, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x44E, 0x45B, 0x45A, 0x3EE, 0x3EF));
        ret = func_00004358(drive, ((u32 *)indata)[3], ((u32 *)indata)[4], ((u32 *)indata)[5]);
        break;
    case 0x1E280D9:
        UMD9660_ASSERT(outdata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x464, 0x471, 0x470, 0x404, 0x405));
        UMD9660_ASSERT(outlen >= 0x10, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x465, 0x472, 0x471, 0x405, 0x406));
        ret = func_00003E54(drive, outdata);
        break;
    case 0x1E18030:
        UMD9660_ASSERT(indata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x46D, 0x47A, 0x479, 0x40D, 0x40E));
        UMD9660_ASSERT(inlen >= 0x10, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x46E, 0x47B, 0x47A, 0x40E, 0x40F));
        ret = func_00004124(drive, indata);
        break;
    case 0x1E38031:
        UMD9660_ASSERT(indata != NULL, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x476, 0x483, 0x482, 0x416, 0x417));
        UMD9660_ASSERT(inlen >= 4, D_00005A70, D_00005AFC, "umd9660_exec_devctl", UMD9660_V(0x477, 0x484, 0x483, 0x417, 0x418));
        ret = func_000044C0(drive, *(s32 *)indata);
        break;
    case 0x1E28013:
    default:
        ret = 0x8001B000;
        break;
    }
    return ret;
}

#undef func_000022E8
#undef func_000023E4
#undef func_00003818
#undef func_000038F0
#undef func_0000397C
#undef func_00003A74
#undef func_00003AF8
#undef func_00003C8C
#undef func_00003E54
#undef func_000042A8

s32 func_00001D6C(void) {
    return 0x8001B000;
}

s32 func_00001D78(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00000BC4);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00000DCC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_00000DF0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/umd9660", func_00000BEC);
#endif

#if FW_VERSION < 271
s32 func_000013F4(SceUmd9660DevctlArgs *args) {
    s32 ret = 0x80010016;
    if (args != NULL) {
        ret = func_00002974(sceUmd9660GetDrive(args->iob->i_unit), args->outdata, args->outlen, args->indata);
    }
    return ret;
}
#endif

#if FW_VERSION >= 282
s32 func_000013F4(SceUmd9660DevctlArgs *args) {
    s32 ret = 0x80010016;
    if (args != NULL) {
        ret = func_00003CC8(func_000019DC(args->iob->i_unit), args->outdata, args->outlen, args->indata);
    }
    return ret;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_000013F4);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/umd9660", func_000015B4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_0000105C);

INCLUDE_ASM("nonmatchings/umd9660", func_0000119C);
#endif

#if FW_VERSION < 150
s32 func_00001DD0(void) {
    return 0x8001B000;
}

s32 func_00001DDC(void) {
    return 0x8001B000;
}

s32 func_00001DE8(void) {
    return 0x8001B000;
}

s32 func_00001DF4(void) {
    return 0x8001B000;
}

s32 func_00001E00(void) {
    return 0x8001B000;
}

s32 func_00001E0C(void) {
    return 0x8001B000;
}

s32 func_00001E18(void) {
    return 0x8001B000;
}

s32 func_00001E24(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", umd9660_set_lseek);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00001440);
#endif

INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660Init);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660SetPFI);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_000016B4);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/umd9660", func_000017B8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_000022EC);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_000022E8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00001814);

M2C_UNK *func_000019D0(void) {
    return &D_00005C88;
}

INCLUDE_ASM("nonmatchings/umd9660", func_000019DC);

INCLUDE_ASM("nonmatchings/umd9660", func_00001A08);

INCLUDE_ASM("nonmatchings/umd9660", func_00001AB4);

INCLUDE_ASM("nonmatchings/umd9660", func_00001B3C);

INCLUDE_ASM("nonmatchings/umd9660", func_00001BCC);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/umd9660", func_00003CC8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00001C60);

INCLUDE_ASM("nonmatchings/umd9660", func_00001D08);

INCLUDE_ASM("nonmatchings/umd9660", func_00001DEC);

INCLUDE_ASM("nonmatchings/umd9660", func_00001E4C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/umd9660", func_00002C3C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/umd9660", func_0000264C);
#endif

#if FW_VERSION < 260 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/umd9660", D_00005B30);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005B34);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/umd9660", D_00005B4C);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/umd9660", D_00005B60);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/umd9660", D_00005560);

INCLUDE_RODATA("nonmatchings/umd9660", D_0000556C);

INCLUDE_RODATA("nonmatchings/umd9660", D_0000557C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/umd9660", func_000023E0);
#endif

#if FW_VERSION == 100
s32 func_000023E4(s32 *arg0, void *arg1, s32 *unit, s32 arg3) {
    SceUmd9660Mgr *mgr = func_000026E4();
    SceUmd9660Drive *drive;
    SceUmdDrive *umd;
    char name[0x20];
    u8 buf[0x20];
    s32 mode;
    s32 ret;
    if ((u32)*unit >= 2) {
        return 0x80010013;
    }
    mode = 2;
    if (arg0 != NULL) {
        mode = *arg0;
    }
    if (sceKernelDipswAll() & 0x10000) {
        ret = sceUmdManDVDDriveStart();
        if (ret != 0) {
            if (ret == 0x802110A0 || ret == 0x802110A1) {
                ret = 0x80210003;
            }
            return ret;
        }
        do {
            ret = sceUmdManSyncState();
            if (ret == 0) {
                break;
            }
            if (ret != 0x80211014) {
                return ret;
            }
        } while (1);
        drive = sceUmd9660GetDrive(0);
        umd = sceUmdManGetUmdDrive(0);
        if (umd == NULL) {
            return 0x80010013;
        }
        drive->umdDrive = umd;
        if (func_000037AC(drive) == 0x10) {
            memset(name, 0, sizeof(name));
            sprintf(name, "%s%1d:", D_00005B30, 0);
            ret = sceUmd9660ReadPvd4DVD(name, buf);
            if (ret != 0) {
                return ret;
            }
            ret = sceUmd9660ReadRootDir4DVD(name, buf);
            if (ret != 0) {
                return ret;
            }
        }
        umd->unk28 = 0;
    } else {
        if (mode != 2) {
            ret = sceUmdManUMDDrivePreStart();
            if (ret != 0) {
                if (ret == 0x802110A0 || ret == 0x802110A1) {
                    ret = 0x80210003;
                }
                return ret;
            }
            drive = sceUmd9660GetDrive(0);
            umd = sceUmdManGetUmdDrive(0);
            if (umd == NULL) {
                return 0x80010013;
            }
            drive->umdDrive = umd;
            return 0;
        }
        ret = sceUmdManUMDDriveStart();
        if (ret != 0) {
            return ret;
        }
        drive = sceUmd9660GetDrive(0);
        umd = sceUmdManGetUmdDrive(0);
        if (umd == NULL) {
            return 0x80010013;
        }
        drive->umdDrive = umd;
        if (func_000037AC(drive) == 0x10) {
            mgr->unkC = 1;
            do {
                ret = sceUmdManSyncState();
                if (ret == 0) {
                    break;
                }
                if (ret != 0x80211014) {
                    return ret;
                }
            } while (1);
        } else {
            mgr->unkC = 0;
        }
        sceAtaExecSetFeaturesCmd(umd->ataDrive, 3, 1, umd->ataDrive->driveId, 0);
        sceAtaExecSetFeaturesCmd(umd->ataDrive, 3, 8, umd->ataDrive->driveId, 0);
        umd->unk28 = 0;
    }
    umd->unk2C = 0;
    umd->unk30 = 0;
    umd->unk34 = 0;
    umd->unk38 = 0;
    umd->unk3C = 0;
    ret = func_0000438C(umd);
    if (ret != 0) {
        return ret;
    }
    drive->unk830[2]++;
    drive->umdDrive = umd;
    return 0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_000023E4);
#endif

#if FW_VERSION < 150
s32 func_00002694(void) {
    s32 ret;
    for (;;) {
        ret = sceUmdManSyncState();
        if (ret == 0) {
            break;
        }
        if (ret != 0x80211014) {
            break;
        }
        sceKernelDelayThread(1);
    }
    return 0;
}
#endif

#if FW_VERSION < 282
SceUmd9660Mgr *func_000026E4(void) {
    return &D_00005D90;
}
#endif

#if FW_VERSION < 201
SceUmd9660Drive *sceUmd9660GetDrive(s32 unit) {
    SceUmd9660Drive *drive = NULL;
    if ((u32)unit < 2) {
        drive = &D_00005DC0[unit];
    }
    return drive;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660GetDrive);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/umd9660", func_00002764);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002600);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00001930);

INCLUDE_ASM("nonmatchings/umd9660", func_000019B8);

INCLUDE_ASM("nonmatchings/umd9660", func_00001A48);
#endif

#if FW_VERSION < 103
s32 func_0000271C(s32 unit) {
    SceUmdDrive *umd;
    s32 ret = 0x80010013;
    if ((u32)unit < 2) {
        umd = D_00005DC0[unit].umdDrive;
        do {
            ret = sceUmdManCheckDeviceReady(umd);
        } while (ret == 0);
    }
    return ret;
}
#endif

#if FW_VERSION < 201
s32 func_00002778(void) {
    s32 list[8];
    s32 count;
    s32 i;
    if (func_0000281C(list, &count) == 0) {
        return 0;
    }
    sceKernelWaitSema(D_00005D90.semaId, 1, NULL);
    for (i = 0; i < count; i++) {
        D_00007000[list[i]].iob = NULL;
        D_00007000[list[i]].drive = NULL;
        D_00007000[list[i]].state = 1;
    }
    sceKernelSignalSema(D_00005D90.semaId, 1);
    return 0;
}

INCLUDE_ASM("nonmatchings/umd9660", func_0000281C);

SceUmd9660File *func_00002910(SceIoIob *iob) {
    s32 i;
    if (iob == NULL) {
        return NULL;
    }
    for (i = 0; i < D_00005D90.maxFiles; i++) {
        if (D_00007000[i].iob == NULL && D_00007000[i].state == 1) {
            D_00007000[i].state = 0x80;
            return &D_00007000[i];
        }
    }
    return NULL;
}

INCLUDE_ASM("nonmatchings/umd9660", func_00002974);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_000029FC);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002994);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002BA4);

INCLUDE_ASM("nonmatchings/umd9660", func_00001CC8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/umd9660", func_00002AB0);
#endif

#if FW_VERSION < 201
s32 func_00002BA4(void *a, void *b, void *c, s32 d, u32 e) {
    s32 ret = 0x80010016;
    s32 res;
    if (a == NULL || b == NULL) {
        goto end;
    }
    if (c == NULL || d >= 8) {
        goto end;
    }
    if (e < 3) {
        res = func_00002C08(a, b, c, d);
    }
    ret = res;
end:
    return ret;
}

INCLUDE_ASM("nonmatchings/umd9660", func_00002C08);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002E88);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/umd9660", D_00005B30);

INCLUDE_RODATA("nonmatchings/umd9660", D_000058C8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/umd9660", D_000058E0);

INCLUDE_RODATA("nonmatchings/umd9660", D_0000590C);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005918);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005928);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/umd9660", func_00002F24);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002FCC);

INCLUDE_ASM("nonmatchings/umd9660", func_00003120);
#else
INCLUDE_ASM("nonmatchings/umd9660", func_000026F4);

INCLUDE_ASM("nonmatchings/umd9660", func_00002880);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00002E90);
#endif

INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660InvalidateDeviceName);

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/umd9660", func_00003470);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00003274);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003328);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/umd9660", func_00003370);
#endif

#if FW_VERSION < 271
s32 sceUmd9660GetUnitNum(const char *name) {
    s32 i = 0;
    const char *p = name;
    char buf[0x10];
    char *c;
    if (name == NULL) {
        return 0x80010016;
    }
    for (i = 0; i < strlen(name); i++) {
        if (!(look_ctype_table(name[i]) & 8)) {
            break;
        }
        p++;
    }
    if (strcmp(p, D_00005B30) != 0) {
        return 0x80010013;
    }
    c = strchr(p, ':');
    if (c == NULL) {
        return 0x80010013;
    }
    memcpy(buf, p + 3, c - ((u8 *)p)[i + 3]);
    return strtol(buf, NULL, 16);
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660GetUnitNum);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_00002A78);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002BFC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00003504);
#endif

#if FW_VERSION < 201
s32 func_00002CE4(SceUmd9660Drive *drive, u32 *arg, SceSize size) {
    s32 ret;
    if (drive == NULL || arg == NULL || size < 0x14) {
        return 0x80010016;
    }
    ret = sceUmdMan_driver_F4AFF62D(drive->umdDrive, arg[0], arg[1], arg[2], arg[3], arg[4]);
    if (ret != 0) {
        return ret;
    }
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_00002CE4);
#endif

INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660Term);

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/umd9660", func_000037EC);

INCLUDE_ASM("nonmatchings/umd9660", func_000039E8);

INCLUDE_ASM("nonmatchings/umd9660", func_00003B9C);

INCLUDE_ASM("nonmatchings/umd9660", func_00003C88);

INCLUDE_ASM("nonmatchings/umd9660", func_00003DC0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_000036A4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_000038A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/umd9660", func_000038C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003A68);

INCLUDE_ASM("nonmatchings/umd9660", func_00003B5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002E74);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_00003C9C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003D78);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/umd9660", func_00003690);

s32 func_00003818(SceUmd9660Drive *drive, SceUmd9660PrefetchArg *arg) {
    SceUmdDrive *umd;
    SceUmdPrefetchCmd cmd;
    s32 ret = 0x80010016;
    if (drive == NULL || arg == NULL) {
        goto end;
    }
    ret = 0;
    if (!(sceKernelDipswAll() & 0x10000)) {
        umd = drive->umdDrive;
        cmd.lbn = arg->lbn;
        cmd.count = arg->count;
        cmd.flags = 0;
        cmd.unkB = 0;
        if (arg->unk0 != 0) {
            cmd.flags = 4;
        }
        if (arg->unk1 != 0) {
            cmd.flags |= 1;
        }
        for (;;) {
            if (sceUmdExecPrefetch10Cmd(umd, &cmd) == 0) {
                ret = 0;
                break;
            }
            sceUmdExecReqSenseCmd(umd, umd->sense, 0x12);
        }
    }
end:
    return ret;
}
#endif

#if FW_VERSION == 100
s32 func_000038F0(SceUmd9660Drive *drive, u32 len) {
    SceUmdDrive *umd;
    s32 ret = 0x80010016;
    if (drive == NULL || len == 0) {
        goto end;
    }
    umd = drive->umdDrive;
    if (sceKernelDipswAll() & 0x10000) {
        ret = 0;
    } else {
        while ((ret = sceUmdExecSetLockLengthCmd(umd, len)) != 0) {
            sceUmdExecReqSenseCmd(umd, umd->sense, 0x12);
        }
    }
end:
    return ret;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/umd9660", func_000038F0);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/umd9660", func_0000397C);
#endif

#if FW_VERSION == 100
s32 func_00003A74(SceUmd9660Drive *drive, u32 lbn) {
    SceUmdDrive *umd;
    s32 ret = 0x80010016;
    if (drive == NULL) {
        goto end;
    }
    umd = drive->umdDrive;
    for (;;) {
        if (sceUmdExecSeekCmd(umd, lbn, 0) == 0) {
            ret = 0;
            break;
        }
        sceUmdExecReqSenseCmd(umd, umd->sense, 0x12);
        sceAtaDisplayReqSense(umd->sense);
    }
end:
    return ret;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/umd9660", func_00003A74);
#endif

#if FW_VERSION < 103
s32 func_00003AF8(SceUmd9660Drive *drive, SceUmd9660ClearCacheArg *arg) {
    SceUmdDrive *umd;
    SceUmdClearCacheCmd cmd;
    s32 ret = 0x80010016;
    s32 res;
    if (drive == NULL || arg == NULL) {
        goto end;
    }
    ret = 0;
    if (!(sceKernelDipswAll() & 0x10000)) {
        umd = drive->umdDrive;
        ret = 0x80010016;
        if (arg->mode < 4) {
            cmd.mode = arg->mode & 3;
            cmd.unk0 = arg->unk10;
            cmd.unk2 = arg->unk14;
            for (;;) {
                res = sceUmdExecClearCacheInfoCmd(umd, &cmd);
                if (res == 0) {
                    break;
                }
                sceUmdExecReqSenseCmd(umd, umd->sense, 0x12);
                res = sceAta_driver_BE07B3A7(umd->sense);
                if (res == 0x80210001) {
                    sceAtaDoSoftResetBit();
                    break;
                }
            }
            ret = res;
        }
    }
end:
    return ret;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/umd9660", func_00003AF8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00002DE0);

INCLUDE_ASM("nonmatchings/umd9660", func_00002FF4);
#endif

#if FW_VERSION >= 350
s32 func_00003A58(void) {
    s32 var_v0;
    struct Unk_ret_sceUmdMan_driver_E192C10A *temp_s0;

    if (sceUmdManIsDvdDrive() != 0) {
        var_v0 = sceUmd9660_driver_F42C0AEE();
    } else {
        sceUmdManWaitSema();
        temp_s0 = sceUmdMan_driver_E192C10A();
        sceUmdManSignalSema();
        var_v0 = temp_s0->unk74;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_000031DC);

INCLUDE_ASM("nonmatchings/umd9660", func_000032D0);

INCLUDE_ASM("nonmatchings/umd9660", func_00003410);

INCLUDE_ASM("nonmatchings/umd9660", func_00003578);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_000036C4);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_000036D8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00004048);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00004250);

INCLUDE_ASM("nonmatchings/umd9660", func_00003F40);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_00003738);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_000037AC);

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_00003C8C);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/umd9660", func_00004288);

INCLUDE_ASM("nonmatchings/umd9660", func_00004450);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00004038);

INCLUDE_ASM("nonmatchings/umd9660", func_00004218);

s32 func_000043FC(void) {
    return 0;
}

M2C_UNK *func_00004404(void) {
    return &D_00007000;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003660);

s32 func_000036D0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = func_00003D24(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/umd9660", func_00002974);
#endif

#if FW_VERSION < 103
s32 func_00003E54(SceUmd9660Drive *drive, void *buf) {
    SceUmdDrive *umd;
    s32 ret;
    if (drive == NULL) {
        goto bad;
    }
    umd = drive->umdDrive;
    if (umd == NULL || buf == NULL) {
bad:
        ret = 0x80010016;
        goto end;
    }
    for (;;) {
        if (sceUmdExecMechaStatCmd(umd, 0x10, buf) == 0) {
            ret = 0;
            break;
        }
        sceUmdExecReqSenseCmd(umd, umd->sense, 0x12);
    }
end:
    return ret;
}

SceUmd9660File *func_00003ED4(void) {
    return D_00007000;
}
#endif

#if FW_VERSION < 201
SceUmd9660File *func_00003EE0(s32 count, s32 *err) {
    SceUmd9660File *files;
    sceKernelWaitSema(D_00005D90.semaId, 1, NULL);
    files = func_000042A0(count, err);
    if (files == NULL) {
        sceKernelSignalSema(D_00005D90.semaId, 1);
        return NULL;
    }
    sceKernelSignalSema(D_00005D90.semaId, 1);
    return files;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003830);

INCLUDE_ASM("nonmatchings/umd9660", func_00003A18);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00004544);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/umd9660", func_000041F4);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/umd9660", func_00003EF4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 func_00003BFC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
M2C_UNK *func_00003C04(void) {
    return &D_00005CA0;
}

INCLUDE_ASM("nonmatchings/umd9660", func_00003C10);

s32 func_00003C80(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = sceKernelCpuSuspendIntr();
    temp_s0 = func_00004300(arg0);
    sceKernelCpuResumeIntr(temp_s1);
    return temp_s0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/umd9660", func_00003CC8);
#endif

#if FW_VERSION < 201
s32 func_00003D28(SceIoIob *iob) {
    return umd9660_release_devfd(iob);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003D28);
#endif

#if FW_VERSION < 201
s32 func_00003F7C(const char *name) {
    s32 ret = 0x80010016;
    if (name != NULL) {
        ret = (strlen(name) < sizeof(D_00005DC0[0].name)) ? 0 : 0x80010024;
    }
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003F7C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660ReadPvd);

INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660ReadPathTable);
#else
s32 func_00003FC0(SceUmd9660Drive *drive, void *buf, SceUmdLbnParam *param) {
    if (drive == NULL || buf == NULL || param == NULL) {
        return 0x80010016;
    }
    return func_00002974(drive, buf, param->size, param);
}

s32 func_00004004(SceUmd9660Drive *drive, void *buf, SceSize size, SceUmdLbnParam *param) {
    if (drive == NULL || buf == NULL || param == NULL) {
        return 0x80010016;
    }
    return func_00002974(drive, buf, size, param);
}
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_00003DEC);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_000048B0);
#endif

#if FW_VERSION < 201
s32 func_000040C8(SceUmd9660Drive *drive, s32 *mode, SceSize size) {
    if (drive == NULL || mode == NULL || size < 4) {
        return 0x80010016;
    }
    return sceUmdManChangePowerMode(drive->umdDrive, *mode);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_000040C8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00004114);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_00003E6C);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_00003ED0);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_000049A8);
#endif

#if FW_VERSION < 201
s32 func_00003F3C(SceUmd9660Drive *drive, s32 arg1, void *buf) {
    if (drive == NULL || buf == NULL) {
        return 0x80010016;
    }
    return sceUmdManGetInquiry(drive->umdDrive, arg1, buf);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_00003F3C);
#endif

#if FW_VERSION < 150
s32 func_0000420C(void) {
    if (sceKernelDipswAll() & 0x10000) {
        return sceUmd9660_driver_F42C0AEE();
    }
#if FW_VERSION == 100
    return sceUmdMan_driver_E192C10A()->unk70;
#else
    return sceUmdMan_driver_E192C10A()->unk74;
#endif
}
#endif

#if FW_VERSION == 271
s32 func_0000420C(void) {
    s32 var_v0;

    if (sceUmdManIsDvdDrive() != 0) {
        var_v0 = sceUmd9660_driver_F42C0AEE();
    } else {
        var_v0 = sceUmdMan_driver_E192C10A()->unk74;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
s32 func_0000420C(void) {
    s32 var_v0;

    if (sceAtaIsDvdDrive() != 0) {
        var_v0 = sceUmd9660_driver_F42C0AEE();
    } else {
        var_v0 = sceUmdMan_driver_E192C10A()->unk74;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 150
s32 func_00004250(SceUmdDiscInfo *info) {
    if (sceKernelDipswAll() & 0x10000) {
        info->type = func_000053B4();
        return 0;
    }
    return sceUmdManGetDiscInfo(info);
}

s32 func_000042A8(SceUmdDiscInfo *info) {
    if (sceKernelDipswAll() & 0x10000) {
        info->type = func_000053B4();
        info->unk8 = 0xF;
        return 0;
    }
    return sceUmdManGetDiscInfo4VSH(info);
}
#endif

#if FW_VERSION < 282
s32 func_00004308(void) {
    return sceUmdRegisterGetUMDInfoCallBack(&func_00004250, &D_00005D80);
}

void func_00004330(void) {
    sceUmdUnRegisterGetUMDInfoCallBack();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_0000434C(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), s32 *, 0xC);
}
#endif

#if FW_VERSION < 201
s32 func_0000434C(SceUmd9660Drive *arg0) {
    return arg0->umdDrive->unkC;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_00004358(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        var_v0 = sceUmdManSetReadAheadSize(M2C_FIELD(arg0, s32 *, 0x64));
    }
    return var_v0;
}
#endif

#if FW_VERSION < 201
s32 func_00004358(SceUmd9660Drive *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        var_v0 = sceUmdManSetReadAheadSize(arg0->umdDrive);
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_00003F70(void) {
    s32 var_v0;

    if (sceUmdManIsDvdDrive() != 0) {
        var_v0 = sceUmd9660_driver_F42C0AEE();
    } else {
        var_v0 = sceUmdMan_driver_E192C10A()->unk74;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282
void func_00003FAC(void) {
    sceUmdRegisterGetUMDInfoCallBack(&func_000036D8, &D_00005C80);
}

void func_00003FD4(void) {
    sceUmdUnRegisterGetUMDInfoCallBack();
}

s32 func_00003FF0(struct Unk_func_00003FF0_0 *arg0) {
    return arg0->unk64->unkC;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00004A68);

s32 func_00004ADC(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x64);
        if (temp_s0 != 0) {
            sceUmdManWaitSema();
            temp_s0_2 = sceUmdManSetEnableReadAhead(temp_s0);
            sceUmdManSignalSema();
            var_v0 = temp_s0_2;
        }
    }
    return var_v0;
}

s32 func_00004B30(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x64);
        if (temp_s0 != 0) {
            sceUmdManWaitSema();
            temp_s0_2 = sceUmdManSetDisableReadAhead(temp_s0);
            sceUmdManSignalSema();
            var_v0 = temp_s0_2;
        }
    }
    return var_v0;
}

s32 func_00004B84(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x64);
        if (temp_s0 != 0) {
            sceUmdManWaitSema();
            temp_s0_2 = sceUmdManSetCachedRead(temp_s0);
            sceUmdManSignalSema();
            var_v0 = temp_s0_2;
        }
    }
    return var_v0;
}

s32 func_00004BD8(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x64);
        if (temp_s0 != 0) {
            sceUmdManWaitSema();
            temp_s0_2 = sceUmdManSetUnCachedRead(temp_s0);
            sceUmdManSignalSema();
            var_v0 = temp_s0_2;
        }
    }
    return var_v0;
}

s32 func_00004C2C(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x64);
        if (temp_s0 != 0) {
            sceUmdManWaitSema();
            temp_s1 = sceUmdManValidateUMD(temp_s0, arg1);
            sceUmdManSignalSema();
            var_v0 = temp_s1;
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 func_00003FFC(struct Unk_func_00003FFC_0 *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        var_v0 = sceUmdManSetReadAheadSize(arg0->unk64);
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_00004024);
#endif

#if FW_VERSION < 201
s32 func_00004024(SceUmd9660Drive *arg0) {
    s32 temp_a1;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a1 = (s32)arg0->umdDrive;
        if (temp_a1 != 0) {
            var_v1 = sceUmdManSetEnableReadAhead(temp_a1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_00004064);
#endif

#if FW_VERSION < 201
s32 func_00004064(SceUmd9660Drive *arg0) {
    s32 temp_a1;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a1 = (s32)arg0->umdDrive;
        if (temp_a1 != 0) {
            var_v1 = sceUmdManSetDisableReadAhead(temp_a1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_000040A4);
#endif

#if FW_VERSION < 201
s32 func_000040A4(SceUmd9660Drive *arg0) {
    s32 temp_a1;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a1 = (s32)arg0->umdDrive;
        if (temp_a1 != 0) {
            var_v1 = sceUmdManSetCachedRead(temp_a1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_000040E4);
#endif

#if FW_VERSION < 201
s32 func_000040E4(SceUmd9660Drive *arg0) {
    s32 temp_a1;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a1 = (s32)arg0->umdDrive;
        if (temp_a1 != 0) {
            var_v1 = sceUmdManSetUnCachedRead(temp_a1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/umd9660", func_00004124);
#endif

#if FW_VERSION < 201
s32 func_00004124(SceUmd9660Drive *arg0, s32 arg1) {
    s32 temp_a2;
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        temp_a2 = (s32)arg0->umdDrive;
        if (temp_a2 != 0) {
            var_v1 = sceUmdManValidateUMD(temp_a2, arg1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
s32 func_000044C0(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 == NULL) || (M2C_FIELD(arg0, s32 *, 0x64) == 0)) {
        var_v1 = 0x80010016;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 201
s32 func_000044C0(SceUmd9660Drive *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 == NULL) || (arg0->umdDrive == 0)) {
        var_v1 = 0x80010016;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/umd9660", func_00004A60);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00004954);
#endif

#if FW_VERSION >= 282
s32 func_00004164(struct Unk_func_00004164_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 == NULL) || (arg0->unk64 == 0)) {
        var_v1 = 0x80010016;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/umd9660", func_00004188);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/umd9660", module_reboot_before);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_0000411C);

s32 func_00004148(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        *arg0 = sceUmdMan_driver_85AEA6C5();
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00004238);

s32 func_00004264(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        *arg0 = sceUmdMan_driver_85AEA6C5();
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
s32 func_00004568(void) {
    return (sceUmdManGetIntrStateFlag() & 0xF) != 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/umd9660", func_0000458C);
#endif

#if FW_VERSION >= 350
void func_00004E14(void) {
    D_00006CC0 = 0;
}

void func_00004E20(void) {
    D_00006CC0 = 0x5678;
}
#endif

#if FW_VERSION >= 330
void func_000046C4(void) {
    if (sceKernelDipsw(0x13) != 0) {
        D_00007A50 = 0x1234;
    } else {
        D_00007A50 = 0;
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00004E68);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
void func_000046C4(void) {
    D_00007690 = sceKernelDipsw(0x13);
}
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_000042A0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003D24);
#endif

#if FW_VERSION < 201
s32 umd9660_release_devfd(SceIoIob *iob) {
    s32 ret = 0;
    s32 i;
    UMD9660_ASSERT(iob != NULL, "Assertion failed at %s:%s:%04d\n", "umdif.c", "umd9660_release_devfd", UMD9660_V(0x2E3, 0x2E3, 0x2F0, 0x30F, 0x30E));
    sceKernelWaitSema(D_00005D90.semaId, 1, NULL);
    if (iob == NULL) {
        sceKernelSignalSema(D_00005D90.semaId, 1);
        return 0x80010016;
    }
    for (i = 0; i < D_00005D90.maxFiles; i++) {
        ret = 0x80010002;
        if (D_00007000[i].iob == iob && D_00007000[i].state == 0x80) {
            D_00007000[i].state = 1;
            D_00007000[i].numSectors = 0;
            D_00007000[i].size = 0;
            D_00007000[i].drive = NULL;
            D_00007000[i].iob = NULL;
            sceKernelSignalSema(D_00005D90.semaId, 1);
            return 0;
        }
    }
    sceKernelSignalSema(D_00005D90.semaId, 1);
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00004300);
#endif

s32 func_0000438C(SceUmdDrive *umd) {
    u8 buf2[0x10];
    u8 buf[0x50];
    u32 type = umd->ataDrive->unk8;
    if (type == 0xB0) {
        return 0;
    }
    if (type != 0xC0) {
        return 0x80010016;
    }
    return func_00004EE8(umd, buf, buf2);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/umd9660", func_00004FFC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_000042C0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umd9660", func_00003E00);
#endif

#if FW_VERSION == 100
s32 func_000043DC(void) {
    s32 ret;
    ret = sceKernelCreateHeap(1, 0x4000, 1, "SceUmd9660Dvd");
    if (ret < 0) {
        return ret;
    }
    D_00008310 = ret;
    g_umd9660DvdSectorBuf = sceKernelAllocHeapMemory(D_00008310, 0x800);
    if (g_umd9660DvdSectorBuf == NULL) {
        g_umd9660DvdSectorBuf = NULL;
        return 0x8001000C;
    }
    g_umd9660DvdDirBuf = sceKernelAllocHeapMemory(D_00008310, 0x800);
    if (g_umd9660DvdDirBuf == NULL) {
        g_umd9660DvdSectorBuf = NULL;
        g_umd9660DvdDirBuf = NULL;
        sceKernelFreeHeapMemory(D_00008310, g_umd9660DvdDirBuf);
        return 0x8001000C;
    }
    return 0;
}
#endif

#if (FW_VERSION >= 102 && FW_VERSION < 201) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_000043DC);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umd9660", D_00005BF0);
#endif

#if FW_VERSION < 201
s32 sceUmd9660ReadPvd4DVD(const char *name, SceUmdLbnParam *param) {
    s32 ret;
    UMD9660_ASSERT(param != NULL, D_00005C14, D_00005BF0, "sceUmd9660ReadPvd4DVD", UMD9660_V(0x78, 0x8C, 0x8C, 0x98, 0x9D));
    UMD9660_ASSERT(name != NULL, D_00005C14, D_00005BF0, "sceUmd9660ReadPvd4DVD", UMD9660_V(0x79, 0x8D, 0x8D, 0x99, 0x9E));
    if (name == NULL || param == NULL) {
        return 0x80010016;
    }
    param->lbn = 0x10;
    param->unk0 = 0;
    param->cmd = 0;
    param->lbnSize = 1;
    param->size = 0x800;
    param->byteSizeFirst = 0;
    param->byteSizeMiddle = 0x800;
    param->byteSizeLast = 0;
    ret = sceIoDevctl(name, 0x1E380C0, param, sizeof(SceUmdLbnParam), g_umd9660DvdSectorBuf, 0x800);
    if (ret < 0) {
        return ret;
    }
    if (strncmp((char *)g_umd9660DvdSectorBuf + 1, D_00005C34, 5) == 0) {
        return 0;
    }
    param->lbn = 0x100;
    param->lbnSize = 1;
    param->unk0 = 0;
    param->cmd = 0;
    param->size = 0x800;
    param->byteSizeMiddle = 0x800;
    param->byteSizeFirst = 0;
    param->byteSizeLast = 0;
    ret = sceIoDevctl(name, 0x1E380C0, param, sizeof(SceUmdLbnParam), g_umd9660DvdSectorBuf, 0x800);
    if (ret < 0) {
        return ret;
    }
    strncmp((char *)g_umd9660DvdSectorBuf + 1, D_00005C34, 5);
    return 0;
}
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umd9660", D_00005C14);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005C34);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/umd9660", D_00005630);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00003F38);

INCLUDE_ASM("nonmatchings/umd9660", func_000040DC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_0000470C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/umd9660", func_000043EC);

INCLUDE_RODATA("nonmatchings/umd9660", D_00005A38);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/umd9660", func_00004240);
#endif

#if FW_VERSION < 152
s32 sceUmd9660ReadRootDir4DVD(const char *name, SceUmdLbnParam *param) {
    s32 ret;
    UMD9660_ASSERT(param != NULL, D_00005C14, D_00005BF0, "sceUmd9660ReadRootDir4DVD", UMD9660_V(0xDC, 0xF0, 0xF0, 0xFC, 0x101));
    UMD9660_ASSERT(name != NULL, D_00005C14, D_00005BF0, "sceUmd9660ReadRootDir4DVD", UMD9660_V(0xDD, 0xF1, 0xF1, 0xFD, 0x102));
    if (name == NULL || param == NULL) {
        return 0x80010016;
    }
    param->unk0 = 0;
    param->cmd = 0;
    param->lbn = g_umd9660DvdSectorBuf[0x9E] | (g_umd9660DvdSectorBuf[0x9F] << 8) | (g_umd9660DvdSectorBuf[0xA0] << 16) | (g_umd9660DvdSectorBuf[0xA1] << 24);
    param->lbnSize = 1;
    param->size = 0x800;
    param->byteSizeMiddle = 0x800;
    param->byteSizeFirst = 0;
    param->byteSizeLast = 0;
    ret = sceIoDevctl(name, 0x1E380C0, param, sizeof(SceUmdLbnParam), g_umd9660DvdDirBuf, 0x800);
    if (ret < 0) {
        return ret;
    }
    ret = func_00004C88();
    if (ret != 0) {
        return ret;
    }
    func_00004DDC();
    ret = dvd_get_controlimg_lbn(name);
    if (ret != 0) {
        return ret;
    }
    return 0;
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/umd9660", sceUmd9660ReadRootDir4DVD);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", dvd_get_controlimg_lbn);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_000044C0);

INCLUDE_ASM("nonmatchings/umd9660", func_00004664);

INCLUDE_ASM("nonmatchings/umd9660", func_00004824);
#endif

#if FW_VERSION < 201
s32 func_00004C88(void) {
    char name[0x20];
    u32 off = 0;
    u8 *rec;
    u32 len;
    for (;;) {
        rec = g_umd9660DvdDirBuf + off;
        if (rec[0] == 0) {
            return 0x80010002;
        }
        memcpy(name, rec + 0x21, rec[0x20]);
        len = rec[0x20];
        name[len] = '\0';
        if (strncmp(name, "USER_L0.IMG;1", len) == 0 || strncmp(name, "USER_L0.IMG", len) == 0) {
            D_000083C0 = rec[2] | (rec[3] << 8) | (rec[4] << 16) | (rec[5] << 24);
            return 0;
        }
        off += rec[0];
    }
}
#else
INCLUDE_ASM("nonmatchings/umd9660", func_00004C88);
#endif

#if FW_VERSION < 201
s32 func_00004DDC(void) {
    char name[0x20];
    u32 off = 0;
    u8 *rec;
    u32 len;
    for (;;) {
        rec = g_umd9660DvdDirBuf + off;
        if (rec[0] == 0) {
            return 0x80010002;
        }
        memcpy(name, rec + 0x21, rec[0x20]);
        len = rec[0x20];
        name[len] = '\0';
        if (strncmp(name, "USER_L1.IMG;1", len) == 0 || strncmp(name, "USER_L1.IMG", len) == 0) {
            D_000083D0 = rec[2] | (rec[3] << 8) | (rec[4] << 16) | (rec[5] << 24);
            return 0;
        }
        off += rec[0];
    }
}
#else
INCLUDE_ASM("nonmatchings/umd9660", func_00004DDC);
#endif

INCLUDE_ASM("nonmatchings/umd9660", func_00004EE8);

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_000052B0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_00004ECC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umd9660", func_0000490C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_000049F8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/umd9660", func_00004FBC);
#endif

#if FW_VERSION == 100 || (FW_VERSION >= 150 && FW_VERSION < 201)
s32 sceUmd9660_driver_DB1AC979(SceUmd9660Drive *drive) {
    SceUmdDrive *umd = drive->umdDrive;
    SceUmdCdSpeedCmd cmd;
    SceUID alarm;
    s32 ret;
    if (drive == NULL) {
        return 0x80010016;
    }
    cmd.unk1 = 1;
    cmd.unk0 = 0;
    cmd.readSpeed = 0x32C8;
    cmd.writeSpeed = 0x32C8;
    alarm = sceUmdManSetAlarm(60000000);
    for (;;) {
        ret = sceUmdExecSetCDSpeedCmd(umd, &cmd);
        if (ret == 0) {
            break;
        }
        sceUmdExecReqSenseCmd(umd, umd->sense, 0x12);
        if (sceUmdManGetCommandTimerFlag() == 1) {
            ret = 0x8001006E;
            break;
        }
    }
    sceUmdManCancelAlarm(alarm);
    return ret;
}
#endif

#if FW_VERSION == 100
s32 func_00004FE4(void) {
    s32 ret;
    if (g_umd9660DvdSectorBuf != NULL) {
        sceKernelFreeHeapMemory(D_00008310, g_umd9660DvdSectorBuf);
        g_umd9660DvdSectorBuf = NULL;
    }
    if (g_umd9660DvdDirBuf != NULL) {
        ret = sceKernelFreeHeapMemory(D_00008310, g_umd9660DvdDirBuf);
        if (ret < 0) {
            return ret;
        }
        g_umd9660DvdDirBuf = NULL;
    }
    return sceKernelDeleteHeap(D_00008310);
}
#endif

#if (FW_VERSION >= 102 && FW_VERSION < 201) || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_00004FE4);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/umd9660", func_00005908);

void func_00005B20(s32 arg0) {
    D_00008CA0 = arg0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
void func_00005B2C(s32 arg0) {
    D_00008CB0 = arg0;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_000053B4);
#endif

#if FW_VERSION == 100
u8 func_000053B4(void) {
    return D_000083A8;
}
#endif

#if FW_VERSION < 282
s32 sceUmd9660_driver_F42C0AEE(void) {
    return D_000083B0;
}

u8 func_000053CC(void) {
    return D_000083A4;
}

u8 func_000053D8(void) {
    return D_000083A6;
}

u8 func_000053E4(void) {
    return D_000083A5;
}

u8 func_000053F0(void) {
    return D_000083A7;
}

s32 sceUmd9660_driver_2C6C3F4C(void) {
    return D_000083AC;
}

s32 sceUmd9660_driver_C7CD9CE8(void) {
    return D_000083D0;
}

s32 sceUmd9660_driver_44EF600C(void) {
    return D_000083C0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/umd9660", func_00005420);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/umd9660", func_00005498);
#endif

#if FW_VERSION == 271
s32 sceUmd9660_driver_CAAFFE8D(void) {
    return D_00008CB0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
s32 sceUmd9660_driver_CAAFFE8D(void) {
    return D_00008CA0;
}
#endif

#if FW_VERSION == 271
s32 sceUmd9660_driver_B23266CA(void) {
    return D_000070D8;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 271
s32 sceUmd9660_driver_3C150E0D(void) {
    return D_00008CB0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/umd9660", func_00005988);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/umd9660", func_0000506C);

INCLUDE_ASM("nonmatchings/umd9660", func_000050D4);

void func_00005334(s32 arg0) {
    D_000070D4 = arg0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/umd9660", func_00005674);
#endif

#if FW_VERSION >= 282
s32 func_00005340(void) {
    return D_000070B8;
}

s32 sceUmd9660_driver_F42C0AEE(void) {
    return D_000070C0;
}

u8 func_00005358(void) {
    return D_000070B0;
}

u8 func_00005364(void) {
    return D_000070B2;
}

u8 func_00005370(void) {
    return D_000070B1;
}

u8 func_0000537C(void) {
    return D_000070B3;
}

s32 sceUmd9660_driver_2C6C3F4C(void) {
    return D_000070BC;
}

s32 sceUmd9660_driver_C7CD9CE8(void) {
    return D_000070D0;
}

s32 sceUmd9660_driver_44EF600C(void) {
    return D_000070CC;
}

s32 sceUmd9660_driver_CAAFFE8D(void) {
    return D_000070D4;
}

s32 func_000053B8(void) {
    return D_000070D8;
}

INCLUDE_ASM("nonmatchings/umd9660", func_000053C4);
#endif
