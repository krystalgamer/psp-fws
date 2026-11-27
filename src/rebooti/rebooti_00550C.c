/* cflags[100]: -O2 -frename-registers */
#include "common.h"
#include "rebooti_decls.h"

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000550C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013628);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013634);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00005AF8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00005EE0);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013864);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_0001386C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013878);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013884);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_0001388C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00005F78);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006078);

s32 func_00006114(void) {
    return 0;
}

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000138B4);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000138BC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000611C);

s32 func_000061C4(void) {
    return 0;
}

s32 func_000061CC(void) {
    s32 ret;

    if (!(D_00015494 & 2)) {
        return -1;
    }
    ret = func_00007D00(D_00016598, 0);
    if (ret != 0) {
        return ret;
    }
    D_00015494 &= ~2;
    return 0;
}

s32 func_00006230(void) {
    s32 ret;

    if (!(D_00015494 & 4)) {
        return -1;
    }
    ret = func_0000724C(D_000165C0);
    if (ret != 0) {
        return ret;
    }
    D_00015494 &= ~4;
    return 0;
}

s32 func_00006290(s32 a0, s32 a1) {
    if (!(D_00015494 & 4)) {
        return -1;
    }
    return func_000069D4(D_000165D0, a0, a1, 0);
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000062D0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006324);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006460);

s32 func_00006968(const u8 *a, const char *b) {
    s32 i;

    for (i = 0; i < 8; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    for (i = 0; i < 3; i++) {
        if (a[i + 8] != b[i + 8]) {
            return 0;
        }
    }
    return 1;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000069D4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006C28);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006D10);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006E34);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000724C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_0001390C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013938);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000734C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00007428);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00007D00);

s32 func_00007E4C(void) {
    return 0;
}

s32 func_00007E54(void) {
    return 0;
}

void func_00007E5C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0000CE50();
    func_00006E34(arg0, arg1, arg2, arg3);
}

s32 func_00007EB8(s32 arg0) {
    s32 temp_s0;

    func_0000CE50();
    temp_s0 = func_0000724C(arg0);
    func_0000CE50();
    return temp_s0;
}

void func_00007EF0(struct Unk_func_00008F0C_0 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0000CE50();
    func_000069D4(arg0->unk10, arg1, arg2, 0);
}

s32 func_00007F40(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    func_0000CE50();
    temp_s1 = func_00009284(arg0, arg1, arg2);
    func_0000CE50();
    return temp_s1;
}

s64 func_00007F98(void *iob, SceOff off, s32 whence) {
    if ((off >> 31) > 0) {
        return 0x80010016;
    }
    return func_0000734C(iob, (s32)off, whence);
}

s32 func_00007FF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 ret;

    func_0000CE50();
    ret = func_00009400(a0, a1, a2, a3, a4, a5);
    func_0000CE50();
    return ret;
}

s32 func_00008078(s32 arg0, s32 arg1) {
    s32 ret;

    func_0000CE50();
    ret = func_00009490(arg0, arg1);
    func_0000CE50();
    return ret;
}

s32 func_000080C0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    func_0000CE50();
    temp_s1 = func_00009630(arg0, arg1, arg2);
    func_0000CE50();
    return temp_s1;
}

s32 func_00008118(s32 arg0, s32 arg1) {
    s32 temp_s1;

    func_0000CE50();
    temp_s1 = func_00009A08(arg0, arg1);
    func_0000CE50();
    return temp_s1;
}

s32 func_00008160(s32 arg0, s32 arg1) {
    s32 temp_s1;

    func_0000CE50();
    temp_s1 = func_00009CCC(arg0, arg1);
    func_0000CE50();
    return temp_s1;
}

s32 func_000081A8(struct Unk_func_000091C4_0 *arg0) {
    void **temp_a2;
    void **temp_v0;
    struct Unk_func_000091C4_temp_a0 *temp_a0;
    struct Unk_func_000091C4_temp_a1 *temp_a1;
    struct Unk_func_000091C4_temp_a3 *temp_a3;

    func_0000CE50();
    temp_a0 = arg0->unk10;
    if (temp_a0 != NULL) {
        temp_a3 = temp_a0->unk8;
        temp_a1 = temp_a0->unk0;
        temp_a2 = temp_a0->unk4;
        temp_a3->unk8 = (s32) (temp_a3->unk8 - 1);
        if (temp_a1 != NULL) {
            temp_a1->unk4 = temp_a2;
        } else {
            D_00015478 = temp_a2;
        }
        temp_v0 = temp_a0->unk4;
        if (temp_v0 != NULL) {
            *temp_v0 = temp_a1;
        } else {
            D_00015474 = temp_a1;
        }
        temp_a0->unk0 = (void *) D_0001547C;
        D_0001547C = temp_a0;
    }
    func_0000CE50();
    return 0;
}

