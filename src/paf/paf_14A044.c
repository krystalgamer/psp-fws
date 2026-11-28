/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A044);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A330);

s32 func_0014A38C(s8 *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (*arg0 != 0) {
        do {
            var_a1 += 1;
        } while (*(arg0 + var_a1) != 0);
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A3B4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A3E8);

u8 *func_0014A45C(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_v1;
    u8 temp_v0;

    var_a1 = arg1;
    var_v1 = arg0;
    do {
        temp_v0 = *var_a1;
        var_a1 += 1;
        *var_v1 = temp_v0;
        var_v1 += 1;
    } while (temp_v0 != 0);
    return arg0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A47C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A4A4);

u32 func_0014A4E8(struct Unk_func_0014A4E8_0 *arg0) {
    u16 temp_a3;
    u16 temp_v1;
    u16 var_t0;
    u32 var_a1;
    u32 var_t1;
    void *var_a0;

    temp_a3 = arg0->unk3C60;
    var_t0 = 0;
    var_a0 = (u8 *)arg0 + 0x3C64;
    var_t1 = 0;
    var_a1 = 0;
    if (temp_a3 != 0) {
        do {
            temp_v1 = M2C_FIELD(var_a0, u16 *, 0x82);
            var_a0 += 0x84;
            if (var_t0 < temp_v1) {
                var_t0 = temp_v1;
                var_t1 = var_a1;
            }
            var_a1 = (var_a1 + 1) & 0xFFFF;
        } while (var_a1 < temp_a3);
    }
    return var_t1;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A534);

s32 func_0014A56C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 >= 4) {
        var_v1 = func_0014A614(arg0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A5A0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A614);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A668);

s32 func_0014A6D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 == arg3) {
        var_v1 = func_0014A3E8(arg0, arg2, arg1) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A70C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014A820);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014ABDC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014ACD8);
#endif

void __cxa_pure_virtual(void) {
}

INCLUDE_ASM("nonmatchings/paf_14A044", _Znwj);

void _Znaj(void) {
    sce_paf_private_malloc();
}

INCLUDE_ASM("nonmatchings/paf_14A044", _ZdlPv);

void _ZdaPv(void) {
    sce_paf_private_free();
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014AE78);

s32 func_0014AEB0(void) {
    void *sp0;
    s32 sp4;
    s32 temp_v0;

    sce_paf_private_getheaparea1(&sp0, &sp4);
    temp_v0 = Heap_Create(0, sp4, sp0);
    D_001ABCF8 = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_malloc);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_memalign);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_realloc);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", func_00107960);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_calloc);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_free);

#if FW_VERSION == 100 || (FW_VERSION >= 200 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_mtrim);
#else
void sce_paf_private_mtrim(void) {
    if (D_001ABCF8 == 0) {
        func_0014AEB0();
    }
    func_0014B9FC(D_001ABCF8);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_000F4B48);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
s32 func_000F4B48(void) {
    return D_001ABCF8;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_000F4B54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
void func_000F4B54(s32 arg0, s32 arg1) {
    if (D_001ABCF8 != 0) {

    } else {
        func_0014AEB0();
    }
    func_0014BB0C(D_001ABCF8, arg0, arg1);
}
#endif

#if FW_VERSION == 282
s32 func_0014B198(void) {
    return D_001ABCF8;
}

void func_0014B1A4(s32 arg0, s32 arg1) {
    if (D_001ABCF8 != 0) {

    } else {
        func_0014AEB0();
    }
    func_0014BB0C(D_001ABCF8, arg0, arg1);
}
#endif

s32 sce_paf_private_check_leak(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014B20C);

s32 func_0014B244(void) {
    void *sp0;
    s32 sp4;
    s32 temp_v0;

    sce_paf_private_getheaparea2(&sp0, &sp4);
    temp_v0 = Heap_Create(0, sp4, sp0);
    D_001ABCFC = temp_v0;
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_malloc2);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_memalign2);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_realloc2);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_000F4DD8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_0014B428);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_free2);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_mtrim2);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_000F4EE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
void func_000F4EE8(s32 arg0, s32 arg1) {
    if (D_001ABCFC != 0) {

    } else {
        func_0014B244();
    }
    func_0014BB0C(D_001ABCFC, arg0, arg1);
}
#endif

#if FW_VERSION == 282
void func_0014B538(s32 arg0, s32 arg1) {
    if (D_001ABCFC != 0) {

    } else {
        func_0014B244();
    }
    func_0014BB0C(D_001ABCFC, arg0, arg1);
}
#endif

