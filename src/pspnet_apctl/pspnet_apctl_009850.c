/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_apctl_decls.h"

#if FW_VERSION >= 282
M2C_UNK *func_00009850(struct Unk_func_00009850_0 *arg0) {
    M2C_UNK *temp_a1;

    temp_a1 = arg0->unk2374;
    if (arg0->unk2378 == temp_a1) {
        arg0->unk2378 = 0;
    }
    if (temp_a1 != NULL) {
        arg0->unk2374 = (M2C_UNK *) *temp_a1;
    }
    arg0->unk2390 = 0;
    return temp_a1;
}

s32 func_00009880(s32 arg0) {
    func_000098A4(arg0);
    return 0xF4240;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_000098A4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000990C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000998C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_000099FC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_00009A48);

s32 func_00009BEC(struct Unk_func_00009BEC_0 *arg0) {
    sceNetMemset((u8 *)arg0 + 0x24F4, 0, 0x2C);
    arg0->unk2508 = 5;
    arg0->unk250C = 5;
    arg0->unk2510 = 3;
    return 0;
}

s32 func_00009C34(struct Unk_func_00009C34_0 *arg0) {
    arg0->unk2518 = 0;
    return 0;
}

s32 func_00009C40(struct Unk_func_00009C40_0 *arg0) {
    return arg0->unk2518 == 1;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_00009C50);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_00009CB4);

s32 func_00009CE0(struct Unk_func_00009CE0_0 *arg0) {
    struct Unk_func_00009CE0_temp_a4 *temp_a4;
    struct Unk_func_00009CE0_temp_a6 *temp_a6;

    temp_a4 = (u8 *)arg0 + 0x24F4;
    temp_a6 = (u8 *)arg0 + 0x24A0;
    temp_a6->unkC = (s32) temp_a4->unk18;
    temp_a4->unkC = (s32) (temp_a4->unkC + 1);
    temp_a6->unk14 = 0;
    func_00009098(arg0->unk18, (u8 *)arg0 + 0x1C, (u8 *)arg0 + 0x10, (u8 *)arg0 + 0x2398, 1, 1, 1, 0);
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_00009D3C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_00009D68);

s32 func_00009D80(struct Unk_func_00009D80_0 *arg0) {
    arg0->unk24DC = 1;
    return 0;
}

s32 func_00009D90(struct Unk_func_00009D90_0 *arg0) {
    arg0->unk24F4 = 1;
    return 0;
}

s32 func_00009DA0(struct Unk_func_00009DA0_0 *arg0) {
    arg0->unk24DC = 1;
    arg0->unk24FC = 1;
    return 0;
}

s32 func_00009DB4(struct Unk_func_00009DB4_0 *arg0) {
    arg0->unk24DC = 0;
    arg0->unk24FC = 0;
    func_00009098(arg0->unk18, (u8 *)arg0 + 0x1C, (u8 *)arg0 + 0x10, (u8 *)arg0 + 0x2398, 1, 1, 2, 0);
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_00009DF8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_00009E48);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_00009E88);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_00009FAC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A080);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A100);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A1A4);

s32 func_0000A1F0(void) {
    return 0;
}

s32 func_0000A1F8(void) {
    return 0;
}

s32 func_0000A200(struct Unk_func_0000A200_0 *arg0) {
    sceNetMemset((u8 *)arg0 + 0x2520, 0, 0xBD8);
    arg0->unk30EC = 5;
    return 0;
}

s32 func_0000A23C(struct Unk_func_0000A23C_0 *arg0) {
    arg0->unk30F4 = 0;
    return 0;
}

s32 func_0000A248(struct Unk_func_0000A248_0 *arg0) {
    return arg0->unk30F4 == 1;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A258);