void func_00008238(s32 arg0, M2C_UNK arg1) {
    func_0000CE50();
    func_00009E0C(arg0, arg1);
}

void func_00008274(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0000CE50();
    func_00009F84(arg0, arg1, arg2);
}

s32 func_000082C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 ret;

    func_0000CE50();
    ret = func_0000A0C0(a0, a1, a2, a3);
    func_0000CE50();
    return ret;
}

s32 func_00008328(s32 arg0, s32 arg1, s32 arg2) {
    func_00001A54("%s: iob=%p oldname=%s newname=%s\n", "UFatRename", arg0, arg1, arg2);
    return 0x8001B000;
}

s32 func_00008368(s32 arg0, s32 arg1) {
    func_00001A54((s32) "%s: iob=%p name=%s\n", (s32) "UFatChdir", arg0, arg1);
    return 0x8001B000;
}

s32 func_000083A0(void) {
    s32 temp_s0;

    temp_s0 = func_00007428();
    func_0000CE50();
    return temp_s0;
}

s32 func_000083CC(void) {
    s32 temp_s0;

    temp_s0 = func_00007D00();
    func_0000CE50();
    return temp_s0;
}

s32 func_000083F8(void) {
    return 0x8001B000;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00008404);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000084F8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000870C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000088A0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000089A4);

s32 func_00008A98(UFatUnit *unit, u32 cluster) {
    u32 next;
    s32 ret;

    if (cluster != 0) {
        while ((cluster | ~unit->fatMask) < 0xFFFFFFF6) {
            next = func_00006324(unit, cluster);
            ret = func_0000AEF0(unit, cluster);
            if (ret < 0) {
                return ret;
            }
            cluster = next;
        }
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00008B28);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00008BE0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00008C68);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00008FB0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000917C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009284);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009400);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009490);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009630);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009A08);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009CCC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009E0C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009F84);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000A0C0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000A6B0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000A7A8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000A894);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000ABEC);

s32 func_0000ADC8(UFatUnit *unit, s32 sector) {
    s32 ret;

    if (sector != unit->cachedSector) {
        ret = func_000088A0(unit);
        if (ret < 0) {
            return ret;
        }
        unit->cachedSector = -1;
        ret = func_00008404(unit, sector << unit->sectorShift, unit->sectorBuf, 0x200);
        if (ret < 0) {
            return ret;
        }
        unit->cachedSector = sector;
    }
    return 0;
}

s32 func_0000AE38(UFatUnit *unit) {
    s32 c, ret;

    for (c = unit->nextFree; c < unit->nClusters; c++) {
        ret = func_00006324(unit, c);
        if (ret < 0) {
            return ret;
        }
        if (ret == 0) {
            ret = func_0000BB44(unit, c, -8);
            if (ret < 0) {
                return ret;
            }
            unit->nextFree = c + 1;
            if (unit->freeCount != -1) {
                unit->freeCount--;
            }
            return c;
        }
    }
    unit->nextFree = 2;
    return 0x8001001C;
}

s32 func_0000AEF0(UFatUnit *unit, s32 cluster) {
    s32 ret;

    if (cluster < 2 || cluster >= unit->nClusters) {
        return 0x80010005;
    }
    ret = func_0000BB44(unit, cluster, 0);
    if (ret < 0) {
        return ret;
    }
    if (cluster < unit->nextFree) {
        unit->nextFree = cluster;
    }
    if (unit->freeCount != -1) {
        unit->freeCount++;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000AF7C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000B08C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000B4C0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000B634);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000B85C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000BA18);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000BB44);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000BD20);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000BE00);