s32 sce_paf_private_check_leak2(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", Heap_Create);

INCLUDE_ASM("nonmatchings/paf_14A044", Heap_Destroy);

INCLUDE_ASM("nonmatchings/paf_14A044", Heap_Alloc);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014B760);

INCLUDE_ASM("nonmatchings/paf_14A044", Heap_Free);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_14A044", Heap_MemAlign);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010825C);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014B9FC);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_14A044", Heap_QueryInfo);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", func_001083F0);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014BB0C);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", Heap_CheckMemoryBounds);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 200) || FW_VERSION == 282
s32 Heap_CheckMemoryBounds(void) {
    sceKernelResumeDispatchThread(sceKernelSuspendDispatchThread());
    return 0;
}
#endif

#if FW_VERSION == 100
s32 Heap_CheckMemoryBounds(void) {
    s32 temp_v0;

    temp_v0 = sceKernelSuspendDispatchThread();
    D_0013F6FC = temp_v0;
    sceKernelResumeDispatchThread(temp_v0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014BBD0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014BC14);

void func_0014BCD8(s8 *arg0) {
    *arg0 = 0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014BCE0);

s32 func_0014BE68(s32 arg0) {
    s32 temp_v1;

    if (arg0 == 0) {
        return D_001ABD08;
    }
    if ((D_001ABD04 == 0) || (arg0 != D_001ABD04)) {
        return -1;
    }
    temp_v1 = D_001ABD08;
    D_001ABD04 = 0;
    D_001ABD08 = temp_v1 + arg0;
    return temp_v1;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014BEB0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014BF14);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014C220);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014C6C4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014C808);

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_0014B278);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_14A044", func_001092E8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_0014C920);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014CB80);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014CDBC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014CDE8);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014CE08);

s32 func_0014D0E0(void) {
    func_0014C808(D_001ABD00);
    return 0;
}

#if FW_VERSION >= 270 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_0014BA5C);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/paf_14A044", func_00109AF4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D104);
#endif

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1354);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00123364);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1454);
#endif

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A14E4);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A15E4);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A16E4);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1758);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00135D8C);
#endif

#if FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00135DC0);
#endif

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A17D0);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A17FC);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_14A044", D_0019520C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_00109B3C);
#else
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A181C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D150);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D314);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private___assert);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_toupper);
#else
s8 sce_paf_private_toupper(s8 arg0) {
    s8 var_v0;

    var_v0 = arg0;
    if (sce_paf_private_look_ctype_table((s32) arg0) & 2) {
        var_v0 = arg0 - 0x20;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_tolower);
#else
s8 sce_paf_private_tolower(s8 arg0) {
    s8 var_v0;

    var_v0 = arg0;
    if (sce_paf_private_look_ctype_table((s32) arg0) & 1) {
        var_v0 = arg0 + 0x20;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_look_ctype_table);

#if FW_VERSION >= 150 && FW_VERSION < 200
s32 *func_00109EEC(void) {
    return &D_00138CC5;
}
#endif

#if FW_VERSION == 100
M2C_UNK *func_00109EEC(void) {
    return &D_00138CC5;
}
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D504);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D564);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_fabsf);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D5DC);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_acosf);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D6FC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D754);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_atan2f);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014D870);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_sinf);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_cosf);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_tanf);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_sqrtf);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1980);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_logf);
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_ceilf);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010A5A4);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010A634);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014DD34);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014DD80);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_floorf);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014DE90);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_powf);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A15E0);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A0450);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_14A044", D_0019F480);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_14A044", D_0019B900);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00199DC0);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_memchr);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00195D00);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001953C0);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001242D4);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00121AD4);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00123954);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010A93C);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_memcmp);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_memcpy);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_memmove);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_memset);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_bcopy);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010AB1C);
#endif

#if FW_VERSION < 200
void func_0010AB1C(s32 arg0, s32 arg1) {
    sce_paf_private_memmove(arg1, arg0);
}
#endif

#if FW_VERSION == 282
void sce_paf_private_bcopy(s32 arg0, M2C_UNK arg1) {
    sce_paf_private_memmove(arg1, arg0);
}
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_bzero);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014E290);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014E2B4);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_001459D4);
#endif

