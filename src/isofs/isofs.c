/* cflags: -O2 -frename-registers */
#include "common.h"
#include "isofs_decls.h"

INCLUDE_ASM("nonmatchings/isofs", func_00000000);

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/isofs", D_00005EA0);

INCLUDE_RODATA("nonmatchings/isofs", D_00005EA8);
#endif

INCLUDE_ASM("nonmatchings/isofs", func_000001B8);

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/isofs", func_00000250);
#endif

#if FW_VERSION == 271
s32 func_00000250(s32 arg0) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_00004DB0();
    var_a0 = 0;
    if (arg0 >= 0) {
        if (arg0 < M2C_FIELD(temp_v0, s32 *, 0xC)) {
            var_a0 = D_00005A00 + (arg0 * 0xAC);
        }
    }
    return var_a0;
}
#endif

#if FW_VERSION == 152
s32 sceIsofsGetFileSystem(s32 arg0) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_00007700();
    var_a0 = 0;
    if (arg0 >= 0) {
        if (arg0 < M2C_FIELD(temp_v0, s32 *, 0xC)) {
            var_a0 = D_00008A40 + (arg0 * 0xA4);
        }
    }
    return var_a0;
}
#endif

#if FW_VERSION < 152
s32 sceIsofsGetFileSystem(s32 arg0) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_00007700();
    var_a0 = 0;
    if (arg0 >= 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0xC) >= arg0) {
            var_a0 = D_00008A40 + (arg0 * 0xA4);
        }
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
s32 sceIsofsGetFileSystem(s32 arg0) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_00004DB0();
    var_a0 = 0;
    if (arg0 >= 0) {
        if (arg0 < M2C_FIELD(temp_v0, s32 *, 0xC)) {
            var_a0 = D_000065C0 + (arg0 * 0xA8);
        }
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/isofs", func_000002F8);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/isofs", D_00005F30);

INCLUDE_RODATA("nonmatchings/isofs", D_00005F38);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00000284);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000003E8(void *arg0) {
    s32 temp_s0;
    s32 var_s0;
    s32 var_s1;

    temp_s0 = arg0 != NULL;
    if (temp_s0 != 0) {

    } else {
        Kprintf(&D_00005F30, &D_00005F38, "sceIsofsLbTerm", 0x61);
        sceKernelAssert(temp_s0, 0);
    }
    var_s1 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        var_s0 = 0;
        do {
            var_s1 += 1;
            func_00000F9C(M2C_FIELD(arg0, s32 *, 0x98) + var_s0 + 8);
            var_s0 += 0x2C;
        } while (var_s1 < (s32) M2C_FIELD(arg0, u8 *, 0x50));
    }
    SysMemForKernel_7B749390(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x98));
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/isofs", func_000003E8);
#endif

#if FW_VERSION == 100
void func_000003E8(void *arg0) {
    s32 temp_s0;
    s32 var_s0;
    s32 var_s1;

    temp_s0 = arg0 != NULL;
    if (temp_s0 != 0) {

    } else {
        Kprintf(&D_00005F30, &D_00005F38, "sceIsofsLbTerm", 0x5C);
        sceKernelAssert(temp_s0, 0);
    }
    var_s1 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        var_s0 = 0;
        do {
            var_s1 += 1;
            func_00000F9C(M2C_FIELD(arg0, s32 *, 0x98) + var_s0 + 8);
            var_s0 += 0x2C;
        } while (var_s1 < (s32) M2C_FIELD(arg0, u8 *, 0x50));
    }
    SysMemForKernel_7B749390(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x98));
}
#endif