s32 func_0000C18C(UFatUnit *unit) {
    s32 i, n;

    if (unit->freeCount != -1) {
        return unit->freeCount;
    }
    n = 0;
    for (i = 2; i < unit->nClusters; i++) {
        if (func_00006324(unit, i) == 0) {
            n++;
        }
    }
    unit->freeCount = n;
    return n;
}

s32 func_0000C21C(UFatUnit *unit) {
    u8 ent[32];
    s32 i, n = 0, off = 0;

    for (i = 0; i < unit->rootEntries; i++, off += 32) {
        if (func_00008404(unit, (unit->rootDirStart << unit->sectorShift) + off, ent, 32) >= 0) {
            if (ent[0] == 0 || ent[0] == 0xE5) {
                n++;
            }
        }
    }
    return n;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C2C0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C3C8);

s32 func_0000C4D4(struct Unk_func_0000D694_0 *arg0) {
    return (arg0->unk2 << 8) | arg0->unk3;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C4E8);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013E68);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013E88);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C594);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C66C);

s32 func_0000C7A4(LFlashDev *dev) {
    LFlashSegment *seg = dev->segments;
    u32 i;
    s32 ret;

    for (i = 0; i < dev->nSegments; i++, seg++) {
        ret = func_0000DC64(dev, seg);
        if (ret < 0) {
            return ret;
        }
    }
    return 0;
}

void func_0000C820(void *arg0, s32 arg1, u8 *arg2) {
    s32 temp_v1;
    u8 temp_a5;
    u8 temp_a6;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x18C);
    func_00001DF8(M2C_FIELD(arg0, u8 **, 0x1B8) + (arg1 * temp_v1), arg2, temp_v1);
    if (arg1 == 0) {
        temp_a5 = *arg2;
        temp_a6 = *M2C_FIELD(arg0, u8 **, 0x1B8);
        if (temp_a6 != temp_a5) {
            func_00001A54("lflash.c:%s:buffer[0] = 0x%02x, data=0x%02x\n", "LFlashBlockBufferWritePage", temp_a6, temp_a5);
        }
    }
}

s32 func_0000C8B0(LFlashDev *dev) {
    dev->unk1D0 = -1;
    dev->unk1D2 = -1;
    dev->segments = (LFlashSegment *)D_0002EB1C;
    dev->blockBuf = D_0002EBFC;
    dev->unk1BC = D_0001BB90;
    dev->unk1C0 = D_000177B8;
    dev->unk1C4 = D_00027D10;
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C900);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013F98);

s32 func_0000C9F8(void *arg) {
    LFlashDev *dev = &D_0001B9B8;
    s32 ret;

    ret = func_0000DED8(dev);
    if (ret < 0) {
        func_00001A54("lflash.c:%s:Initialize failed\n", "df_init");
        return ret;
    }
    if (dev->nSegments < 4) {
        func_00001A54("lflash.c:%s:Cannot work\n", "df_init");
        return 0x80270001;
    }
    return 0;
}

s32 func_0000CA8C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    if (&D_0002BD1C != NULL) {
        var_v0 = func_0000E544(arg0, arg1, arg2, arg3, (s32) &D_0002BD1C);
    } else {
        func_00001A54((s32) "lflash.c:%s:Mallocfailed: 0x%08x\n", (s32) "df_open", 0, arg3);
        var_v0 = 0x8001000C;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000CADC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000CBD8);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_0001406C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014094);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000140A4);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000140C4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000CD24);

s32 func_0000CE50(void) {
    s32 var_v1;

    var_v1 = 0;
    if ((&D_0001B9B8 != NULL) && (D_0001B9B8.unk1B4 != 0)) {
        var_v1 = func_0000D728(&D_0001B9B8);
    }
    return var_v1;
}

s32 func_0000CE94(void) {
    func_0000EA00();
    return 0;
}

s32 func_0000CEB4(void) {
    M2C_UNK *temp_v0;

    temp_v0 = "del_lflash_driver";
    func_00001A54("lflash.c:%s:()\n", temp_v0, temp_v0);
    return 0;
}

void func_0000CEE4(void) {
    func_0000D0EC((s32) &D_0001B9B8);
}

void func_0000CF04(void) {
    func_0000E190((s32) &D_0001B9B8);
}

s32 func_0000CF24(void) {
    u8 buf[16];

    if (!(D_000165F0 & 1)) {
        func_0000EA00();
        func_0000C9F8(buf);
        D_000165F0 |= 1;
    }
    return 0;
}

