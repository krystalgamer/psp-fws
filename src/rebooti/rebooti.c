/* cflags[100]: -O2 -mno-split-addresses */
#include "common.h"
#include "rebooti_decls.h"

s32 FlashInitialize(void) {
    if (func_00005F78(0) < 0) {
        Kprintf("flash.c:%s:sceBootLfatfsMount failed\n", "FlashInitialize");
        return 0x80020001;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti", func_0000004C);

INCLUDE_ASM("nonmatchings/rebooti", sceKernelReboot);

s32 module_bootstart(void) {
    return 0;
}

void sceKernelRegisterAssertHandler(void (*arg0)(s32)) {
    D_00015254 = arg0;
}

void sceKernelAssert(s32 test, u32 lvl) {
    u32 cur = ((u32)func_00001BC0() & 0x300) >> 8;

    if (test != 0) {
        return;
    }
    if (lvl < cur) {
        if (D_00015254 != NULL) {
            D_00015254(0);
            return;
        }
        Kprintf("There is no assert handler, stop\n");
        for (;;) {
        }
    }
    Kprintf("assertion ignore (level %d >= %d)\n", lvl, cur);
}

INCLUDE_ASM("nonmatchings/rebooti", func_00000554);

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
    func_0000004C(arg0);
}

INCLUDE_ASM("nonmatchings/rebooti", func_00000784);

INCLUDE_ASM("nonmatchings/rebooti", func_00000AF4);

INCLUDE_ASM("nonmatchings/rebooti", func_00000D40);

INCLUDE_ASM("nonmatchings/rebooti", func_00000E4C);

INCLUDE_RODATA("nonmatchings/rebooti", D_00012A14);

INCLUDE_RODATA("nonmatchings/rebooti", D_00012A34);

INCLUDE_ASM("nonmatchings/rebooti", func_00000E6C);

INCLUDE_ASM("nonmatchings/rebooti", func_000010E4);

void func_0000129C(s32 arg0) {
    D_00015264 = arg0;
}

void sceKernelRegisterKprintfHandler(s32 arg0, s32 arg1) {
    D_00014F14 = arg0;
    D_00014F18 = arg1;
}

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

INCLUDE_ASM("nonmatchings/rebooti", func_00001328);

INCLUDE_RODATA("nonmatchings/rebooti", D_00012AF4);

INCLUDE_RODATA("nonmatchings/rebooti", D_00012AFC);

INCLUDE_ASM("nonmatchings/rebooti", Kprintf);

s32 func_00001B10(s32 arg0) {
    D_00015268 = arg0;
    return 0;
}

s32 func_00001B20(void) {
    s32 (*f)(void) = D_0001526C;
    if (f != NULL) {
        return f();
    }
    return 0x80020001;
}

s32 func_00001B50(s32 (*arg0)(void)) {
    D_0001526C = arg0;
    return 0;
}