#if FW_VERSION < 201
s32 func_00000494(void *arg0, s32 arg1) {
    func_000007FC(M2C_FIELD(arg0, s32 *, 0x98), arg1);
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/isofs", func_00000440);
#endif

#if FW_VERSION >= 300
s32 func_00000440(struct Unk_func_00000440_0 *arg0) {
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (arg0->unk50 != 0) {
        var_s1 = 0;
        do {
            var_s2 += 1;
            func_0000065C(M2C_FIELD(arg0, s32 *, 0x94) + var_s1 + 8);
            var_s1 += 0x2C;
        } while (var_s2 < (s32) arg0->unk50);
    }
    return SysMemForKernel_7B749390(arg0->unk40, M2C_FIELD(arg0, s32 *, 0x94));
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
s32 func_00000440(struct Unk_func_00000440_0 *arg0) {
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (arg0->unk50 != 0) {
        var_s1 = 0;
        do {
            var_s2 += 1;
            func_0000065C(M2C_FIELD(arg0, s32 *, 0x894) + var_s1 + 8);
            var_s1 += 0x2C;
        } while (var_s2 < (s32) arg0->unk50);
    }
    return SysMemForKernel_7B749390(arg0->unk40, M2C_FIELD(arg0, s32 *, 0x894));
}
#endif

#if FW_VERSION == 271
s32 func_00000440(struct Unk_func_00000440_0 *arg0) {
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (arg0->unk50 != 0) {
        var_s1 = 0;
        do {
            var_s2 += 1;
            func_0000065C(arg0->unk98 + var_s1 + 8);
            var_s1 += 0x2C;
        } while (var_s2 < (s32) arg0->unk50);
    }
    return SysMemForKernel_7B749390(arg0->unk40, arg0->unk98);
}
#endif

#if FW_VERSION == 201
s32 func_00000440(struct Unk_func_00000440_0 *arg0) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (arg0->unk50 != 0) {
        var_s1 = 0;
        do {
            var_s2 += 1;
            func_00000790(arg0->unk98 + var_s1 + 8);
            var_s1 += 0x2C;
        } while (var_s2 < (s32) arg0->unk50);
    }
    temp_v0 = SysMemForKernel_7B749390(arg0->unk40, arg0->unk98);
    if (temp_v0 >= 0) {

    } else {
        Kprintf("%sERROR: %s: sceKernelFreeHeapMemory(%x)\n", &D_00005F30, "sceIsofsLbTerm", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 300
s32 func_000004E4(struct Unk_func_000004E4_0 *arg0, s32 arg1) {
    func_000007FC(M2C_FIELD(arg0, s32 *, 0x94), arg1);
    return 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/isofs", D_0000671C);

INCLUDE_RODATA("nonmatchings/isofs", D_00006720);

INCLUDE_RODATA("nonmatchings/isofs", D_00006740);

INCLUDE_RODATA("nonmatchings/isofs", D_00006758);

INCLUDE_RODATA("nonmatchings/isofs", D_00006770);

INCLUDE_RODATA("nonmatchings/isofs", D_00006788);

INCLUDE_RODATA("nonmatchings/isofs", D_0000679C);

INCLUDE_RODATA("nonmatchings/isofs", D_000067B0);

INCLUDE_RODATA("nonmatchings/isofs", D_000067BC);

INCLUDE_RODATA("nonmatchings/isofs", D_000067D4);

INCLUDE_RODATA("nonmatchings/isofs", D_000067E8);

INCLUDE_RODATA("nonmatchings/isofs", D_00006808);

INCLUDE_RODATA("nonmatchings/isofs", D_00006810);

INCLUDE_RODATA("nonmatchings/isofs", D_0000681C);

INCLUDE_RODATA("nonmatchings/isofs", D_00006830);

INCLUDE_RODATA("nonmatchings/isofs", D_00006864);

INCLUDE_RODATA("nonmatchings/isofs", D_0000688C);

INCLUDE_RODATA("nonmatchings/isofs", D_00006898);

INCLUDE_RODATA("nonmatchings/isofs", D_000068A0);

INCLUDE_RODATA("nonmatchings/isofs", D_000068AC);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
s32 func_000004E4(struct Unk_func_000004E4_0 *arg0, s32 arg1) {
    func_000007FC(M2C_FIELD(arg0, s32 *, 0x894), arg1);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 func_000004E4(struct Unk_func_000004E4_0 *arg0, s32 arg1) {
    func_000007FC(arg0->unk98, arg1);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/isofs", func_00000504);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_000005B0);

INCLUDE_ASM("nonmatchings/isofs", func_00000A28);

INCLUDE_ASM("nonmatchings/isofs", func_00000D28);

INCLUDE_ASM("nonmatchings/isofs", func_00000DB4);

s32 func_00000E6C(void) {
    s32 temp_s0;

    temp_s0 = func_00007700();
    func_00000D28();
    SysMemForKernel_7B749390(M2C_FIELD(temp_s0, s32 *, 0x20), D_00008A80);
    sceKernelDeleteFpl(M2C_FIELD(temp_s0, s32 *, 0x24));
    sceKernelDeleteHeap(D_00008A90);
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/isofs", D_00005F98);

INCLUDE_RODATA("nonmatchings/isofs", D_00005FA0);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/isofs", D_00005FCC);

INCLUDE_RODATA("nonmatchings/isofs", D_00005FE0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00000EBC);

INCLUDE_ASM("nonmatchings/isofs", func_00000F9C);
#else
INCLUDE_ASM("nonmatchings/isofs", func_00000620);
#endif

#if FW_VERSION >= 271
s32 func_000006EC(void) {
    s32 temp_s0;

    temp_s0 = func_00004DB0();
    func_00000620();
    SysMemForKernel_7B749390(M2C_FIELD(temp_s0, s32 *, 0x1C), D_00005A04);
    sceKernelDeleteFpl(M2C_FIELD(temp_s0, s32 *, 0x20));
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 func_000006EC(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_00004DB0();
    func_00000620();
    temp_v0 = SysMemForKernel_7B749390(M2C_FIELD(temp_s0, s32 *, 0x1C), D_000067C4);
    if (temp_v0 != 0) {
        Kprintf(&D_00005FE0, &D_00005F98, "sceIsofsCacheTerm", temp_v0);
    }
    sceKernelDeleteFpl(M2C_FIELD(temp_s0, s32 *, 0x20));
    return 0;
}
#endif

#if FW_VERSION == 201
s32 func_000006EC(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_00004DB0();
    func_00000620();
    temp_v0 = SysMemForKernel_7B749390(M2C_FIELD(temp_s0, s32 *, 0x1C), D_000065C4);
    if (temp_v0 != 0) {
        Kprintf(&D_00005FE0, &D_00005F98, "sceIsofsCacheTerm", temp_v0);
    }
    sceKernelDeleteFpl(M2C_FIELD(temp_s0, s32 *, 0x20));
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/isofs", func_00000760);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/isofs", func_0000065C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/isofs", func_00000790);
#endif

INCLUDE_ASM("nonmatchings/isofs", func_000007FC);

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/isofs", D_00006070);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_000010A4);

INCLUDE_RODATA("nonmatchings/isofs", D_000084D8);

INCLUDE_ASM("nonmatchings/isofs", func_00001208);

INCLUDE_ASM("nonmatchings/isofs", func_00001350);

INCLUDE_ASM("nonmatchings/isofs", func_000014A8);

INCLUDE_ASM("nonmatchings/isofs", func_000016F4);
#else
INCLUDE_ASM("nonmatchings/isofs", func_00000890);

INCLUDE_ASM("nonmatchings/isofs", func_00000988);

INCLUDE_ASM("nonmatchings/isofs", func_00000AB0);

INCLUDE_ASM("nonmatchings/isofs", func_00000BE4);

INCLUDE_ASM("nonmatchings/isofs", func_00000D00);
#endif

INCLUDE_ASM("nonmatchings/isofs", func_00000DA8);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/isofs", func_00000CAC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00001914);

INCLUDE_ASM("nonmatchings/isofs", func_00001A04);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/isofs", func_00001BBC);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/isofs", func_00001B84);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/isofs", func_00000E3C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/isofs", func_00000EBC);

INCLUDE_ASM("nonmatchings/isofs", func_00000FCC);

INCLUDE_ASM("nonmatchings/isofs", func_000010AC);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/isofs", func_000010A0);

INCLUDE_ASM("nonmatchings/isofs", func_000012F0);

INCLUDE_ASM("nonmatchings/isofs", func_00001394);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/isofs", func_0000125C);

INCLUDE_ASM("nonmatchings/isofs", func_00001498);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/isofs", func_0000140C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/isofs", D_000060F8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00001D0C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/isofs", D_000060FC);

INCLUDE_RODATA("nonmatchings/isofs", D_00006128);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00001FB4);

INCLUDE_ASM("nonmatchings/isofs", func_000022D0);

INCLUDE_ASM("nonmatchings/isofs", func_00002450);

INCLUDE_ASM("nonmatchings/isofs", func_00002604);

INCLUDE_ASM("nonmatchings/isofs", func_0000274C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/isofs", func_000015D8);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/isofs", func_0000170C);

INCLUDE_ASM("nonmatchings/isofs", func_00001778);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/isofs", func_00001A4C);
#endif

#if FW_VERSION >= 300
s32 func_00001A4C(void *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x98);
        if (temp_v1 != 0) {
            SysMemForKernel_7B749390(M2C_FIELD(arg0, s32 *, 0x40), temp_v1);
            M2C_FIELD(arg0, s32 *, 0x98) = 0;
        }
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x90);
        if (temp_a0 != 0) {
            SysMemForKernel_7B749390(M2C_FIELD(arg0, s32 *, 0x40), temp_a0);
            M2C_FIELD(arg0, s32 *, 0x90) = 0;
        }
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
s32 func_00001A4C(void *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x898);
        if (temp_v1 != 0) {
            SysMemForKernel_7B749390(M2C_FIELD(arg0, s32 *, 0x40), temp_v1);
            M2C_FIELD(arg0, s32 *, 0x898) = 0;
        }
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x890);
        if (temp_a0 != 0) {
            SysMemForKernel_7B749390(M2C_FIELD(arg0, s32 *, 0x40), temp_a0);
            M2C_FIELD(arg0, s32 *, 0x890) = 0;
        }
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 271
s32 func_00001A4C(void *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x9C);
        if (temp_v1 != 0) {
            SysMemForKernel_7B749390(M2C_FIELD(arg0, s32 *, 0x40), temp_v1);
            M2C_FIELD(arg0, s32 *, 0x9C) = 0;
        }
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x94);
        if (temp_a0 != 0) {
            SysMemForKernel_7B749390(M2C_FIELD(arg0, s32 *, 0x40), temp_a0);
            M2C_FIELD(arg0, s32 *, 0x94) = 0;
        }
        var_v0 = 0;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/isofs", func_00001B0C);

INCLUDE_ASM("nonmatchings/isofs", func_00001C5C);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/isofs", func_00001CC8);
#endif

#if FW_VERSION >= 271
INCLUDE_RODATA("nonmatchings/isofs", D_000060F8);
#endif

INCLUDE_RODATA("nonmatchings/isofs", D_000061C8);

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/isofs", D_00006908);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/isofs", func_00001CC8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00002DDC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00003308);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/isofs", func_000032D8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_000034EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_0000376C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/isofs", func_000036B0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00003A24);

void func_00003AE8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0x2E;
    M2C_FIELD(arg0, s8 *, 1) = 0;
}
#else
INCLUDE_ASM("nonmatchings/isofs", func_00001F44);

INCLUDE_ASM("nonmatchings/isofs", func_00002024);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/isofs", func_000020FC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/isofs", func_00002150);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/isofs", func_000022B8);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/isofs", func_00002344);

