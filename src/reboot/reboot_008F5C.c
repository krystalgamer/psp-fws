/* compiler[151]: 1.6.1 */
/* compiler[150]: 1.6.1 */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "reboot_decls.h"

s32 func_00008F5C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    func_0000E028();
    temp_s1 = func_0000A3B4(arg0, arg1, arg2);
    func_0000E028();
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00008FB4);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000900C);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00009094);

s32 func_000090DC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    func_0000E028();
    temp_s1 = func_0000A7F4(arg0, arg1, arg2);
    func_0000E028();
    return temp_s1;
}

s32 func_00009134(s32 arg0, s32 arg1) {
    s32 temp_s1;

    func_0000E028();
    temp_s1 = func_0000ABCC(arg0, arg1);
    func_0000E028();
    return temp_s1;
}

s32 func_0000917C(s32 arg0, s32 arg1) {
    s32 temp_s1;

    func_0000E028();
    temp_s1 = func_0000AE8C(arg0, arg1);
    func_0000E028();
    return temp_s1;
}

s32 func_000091C4(struct Unk_func_000091C4_0 *arg0) {
    void **temp_a2;
    void **temp_v0;
    struct Unk_func_000091C4_temp_a0 *temp_a0;
    struct Unk_func_000091C4_temp_a1 *temp_a1;
    struct Unk_func_000091C4_temp_a3 *temp_a3;

    func_0000E028();
    temp_a0 = arg0->unk10;
    if (temp_a0 != NULL) {
        temp_a3 = temp_a0->unk8;
        temp_a1 = temp_a0->unk0;
        temp_a2 = temp_a0->unk4;
        temp_a3->unk8 = (s32) (temp_a3->unk8 - 1);
        if (temp_a1 != NULL) {
            temp_a1->unk4 = temp_a2;
        } else {
            D_00017348 = temp_a2;
        }
        temp_v0 = temp_a0->unk4;
        if (temp_v0 != NULL) {
            *temp_v0 = temp_a1;
        } else {
            D_00017344 = temp_a1;
        }
        temp_a0->unk0 = (void *) D_0001734C;
        D_0001734C = temp_a0;
    }
    func_0000E028();
    return 0;
}

void func_00009254(s32 arg0, M2C_UNK arg1) {
    func_0000E028();
    func_0000AFCC(arg0, arg1);
}

void func_00009290(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0000E028();
    func_0000B148(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_000092DC);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00009344);

s32 func_00009384(s32 arg0, s32 arg1) {
    func_00001B78((s32) "%s: iob=%p name=%s\n", (s32) "UFatChdir", arg0, arg1);
    return 0x8001B000;
}

s32 func_000093BC(void) {
    s32 temp_s0;

    temp_s0 = func_00008444();
    func_0000E028();
    return temp_s0;
}

s32 func_000093E8(void) {
    s32 temp_s0;

    temp_s0 = func_00008D1C();
    func_0000E028();
    return temp_s0;
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00009414);
#endif

s32 func_00009484(void) {
    return 0x8001B000;
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00009490);
#endif

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00009550);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00009638);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000983C);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_000099D0);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00009AD4);

#if FW_VERSION == 100
s32 func_00009BC8(UFatUnit *unit, u32 cluster) {
    u32 next;
    s32 ret;

    if (cluster != 0) {
        while ((cluster | ~unit->fatMask) < 0xFFFFFFF6) {
            next = func_00007350(unit, cluster);
            ret = func_0000C0B4(unit, cluster);
            if (ret < 0) {
                return ret;
            }
            cluster = next;
        }
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00009BC8);
#endif

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00009C58);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00009D10);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00009D98);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000A0E0);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000A2AC);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000A3B4);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000A52C);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000A654);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000A7F4);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000ABCC);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000AE8C);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000AFCC);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000B148);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000B284);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000B874);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000B96C);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000BA58);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000BDB0);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000BF8C);

s32 func_0000BFFC(UFatUnit *unit) {
    s32 c, ret;

    for (c = unit->nextFree; c < unit->nClusters; c++) {
        ret = func_00007350(unit, c);
        if (ret < 0) {
            return ret;
        }
        if (ret == 0) {
            ret = func_0000CD00(unit, c, -8);
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

s32 func_0000C0B4(UFatUnit *unit, s32 cluster) {
    s32 ret;

    if (cluster < 2 || cluster >= unit->nClusters) {
        return 0x80010005;
    }
    ret = func_0000CD00(unit, cluster, 0);
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000AD20);
#else
INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000C140);
#endif

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000C244);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000C678);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000C7EC);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000CA14);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000CBD4);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000CD00);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000CEDC);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000CFBC);

