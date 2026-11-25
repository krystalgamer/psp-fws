/* cflags: -O2 -frename-registers */
#include "common.h"
#include "isofs_decls.h"

INCLUDE_ASM("nonmatchings/isofs", func_00000000);

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/isofs", D_00005EA0);

INCLUDE_RODATA("nonmatchings/isofs", D_00005EA8);
#endif

INCLUDE_ASM("nonmatchings/isofs", func_000001B8);

#if FW_VERSION == 152
s32 sceIsofs_driver_19F9734D(s32 arg0) {
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
s32 sceIsofs_driver_19F9734D(s32 arg0) {
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

#if FW_VERSION >= 201
s32 sceIsofs_driver_19F9734D(s32 arg0) {
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

INCLUDE_ASM("nonmatchings/isofs", func_000002F8);
#endif

INCLUDE_RODATA("nonmatchings/isofs", D_00005F30);

INCLUDE_RODATA("nonmatchings/isofs", D_00005F38);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00000284);

INCLUDE_ASM("nonmatchings/isofs", func_000003E8);

s32 func_00000494(void *arg0, s32 arg1) {
    func_000007FC(M2C_FIELD(arg0, s32 *, 0x98), arg1);
    return 0;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/isofs", func_00000440);
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
        KDebugForKernel_84F370BC("%sERROR: %s: sceKernelFreeHeapMemory(%x)\n", &D_00005F30, "sceIsofsLbTerm", temp_v0);
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 201
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
    SysMemForKernel_C9805775(D_00008A90);
    return 0;
}
#else
INCLUDE_RODATA("nonmatchings/isofs", D_00005F98);

INCLUDE_RODATA("nonmatchings/isofs", D_00005FA0);
#endif

INCLUDE_RODATA("nonmatchings/isofs", D_00005FCC);

INCLUDE_RODATA("nonmatchings/isofs", D_00005FE0);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00000EBC);

INCLUDE_ASM("nonmatchings/isofs", func_00000F9C);
#else
INCLUDE_ASM("nonmatchings/isofs", func_00000620);
#endif

#if FW_VERSION >= 250
s32 func_000006EC(void) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = func_00004DB0();
    func_00000620();
    temp_v0 = SysMemForKernel_7B749390(M2C_FIELD(temp_s0, s32 *, 0x1C), D_000067C4);
    if (temp_v0 != 0) {
        KDebugForKernel_84F370BC(&D_00005FE0, &D_00005F98, "sceIsofsCacheTerm", temp_v0);
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
        KDebugForKernel_84F370BC(&D_00005FE0, &D_00005F98, "sceIsofsCacheTerm", temp_v0);
    }
    sceKernelDeleteFpl(M2C_FIELD(temp_s0, s32 *, 0x20));
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/isofs", func_00000760);

INCLUDE_ASM("nonmatchings/isofs", func_00000790);
#endif

INCLUDE_ASM("nonmatchings/isofs", func_000007FC);

INCLUDE_RODATA("nonmatchings/isofs", D_00006070);

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

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/isofs", func_00000E3C);

INCLUDE_ASM("nonmatchings/isofs", func_00000EBC);

INCLUDE_ASM("nonmatchings/isofs", func_00000FCC);

INCLUDE_ASM("nonmatchings/isofs", func_000010AC);

INCLUDE_ASM("nonmatchings/isofs", func_0000125C);

INCLUDE_ASM("nonmatchings/isofs", func_00001498);
#endif

INCLUDE_RODATA("nonmatchings/isofs", D_000060F8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00001D0C);
#endif

INCLUDE_RODATA("nonmatchings/isofs", D_000060FC);

INCLUDE_RODATA("nonmatchings/isofs", D_00006128);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00001FB4);

INCLUDE_ASM("nonmatchings/isofs", func_000022D0);

INCLUDE_ASM("nonmatchings/isofs", func_00002450);

INCLUDE_ASM("nonmatchings/isofs", func_00002604);

INCLUDE_ASM("nonmatchings/isofs", func_0000274C);
#else
INCLUDE_ASM("nonmatchings/isofs", func_000015D8);

INCLUDE_ASM("nonmatchings/isofs", func_0000170C);

INCLUDE_ASM("nonmatchings/isofs", func_00001778);
#endif

INCLUDE_ASM("nonmatchings/isofs", func_00001A4C);

INCLUDE_ASM("nonmatchings/isofs", func_00001B0C);

INCLUDE_ASM("nonmatchings/isofs", func_00001C5C);

INCLUDE_RODATA("nonmatchings/isofs", D_000061C8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00002DDC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00003308);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/isofs", func_000032D8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_000034EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_0000376C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/isofs", func_000036B0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00003A24);

void func_00003AE8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0x2E;
    M2C_FIELD(arg0, s8 *, 1) = 0;
}
#else
INCLUDE_ASM("nonmatchings/isofs", func_00001CC8);