s32 func_0000A354(struct Unk_func_0000A354_0 *arg0) {
    struct Unk_func_0000A354_temp_s1 *temp_s1;

    temp_s1 = (u8 *)arg0 + 0x2520;
    sceNetMemcpy((u8 *)arg0 + 0x2E, (u8 *)arg0 + 0x2B0C, temp_s1->unkBC8);
    func_00009098(arg0->unk18, (s32) ((u8 *)arg0 + 0x1C), (s32) ((u8 *)arg0 + 0x10), (s32) ((u8 *)arg0 + 0x2398), 1, 1, 0, (s32) (u16) temp_s1->unkBC8);
    temp_s1->unk8 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A3C0);
#endif

#if FW_VERSION < 151
void func_0000A418(s32 arg0, s32 arg1) {
    func_0000741C(arg1, arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A418);
#endif

#if FW_VERSION < 250
void func_00007594(void *dst, s32 n) {
    u8 *p = dst;

    if (p == NULL) {
        return;
    }
    while (n > 0) {
        n--;
        *p++ = 0;
    }
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_000075BC);

char *func_0000766C(const char *s, s32 c) {
    const char *p = s;
    char ch = c;

    if (s == NULL) {
        return NULL;
    }
    while (*p++ != '\0') {
    }
    p--;
    do {
        if (*p == ch) {
            return (char *)p;
        }
    } while (s < p--);
    return NULL;
}
#endif

#if FW_VERSION >= 151 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_00007310);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_000076B4);
#endif

#if FW_VERSION < 250
char *func_0000774C(char *dst, const char *src, s32 n) {
    u8 *d = (u8 *)dst;
    s32 i;
    u8 c;

    if (dst == NULL || src == NULL) {
        return NULL;
    }
    for (i = 0; i < n; i++) {
        c = *(const u8 *)src++;
        *d++ = c;
        if (c == '\0') {
            for (i++; i < n; i++) {
                *d++ = '\0';
            }
            return dst;
        }
    }
    return dst;
}

char *func_000077C8(const char *s, s32 c) {
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

char *func_000077F8(char *arg0, const char *arg1) {
    const u8 *var_a1;
    u8 *var_a2;
    char *var_v0;
    u8 temp_a3;

    var_a1 = (const u8 *)arg1;
    var_v0 = NULL;
    var_a2 = (u8 *)arg0;
    if (((arg0 == NULL) | (var_a1 == NULL)) == 0) {
        do {
            temp_a3 = *var_a1;
            var_a1 += 1;
            *var_a2 = temp_a3;
            var_a2 += 1;
        } while (temp_a3 != 0);
        var_v0 = arg0;
    }
    return var_v0;
}

s32 func_00007830(const char *s) {
    s32 n = 0;

    if (s == NULL) {
        return 0;
    }
    while (*s++ != '\0') {
        n++;
    }
    return n;
}
#endif

#if FW_VERSION >= 282
s32 func_0000A448(struct Unk_func_0000A448_0 *arg0) {
    arg0->unk24E8 = 1;
    return 0;
}

s32 func_0000A458(s32 arg0) {
    struct Unk_func_0000A458_temp_v1 *temp_v1;

    temp_v1 = arg0 + 0x24A0;
    temp_v1->unk14 = 0;
    temp_v1->unk40 = 0;
    return 0;
}

s32 func_0000A46C(struct Unk_func_0000A46C_0 *arg0) {
    arg0->unk24D4 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A478);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A490);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A590);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A5D0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A610);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A650);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A74C);

s32 func_0000A808(struct Unk_func_0000A808_0 *arg0) {
    sceNetMemset((u8 *)arg0 + 0x30F8, 0, 0x64C);
    arg0->unk3108 = 0xA;
    func_0000B6A4((s32) arg0);
    return 0;
}

s32 func_0000A84C(void) {
    return 0;
}

s32 func_0000A854(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A85C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A900);

s32 func_0000A95C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A964);

s32 func_0000A9A4(void) {
    return 0;
}

s32 func_0000A9AC(s32 arg0) {
    func_0000B328(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000A9CC);

s32 func_0000AB74(struct Unk_func_0000AB74_0 *arg0) {
    arg0->unk2520 = 1;
    arg0->unk2524 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000AB88);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000AC1C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000AC70);