#if FW_VERSION == 282
void func_0014E2FC(struct Unk_func_0014E2FC_0 *arg0, s32 arg1) {
    if (arg1 < 0x100) {
        arg0->unk4 = (s32) (arg0->unk4 + 1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_sprintf);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_snprintf);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_vsprintf);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_vsnprintf);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010AC9C);
#endif

void func_0014E438(void) {
    sce_paf_private_memset(&D_001AF50C, 0, 0x2020);
}

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A19D0);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_fopen);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_00145D78);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_fflush);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0010AF44);
#endif

#if FW_VERSION < 200
s32 func_0010AF44(void) {
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_0014E6A0);

s32 sce_paf_private_fflush(void) {
    return 0;
}

s32 func_0014E7FC(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_fread);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_fwrite);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_fclose);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_fseek);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_printf);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_wprintf);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_fgetc);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014EB5C);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_fputc);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_ftell);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", func_000F65AC);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 200
void func_000F65AC(void *arg0) {
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 4) >= 0)) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
}
#endif

#if FW_VERSION < 200
s32 func_0010B3EC(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 4) >= 0)) {
        var_v1 = ((u32) M2C_FIELD(arg0, u32 *, 8) >> 1) & 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
s32 func_0010B420(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 4) >= 0)) {
        var_v1 = M2C_FIELD(arg0, s32 *, 8) & 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
void func_0014EC0C(struct Unk_func_0014EC0C_0 *arg0) {
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 >= 0)) {
        arg0->unk8 = 0;
    }
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_feof);
#endif

#if FW_VERSION == 282
s32 sce_paf_private_feof(struct Unk_scePaf_680513D9_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 >= 0)) {
        var_v1 = __builtin_allegrex_ext(arg0->unk8, 1, 1);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_ferror);
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 200) || FW_VERSION == 282
s32 sce_paf_private_ferror(struct Unk_scePaf_0B4C0DB6_0 *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0 != NULL) && (arg0->unk0 != 0) && (arg0->unk4 >= 0)) {
        var_v1 = arg0->unk8 & 1;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014EC94);

void sce_paf_private_atoi(s32 arg0) {
    sce_paf_private_strtol(arg0, 0, 0xA);
}

void sce_paf_private_atol(s32 arg0) {
    sce_paf_private_strtol(arg0, 0, 0xA);
}

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_abs);
#endif

#if FW_VERSION == 282
s32 sce_paf_private_abs(s32 arg0) {
    return __builtin_allegrex_max(arg0, -arg0);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_14A044", func_000F66A0);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 200
s32 func_000F66A0(s32 arg0) {
    return __builtin_allegrex_max(arg0, -arg0);
}
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010B4B8);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_rand);

void sce_paf_private_srand(s32 arg0) {
    D_001A4BF4 = arg0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014ED3C);

void sce_paf_private_qsort(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((((arg0 == 0) | (arg3 == 0)) != 0) || (((arg1 == 0) | (arg2 == 0)) != 0)) {

    } else {
        func_0014ED3C(arg0, arg2, arg3, 0, arg1 - 1);
    }
}

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_bsearch);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014F078);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strcat);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strchr);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strcmp);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strcasecmp);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strcpy);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014F3A8);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014F444);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strlen);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strncat);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strncmp);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strncasecmp);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strncpy);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strpbrk);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010BE38);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strrchr);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014F7AC);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strstr);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strtok);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010BFA8);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strtok_r);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strtol);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_strtoul);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010C25C);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014FD1C);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_wcschr);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_wcscmp);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_wcscasecmp);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_wcscpy);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0014FF8C);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_wcslen);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00150030);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_wcsncmp);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_wcsncpy);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00150278);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_wcsrchr);
#else
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010C948);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_00150318);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001503EC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001504C0);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_swprintf);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00150554);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_setjmp);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001506B0);

INCLUDE_ASM("nonmatchings/paf_14A044", sce_paf_private_longjmp);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015081C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00150844);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001508C0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00150920);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1A2C);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1644);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A04B4);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_14A044", D_0019F4E4);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_14A044", D_0019B964);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00199E24);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00195D64);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00195424);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00124330);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00121B30);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001239B0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00136060);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1A34);
#endif

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1C18);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1C1C);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1C20);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1C24);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1C28);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1C4C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001512CC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151B54);

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/paf_14A044", func_0010E1A8);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151B8C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151CC0);

#if FW_VERSION == 100
void func_0010E344(void) {

}

void func_0010E34C(void) {

}

void func_0010E354(void) {

}

void func_0010E35C(void) {

}