s32 func_0000CF74(void) {
    s32 ret;

    if (!(D_000165F0 & 2)) {
        return 0x80010016;
    }
    ret = func_0000CADC(D_000165F8);
    if (ret != 0) {
        return ret;
    }
    D_000165F0 &= ~2;
    return 0;
}

s32 func_0000CFD8(void *arg) {
    if (!(D_000165F0 & 2)) {
        return 0x80010016;
    }
    return func_0000E95C(D_000165F8, 0x3D001, 0, 0, arg, 0x44);
}

s64 func_0000D02C(SceOff off, s32 whence) {
    if (!(D_000165F0 & 2)) {
        return 0x80010016LL;
    }
    return func_0000E880(D_000165F8, off, whence);
}

s32 func_0000D090(s32 a0, s32 a1) {
    if (!(D_000165F0 & 2)) {
        return 0x80010016;
    }
    return func_0000E748(D_000165F8, a0, a1);
}

s32 func_0000D0E0(void) {
    return 0x8001B000;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000D0EC);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014178);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000141BC);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000141C0);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000141F0);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_0001422C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_0001425C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014284);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014288);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000142A0);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000142B4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000D46C);

s32 func_0000D5B4(void) {
    s32 i = 0;
    s32 status;

    for (;;) {
        func_000107AC(0);
        status = func_00010778();
        i++;
        func_000107E4();
        if ((s8)status < 0) {
            return 0;
        }
        if (i >= 6) {
            return 0x80270001;
        }
        func_000107AC(1);
        func_00010744(0);
        func_000107E4();
    }
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000D634);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000D728);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000D97C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014570);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014590);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000145A4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000DC64);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000DED8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000E0CC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000E190);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000E544);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000E748);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000E880);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000E95C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000EA00);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014874);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000EBC8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000EC78);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000148FC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000EDA8);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014A2C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000EF84);

void func_0000F0FC(s32 arg0) {
    s32 var_a1;
    s8 *temp_v0;

    var_a1 = 0;
    do {
        temp_v0 = arg0 + var_a1;
        var_a1 += 1;
        *temp_v0 = -1;
    } while (var_a1 < 0xC);
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000F120);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000F23C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000F324);

s32 func_0000F734(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000F73C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000F7E4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000F890);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014C70);

s32 func_0000F9AC(void *iob, char *name) {
    func_00001A54(D_00014C70, "df_remove", name);
    return 0x8001B000;
}

s32 func_0000F9E0(void *iob, char *name) {
    func_00001A54(D_00014C70, "df_mkdir", name);
    return 0x8001B000;
}

s32 func_0000FA14(void *iob, char *name) {
    func_00001A54(D_00014C70, "df_rmdir", name);
    return 0x8001B000;
}

s32 func_0000FA48(void *iob, char *name) {
    func_00001A54(D_00014C70, "df_dopen", name);
    return 0x8001B000;
}

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014CB8);

s32 func_0000FA7C(void *arg0) {
    func_00001A54(D_00014CB8, "df_dclose", **M2C_FIELD(arg0, s32 ***, 8));
    return 0x8001B000;
}

s32 func_0000FAB8(void *arg0) {
    func_00001A54(D_00014CB8, "df_dread", **M2C_FIELD(arg0, s32 ***, 8));
    return 0x8001B000;
}

s32 func_0000FAF4(void *iob, char *name, void *stat) {
    func_00001A54("lflash.c:%s:\n", "df_getstat");
    return (stat == NULL) ? 0x80010016 : 0x8001B000;
}

s32 func_0000FB44(void *iob, char *name) {
    func_00001A54("lflash.c:%s:filename:%s\n", "df_chstat", name);
    return 0x8001B000;
}

s32 func_0000FB78(void *iob, const char *oldname) {
    func_00001A54("lflash.c:%s:oldfile: %s\n", "df_rename", oldname);
    return 0x8001B000;
}

s32 func_0000FBAC(void *iob, char *name) {
    func_00001A54("lflash.c:%s:, path name: %s\n", "df_chdir", name);
    return 0x8001B000;
}

s32 func_0000FBE0(void) {
    return 0x8001B000;
}