void func_00002364(struct Unk_func_00002364_0 *arg0) {
    arg0->unk0 = 0x2E;
    arg0->unk1 = 0;
}

INCLUDE_ASM("nonmatchings/isofs", func_00002374);
#else
s32 func_00002374(void *arg0) {
    s32 var_v1;

    var_v1 = 0x80010016;
    if (arg0 != NULL) {
        var_v1 = func_00001A4C(arg0);
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 330
void func_00002328(void) {
    D_00007B40 = 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/isofs", D_000086B0);

INCLUDE_ASM("nonmatchings/isofs", func_00003B28);

INCLUDE_ASM("nonmatchings/isofs", func_00003D1C);

INCLUDE_ASM("nonmatchings/isofs", func_00003E30);
#else
INCLUDE_ASM("nonmatchings/isofs", func_000023A4);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/isofs", func_000022CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/isofs", func_000024C4);

INCLUDE_ASM("nonmatchings/isofs", func_00002528);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/isofs", func_000026E4);

INCLUDE_ASM("nonmatchings/isofs", func_000027C0);

INCLUDE_ASM("nonmatchings/isofs", func_000028B4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00004538);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/isofs", func_00002B40);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/isofs", func_00002D7C);
#endif

INCLUDE_RODATA("nonmatchings/isofs", D_000061E0);

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/isofs", D_0000642C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/isofs", D_0000873C);

