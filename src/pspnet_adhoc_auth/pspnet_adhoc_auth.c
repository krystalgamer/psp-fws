/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "pspnet_adhoc_auth_decls.h"

#if FW_VERSION >= 152 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", sceNetAdhocAuth_driver_86004235);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00000000);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", sceNetAdhocAuth_driver_86004235);
#endif

#if FW_VERSION == 100
s32 sceNetAdhocAuth_driver_6074D8F1(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    if (D_00003FF0 > 0) {
        sceNetIfhandle_driver_773FC77C();
        func_000011F8();
        func_00001290();
        D_00003FF0 = 0;
    }
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_000000D8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_0000025C);

#if FW_VERSION >= 152 && FW_VERSION < 303
s32 sceNetAdhocAuth_driver_6074D8F1(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    if (D_00003FF0 > 0) {
        sceNetIfhandle_driver_773FC77C();
        func_000015AC();
        func_000011F8();
        func_00001290();
        D_00003FF0 = 0;
    }
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION >= 303
s32 sceNetAdhocAuth_driver_6074D8F1(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    if (D_00004610 > 0) {
        sceNetIfhandle_driver_773FC77C();
        func_000018F0();
        func_000015B0();
        func_00001650();
        D_00004610 = 0;
    }
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", module_reboot_before);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", sceNetAdhocAuth_driver_89F2A732);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", sceNetAdhocAuth_driver_2E6AA271);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", sceNetAdhocAuth_driver_6CE209A3);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", sceNetAdhocAuth_driver_2AD8C677);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", sceNetAdhocAuth_driver_BD144DA6);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", sceNetAdhocAuth_driver_CF4D9BED);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", sceNetAdhocAuth_driver_1F9A90B8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", sceNetAdhocAuth_driver_76F26AB0);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_000014AC);

#if FW_VERSION < 303
s32 func_000011F0(void) {
    return 0;
}

s32 func_000011F8(void) {
    return sceNetAdhocAuth_driver_2E6AA271();
}
#else
s32 func_0000158C(void) {
    return __builtin_allegrex_min(func_00003F2C(), 0);
}

void func_000015B0(void) {
    sceNetAdhocAuth_driver_2E6AA271();
    func_00003F80();
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_000015D4);

#if FW_VERSION >= 201 && FW_VERSION < 303
s32 func_00001290(void) {
    if (D_00004600 >= 0) {
        sceKernelDeleteSema((u32) D_00004600);
    }
    D_00004600 = -1;
    return sceMemab_driver_0C134D3F();
}
#endif

#if FW_VERSION < 201
s32 func_00001290(void) {
    sceKernelDeleteSema((u32) D_00004600);
    D_00004600 = 0;
    return sceMemab_driver_0C134D3F();
}
#endif

#if FW_VERSION >= 303
void func_00001650(void) {
    if (D_00004600 >= 0) {
        sceKernelDeleteSema((u32) D_00004600);
    }
    D_00004600 = -1;
    sceMemab_driver_0C134D3F();
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00001690);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00001770);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00001848);

#if FW_VERSION >= 152 && FW_VERSION < 303
s32 func_00001578(void) {
    D_00004498 = 0;
    memset(&D_0000449C, 0, 0x10);
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_000015AC);
#endif

#if FW_VERSION >= 303
s32 func_000018BC(void) {
    D_00004784 = 0;
    memset(&D_00004788, 0, 0x10);
    return 0;
}

void func_000018F0(void) {
}
#endif

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", sceNetAdhocAuth_driver_72AAC6D3);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", sceNetAdhocAuth_driver_312BD812);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", sceNetAdhocAuth_driver_AAB06250);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", sceNetAdhocAuth_driver_015A8A64);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00001B78);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00001B84);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00001CE4);

#if FW_VERSION >= 152 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00001A80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_0000178C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00001A34);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00001DD8);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_0000203C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_000021D8);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00001FE8);
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_000023B4);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00002520);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_0000268C);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_auth", D_0000459C);

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_auth", D_000045A0);

#if FW_VERSION >= 201 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/pspnet_adhoc_auth", D_000044C0);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pspnet_adhoc_auth", D_00003F80);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/pspnet_adhoc_auth", D_000045A4);
#endif

INCLUDE_RODATA("nonmatchings/pspnet_adhoc_auth", D_000045AC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_000027F8);

#if FW_VERSION >= 201 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_0000298C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00002C30);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00002694);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00002A20);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00002934);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00002A58);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00002CFC);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_000032C4);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003540);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_000037C8);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003970);

