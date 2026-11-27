/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "lftv_plugin_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/lftv_plugin", module_start);

s32 module_stop(void) {
    func_00002CD8();
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_plugin", func_0000015C);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/lftv_plugin", D_0000378C);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003790);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000037A4);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000037BC);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000037C8);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000037D8);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000037E4);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000037F4);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_0000380C);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003820);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003840);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003864);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003868);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003870);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000038EC);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000038F4);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003900);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003914);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_0000392C);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_0000393C);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_0000399C);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003178);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000039E0);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003188);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_0000318C);
#endif

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000180);

#if FW_VERSION == 260
M2C_UNK *func_00000B3C(void) {
    return &D_00003188_v260;
}
#endif

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000031AC);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000031BC);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000031CC);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000031D4);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000031E4);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000031F8);

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003A68);
#endif

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003204);

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/lftv_plugin", D_0000322C);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003ABC);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000030C8);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000030E4);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000030FC);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003258);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003274);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000BB4);
#endif

#if FW_VERSION == 260
void func_00000C00(void) {

}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000C78);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000C8C);

s32 func_00000D00(void) {
    sceKernelPowerLock(0);
    sceKernelDelayThread(0x4C4B40);
    sceKernelPowerUnlock(0);
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000D34);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_plugin", D_0000328C);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/lftv_plugin", D_0000329C);
#endif

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000032B0);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000032DC);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000032EC);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003188_v271);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003318);
#endif

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003324);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_plugin", D_000031A0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003330);
#endif

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_0000333C);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_0000334C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/lftv_plugin", func_000007BC);
#endif

#if FW_VERSION == 271
s32 func_00000AB0(s32 arg0) {
    D_0000326C = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000AC0);

M2C_UNK *func_00000B80(void) {
    return &D_000032AC;
}

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000B8C);

void func_00000C44(void) {

}

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000C4C);

s32 func_00000CC0(void) {
    sceKernelPowerLock(0);
    sceKernelDelayThread(0x4C4B40);
    sceKernelPowerUnlock(0);
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000CF4);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003034);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003038);
#endif

#if FW_VERSION >= 282
s32 func_00000AC0(s32 arg0) {
    D_000033FC = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000AD0);

M2C_UNK *func_00000B90(void) {
    return &D_0000343C;
}
#endif

#if FW_VERSION >= 300
void func_00000C9C(s32 arg0) {
    func_0000301C(arg0);
}

void func_00000CB8(s32 arg0, s32 arg1) {
    func_000030E8(arg0, arg1);
}

void func_00000CD4(s32 arg0, s32 arg1) {
    func_00003138(arg0, arg1);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000B9C);
#endif

#if FW_VERSION >= 300
void func_00000DB4(void) {
    func_00003138(0x2000, 0);
}
#endif

#if FW_VERSION == 282
void func_00000C54(void) {
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000C5C);

s32 func_00000D28(void) {
    sceKernelPowerLock(0);
    sceKernelDelayThread(0x4C4B40);
    sceKernelPowerUnlock(0);
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000D5C);
#endif

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00000F1C);

#if FW_VERSION >= 350
s32 func_000012C0(void) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00003CD0 != 0) {
        sceVshCommonGui_8F414E35(D_00003CD0);
        D_00003CD0 = 0;
        var_v1 = 0;
    }
    return var_v1;
}
#else
s32 func_000012C0(void) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00003410 != 0) {
        _ZN3vsh13MessageDialog10HideDeleteEv(D_00003410);
        D_00003410 = 0;
        var_v1 = 0;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001304);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001324);
#else
INCLUDE_ASM("nonmatchings/lftv_plugin", func_0000138C);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/lftv_plugin", func_000016F4);
#else
void func_000016F4(s32 arg0) {
    s32 temp_v0_2;
    void *temp_v0;
    void *temp_v0_3;

    func_00003138(0x10000, 0);
    temp_v0 = scePaf_DCE3D225(arg0, 1);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, M2C_UNK (**)(M2C_UNK *, M2C_UNK), 4)(&func_00001770, 0);
    }
    func_000012C0();
    temp_v0_2 = scePaf_88784487(&D_000031AC);
    if (temp_v0_2 != 0) {
        temp_v0_3 = scePaf_DCE3D225(temp_v0_2, 1);
        if (temp_v0_3 != NULL) {
            M2C_FIELD(temp_v0_3, M2C_UNK (**)(), 0x70)();
        }
    }
    func_00000AC0(0);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001640);