s32 func_0000ACBC(struct Unk_func_0000ACBC_0 *arg0) {
    arg0->unk24B8 = 1;
    return 0;
}

s32 func_0000ACCC(struct Unk_func_0000ACCC_0 *arg0) {
    arg0->unk24B0 = 1;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000ACDC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000AD2C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000AD6C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000AE80);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B0C0);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B130);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B1D8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B218);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B258);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B298);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B2D8);

s32 func_0000B318(void) {
    return 0;
}

s32 func_0000B320(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B328);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B464);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B530);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B5B8);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B6A4);

void func_0000B720(void) {
    sceNetMemset(&D_000177A0, 0, 0x70);
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B748);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B7A4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B7FC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000B974);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000BAEC);

void func_0000BBEC(s32 arg0) {
    func_0000BE5C(arg0);
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000BC08);

void func_0000BCBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000BF90(arg0, arg1, arg2, arg3);
}

s32 func_0000BCD8(void) {
    func_0000C174();
    return 0;
}

s32 func_0000BCF8(void) {
    if (D_00017820 == 0) {

    } else {
        sceKernelSetEventFlag(D_00017820, 8U);
    }
    return 0;
}

s32 func_0000BD34(void) {
    if (D_00017820 == 0) {

    } else {
        sceKernelSetEventFlag(D_00017820, 0x10U);
    }
    return 0;
}

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E10);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E14);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E18);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E1C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E20);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E24);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E28);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E2C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E30);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E34);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E58);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E5C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E60);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E64);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E68);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E6C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E70);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E74);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E78);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E98);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010E9C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010EA0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010EA4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010EA8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010EAC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010EB0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010EB4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010EB8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010EBC);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010EC0);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010EC4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010EC8);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010ECC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000BD70);

void func_0000BE2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00009098(arg0, arg1, arg2, arg3, 0, 1, arg4 & 0xFF, arg5 & 0xFFFF);
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000BE5C);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000BF90);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000C174);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000C248);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000C438);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000C3D4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000C594);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000C638);

void func_0000C738(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0000B974(arg2, arg3, arg0, arg1, arg4);
}

void func_0000C768(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0000B7FC(arg2, arg3, arg0, arg1, arg4);
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000C798);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000C830);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000C9BC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000CCAC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000D050);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000D184);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000D1CC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000D3E4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000D544);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000D714);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000D930);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000DA90);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000DC60);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000DDCC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000DF14);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000E0B4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000E254);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000E3EC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000E2C0);
#endif

#if FW_VERSION >= 282
void func_0000E320(void) {
    func_0000BD70(2, 0);
}

void func_0000E340(void) {
    func_0000BD70(3, 0);
}

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000E360);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000E3A4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000E3FC);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000E454);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000E4BC);

s32 func_0000E4D0(void) {
    return 0;
}

s32 func_0000E4D8(void) {
    return 0;
}

s32 func_0000E4E0(struct Unk_func_0000E4E0_0 *arg0) {
    if (arg0->unk44 != 0) {

    } else {
        func_0000D184((s32) arg0);
    }
    arg0->unk0 = 2;
    return 0;
}

s32 func_0000E524(s32 *arg0) {
    func_0000BD70(4, 0x80411081);
    *arg0 = 0;
    return -1;
}

s32 func_0000E55C(s32 *arg0) {
    *arg0 = 0;
    return -1;
}

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010F40);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010F44);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010F48);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010F4C);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010F50);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010F54);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010FE4);

INCLUDE_RODATA("nonmatchings/pspnet_apctl_009850", D_00010FF4);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000E568);

INCLUDE_ASM("nonmatchings/pspnet_apctl_009850", func_0000E728);

s32 func_0000E8E8(struct Unk_func_0000E8E8_0 *arg0) {
    sceKernelSetEventFlag(arg0->unk10, 4U);
    return 0;
}
#endif