s32 func_0000FBEC(void) {
    return 0x8001B000;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FBF8);

s32 func_0000FC94(void) {
    return 0x8001B000;
}

s32 func_0000FCA0(void) {
    s32 i = 0;
    s32 status;

    for (;;) {
        func_000107AC(0);
        status = func_00010778();
        i++;
        func_000107E4();
        if ((s8)status >= 0) {
            return 0;
        }
        if (i >= 6) {
            return 0x80270001;
        }
        func_000107AC(1);
        func_00010744(1);
        func_000107E4();
    }
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FD20);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FEBC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FFDC);

s32 func_0001006C(u8 *buf, s32 len) {
    s32 i;
    u8 v;

    *(volatile u32 *)0xBD101008 = 0x90;
    *(volatile u32 *)0xBD10100C = 0;
    for (i = 0; i < len; i++) {
        v = *(volatile u32 *)0xBD101300;
        if (buf != NULL) {
            buf[i] = v;
        }
    }
    *(volatile u32 *)0xBD101014 = 1;
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000100C4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000102AC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00010488);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0001056C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0001064C);

s32 func_000106F0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000106F8);

s32 func_00010744(s32 protect) {
    u32 v = *(volatile u32 *)0xBD101004;
    s32 old = __builtin_allegrex_ext(v ^ 0x80, 7, 1);
    if (protect) {
        v &= ~0x80;
    } else {
        v |= 0x80;
    }
    *(volatile u32 *)0xBD101004 = v;
    return old;
}

s32 func_00010778(void) {
    u32 v;
    *(volatile u32 *)0xBD101008 = 0x70;
    v = *(volatile u32 *)0xBD101300;
    *(volatile u32 *)0xBD101014 = 1;
    return v & 0xFF;
}

s32 func_000107AC(s32 a0) {
    if (a0) {
        *(volatile u32 *)0xBD101004 |= 0x80;
    } else {
        *(volatile u32 *)0xBD101004 &= ~0x80;
    }
    return 0;
}

s32 func_000107E4(void) {
    return 0;
}

s32 func_000107EC(u32 ppn, void *user, void *spare, u32 len) {
    s32 ret = func_000100C4(ppn, user, spare, len, 0);
    if (spare == NULL && ret == 0x80230009) {
        ret = 0;
    }
    return ret;
}

s32 func_00010838(u32 ppn, void *user, void *spare, u32 len) {
    s32 var_a4;

    var_a4 = (user == NULL) * 0x10;
    if (spare == NULL) {
        var_a4 |= 0x20;
    }
    return func_000102AC(ppn, user, spare, len, var_a4);
}

s32 func_00010868(u32 ppn, void *user, void *spare, u32 len) {
    return func_000100C4(ppn, user, spare, len, 0x20);
}

s32 func_00010884(u32 ppn, void *user, void *spare, u32 len) {
    return func_000102AC(ppn, user, spare, len, (user == NULL) ? 0x30 : 0x20);
}

s32 func_000108B0(u32 ppn, void *user, void *spare, u32 len) {
    return func_000100C4(ppn, user, spare, len, 0x31);
}

s32 func_000108CC(u32 ppn, void *user, void *spare, u32 len) {
    return func_000102AC(ppn, user, spare, len, 0x31);
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000108E8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00010AD4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00010E20);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00010F6C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00011034);

s32 func_000110E8(u32 ppn, void *user, void *spare) {
    s32 i;
    s32 ret;

    for (i = 0; i < 4; i++) {
        ret = func_000107EC(ppn, user, spare, D_00016CF4.pagesPerBlock);
        if (ret >= 0) {
            break;
        }
    }
    if (ret < 0) {
        return ret;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0001116C);

s32 func_000112BC(u32 ppn) {
    s32 i;
    s32 ret;

    if (ppn % D_00016CF8 != 0) {
        return 0x80230008;
    }
    for (i = 0; i < 4; i++) {
        ret = func_00010488(ppn);
        if (ret >= 0) {
            return 0;
        }
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00011330);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000113BC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000114C8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00011648);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0001177C);

s32 func_0001192C(void) {
    return D_00016CF4.pageSize;
}

s32 func_00011938(void) {
    return D_00016CF8;
}

s32 func_00011944(void) {
    return D_00016CFC;
}