#else
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001770);
#endif

#if FW_VERSION != 282
INCLUDE_ASM("nonmatchings/lftv_plugin", func_0000186C);
#else
void func_0000186C(void) {
    s32 temp_v0;
    s32 temp_v0_3;
    struct Unk_func_0000186C_temp_v0_2 *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(&D_000031AC);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk70();
        }
    }
    temp_v0_3 = _ZN3paf4View4FindEPKc(&D_0000329C);
    if (temp_v0_3 != 0) {
        D_000033F9 = 1;
        _ZN3paf4View6UnloadEPS0_PFvPKcE(temp_v0_3, &func_000018E0);
    }
}
#endif

#if FW_VERSION >= 300
void func_00001AE0(void) {
    func_00003138(0x02000000, 0);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_plugin", func_000018E0);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001B28);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001C28);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001C54);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001CD0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001DA0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001C54_v260);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001D94);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001E74);
#endif

#if FW_VERSION == 250 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001F04);
#endif

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001FCC);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00001E8C);
#endif

#if FW_VERSION >= 282
s32 func_000020F8(void) {
    sceKernelDelayThread(0x3E8);
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00002118);
#endif

INCLUDE_ASM("nonmatchings/lftv_plugin", func_000021FC);

void func_000022C4(void) {
    func_000021FC(1, 0xFFFF);
}

void func_000022E4(void) {
    func_000021FC(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00002304);

void func_00002334(void) {
    func_00002580();
}

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00002350);

#if FW_VERSION >= 350
void func_0000241C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_C1B0AA0D(arg1);
    }
    func_000027BC(arg0, arg1, var_v0);
}
#else
void func_0000241C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_strlen(arg1);
    }
    func_000027BC(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_plugin", func_0000246C);

#if FW_VERSION >= 350
void func_00002500(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = scePaf_5E4447F6(arg1);
    }
    func_00002868(arg0, arg1, var_v0);
}
#else
void func_00002500(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_wcslen(arg1);
    }
    func_00002868(arg0, arg1, var_v0);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00002550);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00002580);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_000025AC);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_000027BC);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00002868);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00002690);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_0000276C);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_000028A4);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00002628);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_000026D4);

void *func_00002848(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/lftv_plugin", func_0000291C);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_000029F8);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00002B30);
#endif

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00002B84);

#if FW_VERSION >= 350
void func_00002F70(void) {
    sceVshCommonUtil_951BC384(&D_00003D1C, &func_00003164);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00002F70(void) {
    sceVshCommonUtil_622815DD(&D_00003D1C, &func_00003164);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00002F98);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003390);

INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003BF8);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_0000301C);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_000030E8);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00003138);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00003164);
#endif

#if FW_VERSION >= 350
s32 func_000031CC(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_88784487(( M2C_UNK*) ("netconf_plugin"));
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_DCE3D225(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            func_000030E8(0x04000000, -1);
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(), 4)();
            func_00003138(0x04000000, 0);
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
s32 func_000031CC(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(( M2C_UNK*) ("netconf_plugin"));
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            func_000030E8(0x04000000, -1);
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(), 4)();
            func_00003138(0x04000000, 0);
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 350
s32 func_0000323C(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = scePaf_88784487(( M2C_UNK*) ("osk"));
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_DCE3D225(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            func_000030E8(0x400000, -1);
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(), 4)();
            func_00003138(0x400000, 0);
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
s32 func_0000323C(void) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = _ZN3paf4View4FindEPKc(( M2C_UNK*) ("osk"));
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            func_000030E8(0x400000, -1);
            M2C_FIELD(temp_v0_2, M2C_UNK (**)(), 4)();
            func_00003138(0x400000, 0);
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/lftv_plugin", func_000032AC);

void func_0000331C(s32 arg0) {
    func_00003138(0x40000, arg0);
}

INCLUDE_ASM("nonmatchings/lftv_plugin", func_0000333C);

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00003388);

void func_00003404(void) {
    func_00003388(1, 0xFFFF);
}

void func_00003424(void) {
    func_00003388(0, 0xFFFF);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_plugin", func_00002C80);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/lftv_plugin", func_00002CD8);
#endif

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/lftv_plugin", D_00003390);
#endif
