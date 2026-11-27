/* compiler[151]: 1.6.1 */
/* compiler[150]: 1.6.1 */
/* cflags[150,151]: -O2 -frename-registers */
#include "common.h"
#include "reboot_decls.h"

void bzero(void *s, u32 n) {
    memset(s, 0, n);
}

#if FW_VERSION == 100
s32 func_00001D2C(s32 arg0) {
    s32 var_v0;

    var_v0 = arg0;
    if (look_ctype_table(arg0) & 2) {
        var_v0 = (arg0 & 0xFF) - 0x20;
    }
    return var_v0;
}

s32 func_00001D68(s32 arg0) {
    s32 var_v0;

    var_v0 = arg0;
    if (look_ctype_table(arg0) & 1) {
        var_v0 = (arg0 & 0xFF) + 0x20;
    }
    return var_v0;
}
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00002D2C);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00002D50);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", look_ctype_table);

M2C_UNK *get_ctype_table(void) {
    return &D_00016DF1;
}

void *memchr(const void *s, s32 c, s32 n) {
    const u8 *p = s;
    u8 ch = c;
    if (p != NULL) {
        while (n > 0) {
            if (*p == ch) {
                return (void *)p;
            }
            p++;
            n--;
        }
    }
    return NULL;
}

INCLUDE_ASM("nonmatchings/reboot_002D0C", memcpy);

INCLUDE_ASM("nonmatchings/reboot_002D0C", memset);

void *memmove(void *dst, const void *src, s32 n) {
    u8 *d = dst;
    const u8 *s = src;

    if (dst == NULL) {
        return NULL;
    }
    if (d >= s) {
        while (--n >= 0) {
            d[n] = s[n];
        }
    } else {
        while (n > 0) {
            *d++ = *s++;
            n--;
        }
    }
    return dst;
}

s32 memcmp(const void *a, const void *b, s32 n) {
    const u8 *p = a;
    const u8 *q = b;
    while (n > 0) {
        if (*p != *q) {
            return (*p < *q) ? -1 : 1;
        }
        p++;
        q++;
        n--;
    }
    return 0;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00001F84);
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00002F5C);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00002FDC);

INCLUDE_ASM("nonmatchings/reboot_002D0C", wmemset);

s32 strlen(const char *s) {
    s32 len = 0;
    if (s == NULL) {
        return 0;
    }
    while (*s++ != '\0') {
        len++;
    }
    return len;
}

char *strchr(const char *s, s32 c) {
    char ch = c;
    if (s == NULL) {
        return NULL;
    }
    do {
        if (*s == ch) {
            return (char *)s;
        }
    } while (*s++ != '\0');
    return NULL;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00002144);
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_0000311C);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", strncpy);

INCLUDE_ASM("nonmatchings/reboot_002D0C", strrchr);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_002D0C", prnt);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00012AA8);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00012AB0);

void func_000029B4(char **pp, s32 c) {
    if (c < 256) {
        *(*pp)++ = c;
    } else {
        **pp = 0;
    }
}
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", prnt);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", sprintf);

INCLUDE_ASM("nonmatchings/reboot_002D0C", vsprintf);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00002A58);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00002A9C);
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003A14);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003A3C);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003A7C);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003ABC);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003B3C);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003B48);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003B78);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003BC4);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003CA8);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003D8C);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003E7C);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003ED8);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003F0C);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003F18);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003F58);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004034);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004090);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000040C4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000030F0);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000040CC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_0000326C);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004244);

#if FW_VERSION == 100
s32 func_000032F8(s8 arg0) {
    do {

    } while (func_00004244((s32) arg0) < 0);
    return 0;
}

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004298);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000033C4);

void func_000033EC(void) {
    do {

    } while (func_000033C4() < 0);
}
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004270);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004298);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_0000433C);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_0000436C);

void func_000043B8(void) {
    func_000040CC();
}

#if FW_VERSION == 100
void func_0000348C(s8 arg0) {
    func_000032F8(arg0);
}
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000043D4);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000043FC);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_0000441C);

s32 func_0000443C(void) {
    return 0;
}

s32 func_00004444(void) {
    return 0;
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_0000444C);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000044D0);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004558);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004670);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000046C0);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_0000477C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003AC8);
#endif

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00014E18);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00014EA8);

#if FW_VERSION >= 150
INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00014EAC);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004B70);

#if FW_VERSION == 100
void func_00003B50(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003B68);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003BC4_v100);

s32 func_00003DD8(void *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0) == 0x4543537E) {
        var_a1 = M2C_FIELD(arg0, s32 *, 4);
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00003DFC);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_0000402C);
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004BE8);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004E18);
#endif

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00014FF4);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00015000);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_0001500C);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00015050);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000041DC);
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004FC4);
#endif

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_000150A4);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_000150C4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_0000447C);
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_0000526C);
#endif

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00015164);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000045FC);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004680);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004984);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004DA0);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004FDC);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00005210);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00005290);
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00005518);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000059A8);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00005BD4);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00005E10);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00005E20);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00005EAC);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00006298);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00006538);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_000152C4);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_000152D0);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00006B24);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00006F0C);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00015500);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00015508);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00015514);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00015520);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00015528);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00006FA4);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000070A4);

s32 func_00007140(void) {
    return 0;
}

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00015550);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00015558);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00007148);

s32 func_000071F0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000071F8);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_0000725C);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000072BC);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000072FC);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00007350);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00006204);
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_0000748C);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00007978);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000079E4);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00007C3C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00006AB4);
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00007D24);
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00007E50);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00008268);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_000155A8);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_000155D4);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00008368);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00008444);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00008D1C);

s32 func_00008E68(void) {
    return 0;
}

s32 func_00008E70(void) {
    return 0;
}

void func_00008E78(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0000E028();
    func_00007E50(arg0, arg1, arg2, arg3);
}

s32 func_00008ED4(s32 arg0) {
    s32 temp_s0;

    func_0000E028();
    temp_s0 = func_00008268(arg0);
    func_0000E028();
    return temp_s0;
}

void func_00008F0C(struct Unk_func_00008F0C_0 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0000E028();
    func_000079E4(arg0->unk10, arg1, arg2, 0);
}