INCLUDE_RODATA("nonmatchings/isofs", D_00008750);

INCLUDE_RODATA("nonmatchings/isofs", D_00008770);

INCLUDE_ASM("nonmatchings/isofs", func_00004A60);

INCLUDE_ASM("nonmatchings/isofs", func_00004D70);

INCLUDE_ASM("nonmatchings/isofs", func_00004E3C);

INCLUDE_ASM("nonmatchings/isofs", func_00004F08);

void func_00004FC4(void) {
    sceKernelDeleteHeap(D_00009AC0);
}

s32 func_00004FE8(void) {
    return D_00009B80;
}

s32 func_00004FF4(void) {
    return D_00009BC0;
}

s32 func_00005000(void) {
    return D_00009B00;
}

s32 func_0000500C(void) {
    return D_00009B40;
}

s32 func_00005018(void) {
    return D_00009C00;
}

u8 func_00005024(void) {
    return D_00009C82;
}

u8 func_00005030(void) {
    return D_00009C81;
}

s32 func_0000503C(void) {
    return D_00009C8C;
}

u16 func_00005048(void) {
    return D_00009C86;
}

u8 func_00005054(void) {
    return D_00009C84;
}

u8 func_00005060(void) {
    return D_00009C83;
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/isofs", func_0000506C);
#endif

#if FW_VERSION < 152
s32 func_0000506C(u32 arg0) {
    s32 temp_s1;
    s32 var_v0;

    if (sceUmd9660_driver_2C6C3F4C() < arg0) {
        temp_s1 = (arg0 - sceUmd9660_driver_2C6C3F4C()) - 1;
        var_v0 = sceUmd9660_driver_C7CD9CE8() + temp_s1;
    } else {
        var_v0 = sceUmd9660_driver_44EF600C() + arg0;
    }
    return var_v0;
}

void func_000050CC(void *arg0) {
    sceUmd9660_driver_DB1AC979(M2C_FIELD(arg0, s32 *, 0xA0));
}
#endif

INCLUDE_RODATA("nonmatchings/isofs", D_000061E4);

INCLUDE_RODATA("nonmatchings/isofs", D_000061EC);

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/isofs", D_00006494);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/isofs", func_00002D7C);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/isofs", D_00006200);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_000050E8);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/isofs", D_00006224);
#endif