INCLUDE_ASM("nonmatchings/isofs", func_00001F44);

INCLUDE_ASM("nonmatchings/isofs", func_00002024);

INCLUDE_ASM("nonmatchings/isofs", func_000022B8);

INCLUDE_ASM("nonmatchings/isofs", func_00002344);

void func_00002364(struct Unk_func_00002364_0 *arg0) {
    arg0->unk0 = 0x2E;
    arg0->unk1 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/isofs", func_00002374);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/isofs", D_000086B0);

INCLUDE_ASM("nonmatchings/isofs", func_00003B28);

INCLUDE_ASM("nonmatchings/isofs", func_00003D1C);

INCLUDE_ASM("nonmatchings/isofs", func_00003E30);
#else
INCLUDE_ASM("nonmatchings/isofs", func_000023A4);

INCLUDE_ASM("nonmatchings/isofs", func_000024C4);

INCLUDE_ASM("nonmatchings/isofs", func_00002528);
#endif

INCLUDE_ASM("nonmatchings/isofs", func_000026E4);

INCLUDE_ASM("nonmatchings/isofs", func_000027C0);

INCLUDE_ASM("nonmatchings/isofs", func_000028B4);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00004538);
#else
INCLUDE_ASM("nonmatchings/isofs", func_00002B40);
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
    SysMemForKernel_C9805775(D_00009AC0);
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

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/isofs", func_00002D7C);
#endif

INCLUDE_RODATA("nonmatchings/isofs", D_00006200);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_000050E8);
#endif

INCLUDE_RODATA("nonmatchings/isofs", D_00006224);

INCLUDE_ASM("nonmatchings/isofs", func_00002E28);

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/isofs", func_000053C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/isofs", func_00005440);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/isofs", func_000053D4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_0000576C);

INCLUDE_ASM("nonmatchings/isofs", func_00005908);
#else
INCLUDE_ASM("nonmatchings/isofs", func_00002FA0);

INCLUDE_ASM("nonmatchings/isofs", func_0000327C);

INCLUDE_ASM("nonmatchings/isofs", func_000033F0);
#endif

INCLUDE_RODATA("nonmatchings/isofs", D_00006318);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00005CD4);
#endif

#if FW_VERSION == 100
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

#if FW_VERSION >= 250
s32 func_00003BB4(struct Unk_func_00003BB4_0 *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_v0;
    void *temp_v0;

    var_v0 = 0x80010016;
    if (arg0 != NULL) {
        temp_v0 = sceIsofs_driver_19F9734D(arg0->unk4);
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
            KDebugForKernel_84F370BC(&D_00006200, &D_00006224, "isofs_dclose", temp_v0_2);
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
        temp_v0 = sceIsofs_driver_19F9734D(arg0->unk4);
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
            KDebugForKernel_84F370BC(&D_00006200, &D_00006224, "isofs_dclose", temp_v0_2);
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
INCLUDE_ASM("nonmatchings/isofs", func_0000664C);
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/isofs", func_000073FC);
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

INCLUDE_ASM("nonmatchings/isofs", func_000048CC);
#endif

INCLUDE_ASM("nonmatchings/isofs", module_start);

#if FW_VERSION < 201
s32 func_00007700(void) {
    return (s32) &D_00009C40;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", module_reboot_before);
#endif

#if FW_VERSION == 100
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

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/isofs", func_00007FC0);
#endif

#if FW_VERSION == 100
s32 func_00007FC0(s32 arg0) {
    D_00009C70 = sceUmd_BE17B77C(&func_000073FC, arg0);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00007FF0(void) {
    sceUmdMan_driver_4217E7F5(0);
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00007FF0(void) {
    sceUmd_8EF268AC(D_00009C70);
    return 0;
}
#endif

#if FW_VERSION >= 201
s32 func_00004DB0(void) {
    return (s32) &D_00007608;
}

INCLUDE_ASM("nonmatchings/isofs", module_reboot_before);

INCLUDE_ASM("nonmatchings/isofs", func_00004E30);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/isofs", func_00004E64);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/isofs", func_00005010);

INCLUDE_ASM("nonmatchings/isofs", func_00005250);

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

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/isofs", func_00005970);
#endif

#if FW_VERSION == 201
s32 func_00005970(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    temp_s0 = __builtin_allegrex_min(sceUmdMan_driver_BF8AED79(0x20, &func_000048CC, arg0), 0);
    var_v0 = 0;
    if (temp_s0 != 0) {
        KDebugForKernel_84F370BC("%sERROR: %s: sceIsofsIntrRegisterMediumCallBack(%x)\n", "isofs: ", "sceIsofsIntrInit", temp_s0);
        var_v0 = temp_s0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201
s32 func_000059DC(void) {
    sceUmdMan_driver_4217E7F5(0x20);
    return 0;
}
#endif
