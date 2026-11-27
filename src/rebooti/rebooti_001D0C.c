/* cflags[100]: -O2 -mno-split-addresses */
#include "common.h"
#include "rebooti_decls.h"

void bzero(void *s, u32 n) {
    memset(s, 0, n);
}

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

s32 look_ctype_table(s32 c) {
    return D_00014F21[c];
}

M2C_UNK *get_ctype_table(void) {
    return &D_00014F21;
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

INCLUDE_ASM("nonmatchings/rebooti_001D0C", memcpy);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", memset);

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

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00001F84);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002004);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002080);

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

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002144);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_000021DC);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002258);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", prnt);

void sprintf_putc(char **pp, s32 c) {
    if (c < 256) {
        *(*pp)++ = c;
    } else {
        **pp = 0;
    }
}

s32 sprintf(char *buf, const char *fmt, ...) {
    __builtin_va_list ap;
    char *p = buf;

    __builtin_va_start(ap, fmt);
    return prnt(sprintf_putc, &p, fmt, ap);
}

s32 vsprintf(char *buf, const char *fmt, void *ap) {
    char *p = buf;
    return prnt(sprintf_putc, &p, fmt, ap);
}

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002A58);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002A9C);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002AE0);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002B60);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002B6C);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002B9C);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002BE8);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002CCC);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002DB0);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002EA0);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002EFC);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002F30);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002F3C);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00002F7C);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00003058);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_000030B4);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_000030E8);

INCLUDE_RODATA("nonmatchings/rebooti_001D0C", D_00012D08);

INCLUDE_RODATA("nonmatchings/rebooti_001D0C", D_00012D10);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_000030F0);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00003174);

s32 func_0000326C(s32 baud) {
    volatile u32 *uart = (volatile u32 *)0xBE4C0000;
    u32 div = 96000000 / baud;
    s32 intr = func_00001C2C();
    uart[9] = div >> 6;
    uart[10] = (div + 32) & 0x3F;
    func_00001C58(intr);
    return 0;
}

s32 func_000032CC(s8 c) {
    if (*(volatile u32 *)0xBE4C0018 & 0x20) {
        return -1;
    }
    *(volatile u32 *)0xBE4C0000 = c;
    return 0;
}

s32 func_000032F8(s8 arg0) {
    do {

    } while (func_000032CC((s32) arg0) < 0);
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00003328);

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

s32 func_0000340C(u8 *buf, s32 n) {
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

void func_00003470(void) {
    func_00003174();
}

void func_0000348C(s8 arg0) {
    func_000032F8(arg0);
}

s32 func_000034A8(s32 unused, s32 a1, s32 a2) {
    return func_00003328(a1, a2);
}

s32 func_000034C8(s32 unused, s32 a1, s32 a2) {
    return func_0000340C(a1, a2);
}

s32 func_000034E8(void) {
    return 0;
}

s32 func_000034F0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_000034F8);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00003580);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00003698);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_000036F4);

s32 func_00003AC8(s32 arg0) {
    D_00015464 = arg0;
    return 0;
}

INCLUDE_RODATA("nonmatchings/rebooti_001D0C", D_00012F58);

INCLUDE_RODATA("nonmatchings/rebooti_001D0C", D_00012FE8);

INCLUDE_RODATA("nonmatchings/rebooti_001D0C", D_00012FEC);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00003AD8);

void func_00003BB4(SceLoadCoreExecFileInfo *execInfo, s32 ret) {
    if (ret == 0) {
        execInfo->isDecrypted = 1;
        return;
    }
    execInfo->isDecrypted = 0;
}

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00003BCC);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00003C8C);

s32 func_00003ED8(SceHeader *hdr) {
    s32 size;

    size = 0;
    if (hdr->magic == 0x4543537E) {
        size = hdr->size;
    }
    return size;
}

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00003EFC);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_0000412C);

INCLUDE_RODATA("nonmatchings/rebooti_001D0C", D_000131A8);

INCLUDE_RODATA("nonmatchings/rebooti_001D0C", D_000131B4);

INCLUDE_RODATA("nonmatchings/rebooti_001D0C", D_000131C0);

INCLUDE_RODATA("nonmatchings/rebooti_001D0C", D_00013204);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_000042DC);

INCLUDE_RODATA("nonmatchings/rebooti_001D0C", D_0001331C);

INCLUDE_RODATA("nonmatchings/rebooti_001D0C", D_0001333C);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00004608);

INCLUDE_RODATA("nonmatchings/rebooti_001D0C", D_00013430);

s32 sceKernelLoadExecutableObject(u8 *buf, SceLoadCoreExecFileInfo *execInfo) {
    if (func_00003ED8((SceHeader *)buf) != 0) {
        buf += 0x40;
    }
    switch (execInfo->elfType) {
    case -1:
    case 0:
        break;
    case 1:
    case 2:
        func_0000482C(buf, execInfo);
        return 0;
    }
    Kprintf(D_00013430, "sceKernelLoadExecutableObject");
    return -1;
}

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_0000482C);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00004B30);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_00004F4C);

INCLUDE_RODATA("nonmatchings/rebooti_001D0C", D_00013508);

INCLUDE_RODATA("nonmatchings/rebooti_001D0C", D_00013548);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_000051D4);

INCLUDE_ASM("nonmatchings/rebooti_001D0C", func_0000546C);

void func_000054EC(u32 *p, s32 n) {
    while (n > 0) {
        n--;
        *p++ = 0;
    }
}
