/* compiler[151]: 1.6.1 */
/* compiler[150]: 1.6.1 */
/* cflags[100]: -O2 -mno-split-addresses */
/* cflags[150,151]: -O2 -frename-registers -mno-split-addresses */
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

INCLUDE_ASM("nonmatchings/reboot_002D0C", prnt);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00012AA8);

INCLUDE_RODATA("nonmatchings/reboot_002D0C", D_00012AB0);

void func_000029B4(char **pp, s32 c) {
    if (c < 256) {
        *(*pp)++ = c;
    } else {
        **pp = 0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/reboot_002D0C", sprintf);

INCLUDE_ASM("nonmatchings/reboot_002D0C", vsprintf);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot_002D0C", sceKernelDcacheWBinvAll);

INCLUDE_ASM("nonmatchings/reboot_002D0C", sceKernelIcacheClearAll);
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
s32 func_0000326C(s32 baud) {
    volatile u32 *uart = (volatile u32 *)0xBE4C0000;
    u32 div = 96000000 / baud;
    s32 intr = func_00002C2C();
    uart[9] = div >> 6;
    uart[10] = (div + 32) & 0x3F;
    func_00002C58(intr);
    return 0;
}
#endif

s32 func_00004244(s8 c) {
    if (*(volatile u32 *)0xBE4C0018 & 0x20) {
        return -1;
    }
    *(volatile u32 *)0xBE4C0000 = c;
    return 0;
}

#if FW_VERSION == 100
s32 func_000032F8(s8 arg0) {
    do {

    } while (func_00004244((s32) arg0) < 0);
    return 0;
}

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004298);

s32 func_000033C4(void) {
    if (*(volatile u32 *)0xBE4C0018 & 0x10) {
        return -1;
    }
    return *(volatile u32 *)0xBE4C0000 & 0xFF;
}

s32 func_000033EC(void) {
    s32 c;

    do {
        c = func_000033C4();
    } while (c < 0);
    return c;
}
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004270);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00004298);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_0000433C);
#endif

#if FW_VERSION == 100
s32 func_0000436C(u8 *buf, s32 n) {
    s32 i;
    s32 c;

    for (i = 0; i < n; i++) {
        c = func_000033EC();
        if (c < 0) {
            break;
        }
        *buf++ = c;
    }
    return i;
}
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_0000436C);
#endif

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

s32 func_000043FC(s32 unused, s32 a1, s32 a2) {
    return func_00004298(a1, a2);
}

s32 func_0000441C(s32 unused, s32 a1, s32 a2) {
    return func_0000436C(a1, a2);
}

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
s32 func_00003AC8(s32 arg0) {
    D_00014EE4 = arg0;
    return 0;
}
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

s32 func_00003B68(s32 arg0, void *arg1) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0x8002013A;
    if (D_00014EE4 != NULL) {
        temp_v0 = D_00014EE4(arg0, M2C_FIELD(arg1, s32 *, 0x10));
        func_00003B50(arg1, temp_v0);
        var_v0 = temp_v0;
    }
    return var_v0;
}

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

void func_00005290(u32 *p, s32 n) {
    while (n > 0) {
        n--;
        *p++ = 0;
    }
}
#else
INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00005518);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_000059A8);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00005BD4);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00005E10);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00005E20);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00005EAC);

INCLUDE_ASM("nonmatchings/reboot_002D0C", func_00006298);
#endif