INCLUDE_ASM("nonmatchings/isofs", func_00002E28);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/isofs", func_00002FA0);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/isofs", func_000027B0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/isofs", func_00002FE4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/isofs", func_000053C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/isofs", func_00005440);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/isofs", func_000053D4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_0000576C);

INCLUDE_ASM("nonmatchings/isofs", func_00005908);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/isofs", func_0000327C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/isofs", func_000033F0);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/isofs", D_00006318);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00005CD4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/isofs", func_00005C50);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00005F50);

INCLUDE_ASM("nonmatchings/isofs", func_00006028);

INCLUDE_ASM("nonmatchings/isofs", func_00006114);

INCLUDE_ASM("nonmatchings/isofs", func_00006248);

INCLUDE_ASM("nonmatchings/isofs", func_00006324);
#else
INCLUDE_ASM("nonmatchings/isofs", func_000037A4);

INCLUDE_ASM("nonmatchings/isofs", func_00003ADC);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/isofs", func_00003BB4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 func_00003BB4(struct Unk_func_00003BB4_0 *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_v0;
    void *temp_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = sceIsofsGetFileSystem(arg0->unk4);
        temp_v0_2 = sceKernelWaitSema(M2C_FIELD(temp_v0, s32 *, 0x58), 1, NULL);
        if (temp_v0_2 >= 0) {
            temp_s1 = arg0->unk10;
            temp_s0 = sceKernelCpuSuspendIntr();
            func_00004E30(temp_s1);
            sceKernelCpuResumeIntr(temp_s0);
            sceKernelFreeFpl(D_00007608.unk20, M2C_FIELD(temp_s1, void **, 8));
            SysMemForKernel_7B749390(D_00007608.unk1C, temp_s1);
            arg0->unk10 = 0;
            sceKernelSignalSema(M2C_FIELD(temp_v0, s32 *, 0x58), 1);
            var_v0 = temp_v0_2;
        } else {
            Kprintf(&D_00006200, &D_00006224, "isofs_dclose", temp_v0_2);
            var_v0 = temp_v0_2;
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION == 201
s32 func_00003BB4(struct Unk_func_00003BB4_0 *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_v0;
    struct Unk_func_00003BB4_temp_v0 *temp_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = sceIsofsGetFileSystem(arg0->unk4);
        temp_v0_2 = sceKernelWaitSema(temp_v0->unk58, 1, NULL);
        if (temp_v0_2 >= 0) {
            temp_s1 = arg0->unk10;
            temp_s0 = sceKernelCpuSuspendIntr();
            func_00004E30(temp_s1);
            sceKernelCpuResumeIntr(temp_s0);
            sceKernelFreeFpl(D_00007608.unk20, M2C_FIELD(temp_s1, void **, 8));
            SysMemForKernel_7B749390(D_00007608.unk1C, temp_s1);
            arg0->unk10 = 0;
            sceKernelSignalSema(temp_v0->unk58, 1);
            var_v0 = temp_v0_2;
        } else {
            Kprintf(&D_00006200, &D_00006224, "isofs_dclose", temp_v0_2);
            var_v0 = temp_v0_2;
        }
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/isofs", func_00003CA0);

INCLUDE_ASM("nonmatchings/isofs", func_00003D6C);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/isofs", func_00003F20);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/isofs", func_00003DD4);
#endif

INCLUDE_ASM("nonmatchings/isofs", func_00004024);

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 func_00006720(s32 arg0) {
    return !(arg0 & 0xF02) ? 0 : 0x8001B004;
}
#endif

#if FW_VERSION < 151
s32 func_0000664C(s32 arg0) {
    return (-((arg0 & 0xF02) == 0) & 0x7FFE4FFC) - 0x7FFE4FFC;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_0000666C);

INCLUDE_ASM("nonmatchings/isofs", func_0000692C);

INCLUDE_ASM("nonmatchings/isofs", func_00006B34);

INCLUDE_ASM("nonmatchings/isofs", func_00006C90);

INCLUDE_ASM("nonmatchings/isofs", func_00006E18);

INCLUDE_ASM("nonmatchings/isofs", func_00006FCC);

INCLUDE_ASM("nonmatchings/isofs", func_000072C4);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_000074FC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/isofs", func_0000756C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/isofs", func_000073FC);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/isofs", func_000075C0);
#endif

