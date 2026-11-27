/* compiler[151]: 1.6.1 */
/* compiler[150]: 1.6.1 */
/* cflags[150,151]: -O2 -frename-registers -mno-split-addresses */
/* cflags[100]: -O2 -mno-split-addresses */
#include "common.h"
#include "reboot_decls.h"

#if FW_VERSION == 100
s32 FlashInitialize(void) {
    if (func_00006FA4(0) < 0) {
        Kprintf("flash.c:%s:sceBootLfatfsMount failed\n", "FlashInitialize");
        return 0x80020001;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/reboot", func_00000000);

INCLUDE_ASM("nonmatchings/reboot", sceKernelReboot);

s32 module_bootstart(void) {
    return 0;
}

void sceKernelRegisterAssertHandler(void (*arg0)(s32)) {
    D_00017124 = arg0;
}

#if FW_VERSION == 100
void sceKernelAssert(s32 test, u32 lvl) {
    u32 cur = ((u32)func_00001D14() & 0x300) >> 8;

    if (test != 0) {
        return;
    }
    if (lvl < cur) {
        if (D_00017124 != NULL) {
            D_00017124(0);
            return;
        }
        Kprintf("There is no assert handler, stop\n");
        for (;;) {
        }
    }
    Kprintf("assertion ignore (level %d >= %d)\n", lvl, cur);
}
#else
void sceKernelAssert(s32 test, s32 lvl) {
    s32 cur = __builtin_allegrex_ext(func_00001D14(), 8, 2);

    if (test != 0) {
        return;
    }
    if (lvl < cur) {
        if (D_00017124 != NULL) {
            D_00017124(0);
            return;
        }
        Kprintf("There is no assert handler, stop\n");
        for (;;) {
        }
    }
    Kprintf("assertion ignore (level %d >= %d)\n", lvl, cur);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot", func_00000554);

u32 func_00000684(char **pp) {
    char *p = *pp;
    u32 v = 0;
    s32 c;

    while (*p == ' ' || *p == '\t') {
        p++;
    }
    if (*p == '0' && (p[1] == 'x' || p[1] == 'X')) {
        p += 2;
    }
    for (;;) {
        c = *p++;
        if ((u32)(c - '0') < 10) {
            c -= '0';
        } else if ((u32)(c - 'a') < 6) {
            c -= 'a' - 10;
        } else if ((u32)(c - 'A') < 6) {
            c -= 'A' - 10;
        } else {
            break;
        }
        v = v * 16 + c;
    }
    p--;
    *pp = p;
    return v;
}

void func_00000768(s32 arg0) {
    func_00000000(arg0);
}

INCLUDE_ASM("nonmatchings/reboot", func_00000784);

INCLUDE_ASM("nonmatchings/reboot", func_00000AF4);
#endif

INCLUDE_ASM("nonmatchings/reboot", func_00000450);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot", func_00000E4C);
#else
INCLUDE_ASM("nonmatchings/reboot", func_00000554);

INCLUDE_ASM("nonmatchings/reboot", func_00000720);

INCLUDE_ASM("nonmatchings/reboot", func_00000A9C);
#endif

INCLUDE_RODATA("nonmatchings/reboot", D_0001484C);

INCLUDE_RODATA("nonmatchings/reboot", D_0001486C);

INCLUDE_ASM("nonmatchings/reboot", func_00000E48);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/reboot", func_000010E4);
#else
INCLUDE_ASM("nonmatchings/reboot", func_000010CC);

INCLUDE_ASM("nonmatchings/reboot", func_000011B4);

INCLUDE_ASM("nonmatchings/reboot", func_00001AAC);

INCLUDE_ASM("nonmatchings/reboot", Kprintf);

s32 func_00001C08(void) {
    return D_00017134;
}
#endif

void func_00001C14(s32 arg0) {
    D_00017134 = arg0;
}

void sceKernelRegisterKprintfHandler(s32 arg0, s32 arg1) {
    D_00016DE4 = arg0;
    D_00016DE8 = arg1;
}

#if FW_VERSION == 100
void *func_000012BC(const void *s, s32 c, s32 n) {
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

s32 func_000012F4(const char *s) {
    s32 len = 0;
    if (s == NULL) {
        return 0;
    }
    while (*s++ != '\0') {
        len++;
    }
    return len;
}

INCLUDE_ASM("nonmatchings/reboot", func_00001328);

INCLUDE_RODATA("nonmatchings/reboot", D_00012894);

INCLUDE_RODATA("nonmatchings/reboot", D_0001289C);

s32 Kprintf(const char *fmt, ...) {
    __builtin_va_list ap;
    s32 intr;
    s32 ret = 0;

    intr = func_00002C2C();
    __builtin_va_start(ap, fmt);
    if (D_00016DE4 != NULL) {
        ret = D_00016DE4(D_00016DE8, fmt, ap);
    }
    func_00002C58(intr);
    return ret;
}

s32 func_00001AE0(void) {
    if (D_00017138 != NULL) {
        return D_00017138();
    }
    return 0x80020001;
}
#else
INCLUDE_ASM("nonmatchings/reboot", func_00001C34);
#endif

s32 func_00001C64(s32 arg0) {
    D_00017138 = arg0;
    return 0;
}

#if FW_VERSION == 100
s32 func_00001C74(void) {
    s32 (*f)(void) = D_0001713C;
    if (f != NULL) {
        return f();
    }
    return 0x80020001;
}
#else
INCLUDE_ASM("nonmatchings/reboot", func_00001C74);
#endif

s32 func_00001CA4(s32 (*arg0)(void)) {
    D_0001713C = arg0;
    return 0;
}