s32 func_0010E364(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0010E36C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0010E3D8);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0010E3F8);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151D28);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151D6C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151DB4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151DE8);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151E1C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151E44);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151E6C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151EA8);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1E54);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1E60);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1E70);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1E80);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00151EE4);

void func_00152108(struct Unk_func_00152108_0 *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = arg0->unk10 - 1, arg0->unk10 = temp_v0, (temp_v0 != 0))) {

    } else {
        func_00152A7C();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015215C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152608);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001526A8);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152A7C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152C00);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152CB8);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152D54);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152E28);

s32 func_00152E80(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x50);
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152E8C);

s32 func_00152EC0(struct Unk_func_00152EC0_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk40;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_00152ED4);

s32 func_00152F40(struct Unk_func_00152F40_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = ((arg0->unk14 & 8) == 0) ? 0 : ((u8 *)arg0 + 0x100);
    }
    return var_v0;
}

void func_00152F64(struct Unk_func_00152F64_0 *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        arg0->unk90 = (s32) ((arg0->unk90 & ~arg1) | (arg1 & arg2));
    }
}

s32 func_00152F88(struct Unk_func_00152F88_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk90;
    }
    return var_v0;
}

void func_00152F9C(struct Unk_func_00152F9C_0 *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        arg0->unk94 = (s32) ((arg0->unk94 & ~arg1) | (arg1 & arg2));
    }
}

s32 func_00152FC0(struct Unk_func_00152FC0_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk94;
    }
    return var_v0;
}

s32 func_00152FD4(struct Unk_func_00152FD4_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = ((arg0->unk14 & 1) == 0) ? 0 : ((u8 *)arg0 + 0x98);
    }
    return var_v0;
}

s32 func_00152FF8(struct Unk_func_00152FF8_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = ((arg0->unk14 & 2) == 0) ? 0 : ((u8 *)arg0 + 0xB0);
    }
    return var_v0;
}

s32 func_0015301C(struct Unk_func_0015301C_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = ((arg0->unk14 & 4) == 0) ? 0 : ((u8 *)arg0 + 0xF0);
    }
    return var_v0;
}

s32 func_00153040(struct Unk_func_00153040_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk2C;
    }
    return var_v0;
}

s32 func_00153054(struct Unk_func_00153054_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk30;
    }
    return var_v0;
}

s32 func_00153068(struct Unk_func_00153068_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk34;
    }
    return var_v0;
}

s32 func_0015307C(struct Unk_func_0015307C_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk38;
    }
    return var_v0;
}

s32 func_00153090(struct Unk_func_00153090_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk3C;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_001530A4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001530D4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00153104);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00153134);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00153164);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00153194);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015322C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001532C4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015335C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001533F4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015348C);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1EDC);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1EE8);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1AF8);

INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1B34);
#endif

#if FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00136518);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A09A4);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/paf_14A044", D_0019F9D4);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_14A044", D_0019BE54);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_14A044", D_0019A314);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00196254);
#endif

#if FW_VERSION == 200
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00195914);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00124824);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00122024);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00123EA4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_14A044", D_00136554);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_14A044", D_001A1F24);
#endif

INCLUDE_ASM("nonmatchings/paf_14A044", func_001535F8);

void func_0015383C(struct Unk_func_0015383C_0 *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = arg0->unk14 - 1, arg0->unk14 = temp_v0, (temp_v0 != 0))) {

    } else {
        func_00153FA4();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_00153890);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00153B18);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00153FA4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154020);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015406C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001541D4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015432C);

s32 func_00154584(struct Unk_func_00154584_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk8;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154598);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154718);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001549BC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154AD0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154D0C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154D90);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154E14);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154EA4);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154F30);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00154FF0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001550C8);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00155100);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00155138);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001551DC);

INCLUDE_ASM("nonmatchings/paf_14A044", func_0015529C);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001553B0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001554C0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001556A4);

void func_0015573C(struct Unk_func_0015573C_0 *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = arg0->unk14 - 1, arg0->unk14 = temp_v0, (temp_v0 != 0))) {

    } else {
        func_00155938();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

void *func_00155790(struct Unk_func_00155790_0 *arg0) {
    void *var_v1;

    var_v1 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        arg0->unk14 = (s32) (arg0->unk14 + 1);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_14A044", func_001557B0);

INCLUDE_ASM("nonmatchings/paf_14A044", func_00155938);

INCLUDE_ASM("nonmatchings/paf_14A044", func_001559EC);