#if FW_VERSION >= 201
s32 func_00004064(s32 arg0) {
    return !(arg0 & 0xF02) ? 0 : 0x8001B004;
}

INCLUDE_ASM("nonmatchings/isofs", func_00004078);

INCLUDE_ASM("nonmatchings/isofs", func_0000432C);

INCLUDE_ASM("nonmatchings/isofs", func_000044CC);

INCLUDE_ASM("nonmatchings/isofs", func_00004624);

INCLUDE_ASM("nonmatchings/isofs", func_00004780);
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/isofs", func_00004614);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/isofs", D_000059C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/isofs", func_000048CC);
#endif

#if FW_VERSION != 102
INCLUDE_ASM("nonmatchings/isofs", module_start);
#endif

#if FW_VERSION < 201
s32 func_00007700(void) {
    return (s32) &D_00009C40;
}
#endif

#if (FW_VERSION >= 150 && FW_VERSION < 201) || FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/isofs", module_reboot_before);
#endif

#if FW_VERSION < 150
s32 func_0000770C(void) {
    return 0x8001B000;
}

s32 func_00007718(void) {
    return 0x8001B000;
}

s32 func_00007724(void) {
    return 0x8001B000;
}

s32 func_00007730(void) {
    return 0x8001B000;
}

s32 func_0000773C(void) {
    return 0x8001B000;
}

s32 func_00007748(void) {
    return 0x8001B000;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00007754);

INCLUDE_ASM("nonmatchings/isofs", func_000079AC);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/isofs", func_00007ED8);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/isofs", func_00007B0C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00007E48);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/isofs", func_00007F88);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00007FC0);
#endif