s32 func_0000D34C(UFatUnit *unit) {
    s32 i, n;

    if (unit->freeCount != -1) {
        return unit->freeCount;
    }
    n = 0;
    for (i = 2; i < unit->nClusters; i++) {
        if (func_00007350(unit, i) == 0) {
            n++;
        }
    }
    unit->freeCount = n;
    return n;
}

s32 func_0000D3DC(UFatUnit *unit) {
    u8 ent[32];
    s32 i, n = 0, off = 0;

    for (i = 0; i < unit->rootEntries; i++, off += 32) {
        if (func_00009550(unit, (unit->rootDirStart << unit->sectorShift) + off, ent, 32) >= 0) {
            if (ent[0] == 0 || ent[0] == 0xE5) {
                n++;
            }
        }
    }
    return n;
}

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000D480);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000D588);

s32 func_0000D694(struct Unk_func_0000D694_0 *arg0) {
    return (arg0->unk2 << 8) | arg0->unk3;
}

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000D6A8);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015B34);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015B54);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000D754);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000D82C);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000D964);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000D9E0);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000DA70);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000DAC0);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015C64);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000DBB8);

#if FW_VERSION == 100
s32 func_0000DC4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    if (&D_0002B79C != NULL) {
        var_v0 = func_0000F78C(arg0, arg1, arg2, arg3, (s32) &D_0002B79C);
    } else {
        func_00001B78((s32) "lflash.c:%s:Mallocfailed: 0x%08x\n", (s32) "df_open", 0, arg3);
        var_v0 = 0x8001000C;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 150
s32 func_0000DC4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    if (&D_0002DB34 != NULL) {
        var_v0 = func_0000F78C(arg0, arg1, arg2, arg3, (s32) &D_0002DB34);
    } else {
        func_00001B78((s32) "lflash.c:%s:Mallocfailed: 0x%08x\n", (s32) "df_open", 0, arg3);
        var_v0 = 0x8001000C;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 151
s32 func_0000DC4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v0;

    if (&D_0002DBF4 != NULL) {
        var_v0 = func_0000F78C(arg0, arg1, arg2, arg3, (s32) &D_0002DBF4);
    } else {
        func_00001B78((s32) "lflash.c:%s:Mallocfailed: 0x%08x\n", (s32) "df_open", 0, arg3);
        var_v0 = 0x8001000C;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000DC9C);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000DDA8);

#if FW_VERSION >= 150
INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015D38);
#endif

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015D64);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015D8C);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015D9C);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015DBC);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000DEF4);

#if FW_VERSION >= 150
s32 func_0000E020(void) {
    return 0;
}
#else
s32 func_0000E028(void) {
    s32 var_v1;

    var_v1 = 0;
    if ((&D_0001D890 != NULL) && (D_0001D890.unk1B4 != 0)) {
        var_v1 = func_0000E924(&D_0001D890);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000E028);
#endif

s32 func_0000E098(void) {
    func_0000FC60();
    return 0;
}

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000E0B8);

void func_0000E0E8(void) {
    func_0000E2F0((s32) &D_0001D890);
}

void func_0000E108(void) {
    func_0000F3D8((s32) &D_0001D890);
}

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000E128);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000E178);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000E1DC);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000E230);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000E294);

s32 func_0000E2E4(void) {
    return 0x8001B000;
}

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000E2F0);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015E7C);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015EC0);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015EC4);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015EF4);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015F30);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015F60);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015F88);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015F8C);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015FA4);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00015FB8);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000E668);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000E7B0);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000E830);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000E924);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000EBA0);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_000162E8);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00016308);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_0001631C);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000EE88);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000F0FC);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000F2F0);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000F3D8);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000F78C);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000F990);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000FAE0);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_000142F0);
#endif

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000FBBC);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000FC60);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000FE18);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000FEC8);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00016674);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000FFF8);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_000167A4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000ED28);
#else
INCLUDE_ASM("nonmatchings/reboot_008F5C", func_000101D4);
#endif

void func_00010328(s32 arg0) {
    s32 var_a1;
    s8 *temp_v0;

    var_a1 = 0;
    do {
        temp_v0 = arg0 + var_a1;
        var_a1 += 1;
        *temp_v0 = -1;
    } while (var_a1 < 0xC);
}

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0001034C);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00010468);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00010550);