#if FW_VERSION < 303
s32 func_000034C0(void **arg0) {
    s32 temp_a3;
    void *var_v1;

    var_v1 = *arg0;
    temp_a3 = M2C_FIELD(var_v1, s32 *, 0xC);
    if (!(temp_a3 & 2)) {
        M2C_FIELD(var_v1, s32 *, 0xC) = (s32) (temp_a3 | 2);
        sceKernelSendMbx(M2C_FIELD(var_v1, u32 *, 4), var_v1 + 0xCC);
        var_v1 = *arg0;
    }
    M2C_FIELD(var_v1, s32 *, 0xC0) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 303
s32 func_00003514(void *arg0) {
    s32 temp_a3;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 4);
    temp_a3 = M2C_FIELD(var_v1, s32 *, 0x4F0);
    if (!(temp_a3 & 0x10)) {
        M2C_FIELD(var_v1, s32 *, 0x4F0) = (s32) (temp_a3 | 0x10);
        sceKernelSendMbx(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 4), var_v1 + 0x4A0);
        var_v1 = M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(var_v1, s32 *, 0x4E0) = 0;
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_00003514(void *arg0) {
    s32 temp_a3;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 4);
    temp_a3 = M2C_FIELD(var_v1, s32 *, 0x4E4);
    if (!(temp_a3 & 0x10)) {
        M2C_FIELD(var_v1, s32 *, 0x4E4) = (s32) (temp_a3 | 0x10);
        sceKernelSendMbx(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 4), var_v1 + 0x494);
        var_v1 = M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(var_v1, s32 *, 0x4D4) = 0;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00003514(void *arg0) {
    s32 temp_a3;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 4);
    temp_a3 = M2C_FIELD(var_v1, s32 *, 0x2F0);
    if (!(temp_a3 & 0x10)) {
        M2C_FIELD(var_v1, s32 *, 0x2F0) = (s32) (temp_a3 | 0x10);
        sceKernelSendMbx(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 4), var_v1 + 0x284);
        var_v1 = M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(var_v1, s32 *, 0x2DC) = 0;
    return 0;
}

s32 func_0000356C(void *arg0) {
    s32 temp_a3;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 4);
    temp_a3 = M2C_FIELD(var_v1, s32 *, 0x2F0);
    if (!(temp_a3 & 0x20)) {
        M2C_FIELD(var_v1, s32 *, 0x2F0) = (s32) (temp_a3 | 0x20);
        sceKernelSendMbx(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 4), var_v1 + 0x29C);
        var_v1 = M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(var_v1, s32 *, 0x2E0) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 303
s32 func_000035C4(void *arg0) {
    s32 temp_a3;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 4);
    temp_a3 = M2C_FIELD(var_v1, s32 *, 0x4F0);
    if (!(temp_a3 & 0x40)) {
        M2C_FIELD(var_v1, s32 *, 0x4F0) = (s32) (temp_a3 | 0x40);
        sceKernelSendMbx(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 4), var_v1 + 0x4D0);
        var_v1 = M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(var_v1, s32 *, 0x4E8) = 0;
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_000035C4(void *arg0) {
    s32 temp_a3;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 4);
    temp_a3 = M2C_FIELD(var_v1, s32 *, 0x4E4);
    if (!(temp_a3 & 0x40)) {
        M2C_FIELD(var_v1, s32 *, 0x4E4) = (s32) (temp_a3 | 0x40);
        sceKernelSendMbx(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 4), var_v1 + 0x4C4);
        var_v1 = M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(var_v1, s32 *, 0x4DC) = 0;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_000035C4(void *arg0) {
    s32 temp_a3;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 4);
    temp_a3 = M2C_FIELD(var_v1, s32 *, 0x2F0);
    if (!(temp_a3 & 0x40)) {
        M2C_FIELD(var_v1, s32 *, 0x2F0) = (s32) (temp_a3 | 0x40);
        sceKernelSendMbx(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 4), var_v1 + 0x2CC);
        var_v1 = M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(var_v1, s32 *, 0x2E8) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 303
s32 func_0000361C(void *arg0) {
    s32 temp_a3;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 4);
    temp_a3 = M2C_FIELD(var_v1, s32 *, 0x4F0);
    if (!(temp_a3 & 0x80)) {
        M2C_FIELD(var_v1, s32 *, 0x4F0) = (s32) (temp_a3 | 0x80);
        sceKernelSendMbx(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 4), var_v1 + 0x4B8);
        var_v1 = M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(var_v1, s32 *, 0x4E4) = 0;
    return 0;
}
#endif