#if FW_VERSION == 100
s32 func_00007FC0(s32 arg0) {
    D_00009C70 = sceUmdRegisterInsertEjectUMDCallBack(&func_000073FC, arg0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00007FF0(void) {
    sceUmdManUnRegisterInsertEjectUMDCallBack(0);
    return 0;
}
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/isofs", func_00007FF0);
#endif

#if FW_VERSION == 100
s32 func_00007FF0(void) {
    sceUmdUnRegisterInsertEjectUMDCallBack(D_00009C70);
    return 0;
}
#endif

#if FW_VERSION >= 201
s32 func_00004DB0(void) {
    return (s32) &D_00007608;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/isofs", func_000042BC);

s32 func_00002D7C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/isofs", module_reboot_before);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/isofs", func_00004E30);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/isofs", func_000043C4);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/isofs", func_0000433C);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/isofs", func_0000450C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/isofs", func_00004AD4);

INCLUDE_ASM("nonmatchings/isofs", func_00004CE8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/isofs", func_00004E64);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/isofs", func_00005010);

INCLUDE_ASM("nonmatchings/isofs", func_00005250);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/isofs", func_00005340);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/isofs", func_000054EC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/isofs", func_00005400);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/isofs", func_00005878);
#endif

#if FW_VERSION >= 271
s32 func_000054D4(s32 arg0) {
    return __builtin_allegrex_min(sceUmdManRegisterInsertEjectUMDCallBack(0x20, &func_00004614, arg0), 0);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/isofs", func_00005970);
#endif

#if FW_VERSION == 201
s32 func_00005970(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    temp_s0 = __builtin_allegrex_min(sceUmdManRegisterInsertEjectUMDCallBack(0x20, &func_000048CC, arg0), 0);
    var_v0 = 0;
    if (temp_s0 != 0) {
        Kprintf("%sERROR: %s: sceIsofsIntrRegisterMediumCallBack(%x)\n", "isofs: ", "sceIsofsIntrInit", temp_s0);
        var_v0 = temp_s0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201
s32 func_000059DC(void) {
    sceUmdManUnRegisterInsertEjectUMDCallBack(0x20);
    return 0;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/isofs", func_00004D18);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/isofs", func_00004D38);

INCLUDE_ASM("nonmatchings/isofs", func_00004E38);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/isofs", func_00005048);

INCLUDE_ASM("nonmatchings/isofs", func_00005410);

INCLUDE_ASM("nonmatchings/isofs", func_00005760);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/isofs", func_00004E48);

INCLUDE_ASM("nonmatchings/isofs", func_00004F54);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/isofs", func_00005170);

INCLUDE_ASM("nonmatchings/isofs", func_00005294);

INCLUDE_ASM("nonmatchings/isofs", func_000055E8);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/isofs", func_00005894);
#endif

#if FW_VERSION >= 300
s32 func_00005908(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xAC) = -1;
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
s32 func_00005908(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x8AC) = -1;
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/isofs", func_00005928);

INCLUDE_ASM("nonmatchings/isofs", func_00005988);

INCLUDE_ASM("nonmatchings/isofs", func_000059EC);

INCLUDE_ASM("nonmatchings/isofs", func_00005A50);

INCLUDE_ASM("nonmatchings/isofs", func_00005A9C);

INCLUDE_ASM("nonmatchings/isofs", func_00005AE8);

INCLUDE_ASM("nonmatchings/isofs", func_00005B34);

INCLUDE_ASM("nonmatchings/isofs", func_00005B80);

INCLUDE_ASM("nonmatchings/isofs", func_00005BCC);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/isofs", func_00005AE4);

INCLUDE_ASM("nonmatchings/isofs", func_00005B30);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/isofs", func_00005C18);

INCLUDE_ASM("nonmatchings/isofs", func_00005C7C);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/isofs", func_00005CD4);

INCLUDE_ASM("nonmatchings/isofs", func_00005D20);

INCLUDE_ASM("nonmatchings/isofs", func_00005D70);

INCLUDE_ASM("nonmatchings/isofs", func_00005DC0);

s32 func_00005E10(void) {
    return 0x80010086;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/isofs", func_00005CC4);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
void func_00005E1C(s32 arg0, void *arg1, u32 arg2) {
    sceIoDevctl(arg0 + 0x20, 0x01E18035, arg1, arg2, NULL, 0U);
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/isofs", func_00005E50);

INCLUDE_ASM("nonmatchings/isofs", func_00005EC0);

INCLUDE_RODATA("nonmatchings/isofs", D_000063EC);

INCLUDE_RODATA("nonmatchings/isofs", D_000063F0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/isofs", D_00006428);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/isofs", D_0000641C);
#endif