s32 func_00010960(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00010968);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00010A14);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00010AC0);

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_000169E8);

extern char D_000169E8[];

s32 func_00010BDC(void *iob, char *name) {
    func_00001B78(D_000169E8, "df_remove", name);
    return 0x8001B000;
}

extern char D_000169E8[];

s32 func_00010C10(void *iob, char *name) {
    func_00001B78(D_000169E8, "df_mkdir", name);
    return 0x8001B000;
}

extern char D_000169E8[];

s32 func_00010C44(void *iob, char *name) {
    func_00001B78(D_000169E8, "df_rmdir", name);
    return 0x8001B000;
}

extern char D_000169E8[];

s32 func_00010C78(void *iob, char *name) {
    func_00001B78(D_000169E8, "df_dopen", name);
    return 0x8001B000;
}

INCLUDE_RODATA("nonmatchings/reboot_008F5C", D_00016A30);

extern char D_00016A30[];

s32 func_00010CAC(void *arg0) {
    func_00001B78(D_00016A30, "df_dclose", **M2C_FIELD(arg0, s32 ***, 8));
    return 0x8001B000;
}

extern char D_00016A30[];

s32 func_00010CE8(void *arg0) {
    func_00001B78(D_00016A30, "df_dread", **M2C_FIELD(arg0, s32 ***, 8));
    return 0x8001B000;
}

s32 func_00010D24(void *iob, char *name, void *stat) {
    func_00001B78("lflash.c:%s:\n", "df_getstat");
    return (stat == NULL) ? 0x80010016 : 0x8001B000;
}

s32 func_00010D6C(void *iob, char *name) {
    func_00001B78("lflash.c:%s:filename:%s\n", "df_chstat", name);
    return 0x8001B000;
}

s32 func_00010DA0(void *iob, const char *oldname) {
    func_00001B78("lflash.c:%s:oldfile: %s\n", "df_rename", oldname);
    return 0x8001B000;
}

s32 func_00010DD4(void *iob, char *name) {
    func_00001B78("lflash.c:%s:, path name: %s\n", "df_chdir", name);
    return 0x8001B000;
}

s32 func_00010E08(void) {
    return 0x8001B000;
}

s32 func_00010E14(void) {
    return 0x8001B000;
}

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00010E20);

s32 func_00010EBC(void) {
    return 0x8001B000;
}

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00010EC8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000FAC4);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0000FC60_v100);
#else
INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00010F48);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00011160);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00011284);
#endif

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_000112F8);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00011384);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_000113DC);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_000115B8);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00011788);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00011864);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00011944);

s32 func_000119F0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_000119F8);

#if FW_VERSION == 100
s32 func_00011284(s32 protect) {
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
#endif

s32 func_00011A4C(void) {
    u32 v;
    *(volatile u32 *)0xBD101008 = 0x70;
    v = *(volatile u32 *)0xBD101300;
    *(volatile u32 *)0xBD101014 = 1;
    return v & 0xFF;
}

#if FW_VERSION == 100
s32 func_00011A80(s32 a0) {
    if (a0) {
        *(volatile u32 *)0xBD101004 |= 0x80;
    } else {
        *(volatile u32 *)0xBD101004 &= ~0x80;
    }
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00011A80);
#endif

s32 func_00011AB0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00011AB8);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00011AFC);

s32 func_00011B24(s32 a0, s32 a1, s32 a2, s32 a3) {
    return func_000113DC(a0, a1, a2, a3, 0x20);
}

#if FW_VERSION == 100
s32 func_00011B40(s32 a0, s32 a1, s32 a2, s32 a3) {
    return func_000115B8(a0, a1, a2, a3, (a1 == 0) ? 0x30 : 0x20);
}
#else
INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00011B40);
#endif

s32 func_00011B64(s32 a0, s32 a1, s32 a2, s32 a3) {
    return func_000113DC(a0, a1, a2, a3, 0x31);
}

void func_00011B80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000115B8(arg0, arg1, arg2, arg3, 0x31);
}

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00011B9C);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00011D88);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_000120D4);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00012220);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_000122E8);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0001239C);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00012420);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00012570);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_000125E4);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00012670);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_0001277C);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_000128FC);

INCLUDE_ASM("nonmatchings/reboot_008F5C", func_00012A30);

s32 func_00012BE0(void) {
    return D_00018BCC;
}

s32 func_00012BEC(void) {
    return D_00018BD0;
}

s32 func_00012BF8(void) {
    return D_00018BD4;
}