#if FW_VERSION == 152
s32 func_0000361C(void *arg0) {
    s32 temp_a3;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 4);
    temp_a3 = M2C_FIELD(var_v1, s32 *, 0x4E4);
    if (!(temp_a3 & 0x80)) {
        M2C_FIELD(var_v1, s32 *, 0x4E4) = (s32) (temp_a3 | 0x80);
        sceKernelSendMbx(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 4), var_v1 + 0x4AC);
        var_v1 = M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(var_v1, s32 *, 0x4D8) = 0;
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_0000361C(void *arg0) {
    s32 temp_a3;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, void **, 4);
    temp_a3 = M2C_FIELD(var_v1, s32 *, 0x2F0);
    if (!(temp_a3 & 0x80)) {
        M2C_FIELD(var_v1, s32 *, 0x2F0) = (s32) (temp_a3 | 0x80);
        sceKernelSendMbx(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u32 *, 4), var_v1 + 0x2B4);
        var_v1 = M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(var_v1, s32 *, 0x2E4) = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003674);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003A54);
#endif

#if FW_VERSION == 303
s32 func_00003A54(void **arg0) {
    s32 temp_a3;
    struct Unk_func_00003A54_var_v1 *var_v1;

    var_v1 = *arg0;
    temp_a3 = var_v1->unkC;
    if (!(temp_a3 & 2)) {
        var_v1->unkC = (s32) (temp_a3 | 2);
        sceKernelSendMbx(var_v1->unk4, (u8 *)var_v1 + 0xCC);
        var_v1 = *arg0;
    }
    var_v1->unkC0 = 0;
    return 0;
}
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003AAC);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003B0C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003B6C);
#endif

#if FW_VERSION == 303
s32 func_00003AA8(struct Unk_func_00003AA8_0 *arg0) {
    s32 temp_a3;
    struct Unk_func_00003AA8_var_v1 *var_v1;

    var_v1 = arg0->unk4;
    temp_a3 = var_v1->unk4F0;
    if (!(temp_a3 & 0x10)) {
        var_v1->unk4F0 = (s32) (temp_a3 | 0x10);
        sceKernelSendMbx(arg0->unk0->unk4, (u8 *)var_v1 + 0x4A0);
        var_v1 = arg0->unk4;
    }
    var_v1->unk4E0 = 0;
    return 0;
}

s32 func_00003B00(struct Unk_func_00003B00_0 *arg0) {
    s32 temp_a3;
    struct Unk_func_00003B00_var_v1 *var_v1;

    var_v1 = arg0->unk4;
    temp_a3 = var_v1->unk4F0;
    if (!(temp_a3 & 0x40)) {
        var_v1->unk4F0 = (s32) (temp_a3 | 0x40);
        sceKernelSendMbx(arg0->unk0->unk4, (u8 *)var_v1 + 0x4D0);
        var_v1 = arg0->unk4;
    }
    var_v1->unk4E8 = 0;
    return 0;
}

s32 func_00003B58(struct Unk_func_00003B58_0 *arg0) {
    s32 temp_a3;
    struct Unk_func_00003B58_var_v1 *var_v1;

    var_v1 = arg0->unk4;
    temp_a3 = var_v1->unk4F0;
    if (!(temp_a3 & 0x80)) {
        var_v1->unk4F0 = (s32) (temp_a3 | 0x80);
        sceKernelSendMbx(arg0->unk0->unk4, (u8 *)var_v1 + 0x4B8);
        var_v1 = arg0->unk4;
    }
    var_v1->unk4E4 = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003BB0);

#if FW_VERSION >= 201 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003BC8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003A04);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003C94);
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003E04);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003E5C);

#if FW_VERSION < 303
void func_000039D4(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}
#else
void func_00003F24(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}
#endif

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003F2C);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003F80);

#if FW_VERSION < 303
s32 func_00003FBC(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelGetThreadId();
    var_v1 = 0;
    if (temp_v0 != D_00003FE4) {
        sceKernelWaitSema(D_00003FE0, 1, NULL);
        D_00003FE4 = temp_v0;
        var_v1 = 1;
    }
    return var_v1;
}
#else
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00003FBC);
#endif

#if FW_VERSION < 303
void func_00003AC8(s32 arg0) {
    if (arg0 == 0) {

    } else {
        D_00003FE4 = -1;
        sceKernelSignalSema(D_00003FE0, 1);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 303
void func_00003DA0(void) {
    if (D_00003FE0 >= 0) {
        sceKernelSignalSema(D_00003FE0, 1);
    }
}
#endif

#if FW_VERSION == 152
void func_00003DA0(void) {
    if (D_00003FE0 > 0) {
        sceKernelSignalSema(D_00003FE0, 1);
    }
}
#endif

#if FW_VERSION >= 303
void func_00004028(s32 arg0) {
    if (arg0 == 0) {

    } else {
        D_00004608 = -1;
        sceKernelSignalSema(D_00004604, 1);
    }
}

void func_00004064(void) {
    if (D_00004604 >= 0) {
        sceKernelSignalSema(D_00004604, 1);
    }
}
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_00004078);

INCLUDE_ASM("nonmatchings/pspnet_adhoc_auth", func_000040C0);
#endif

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}
