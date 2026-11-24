/* cflags: -O2 -frename-registers */
#include "common.h"
#include "sysmem_decls.h"

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_1C1FBFE7);

INCLUDE_ASM("nonmatchings/sysmem", func_000001A4);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_EFEEBAC7);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2DB687E9);

void func_00000724(void) {
    SysMemForKernel_FEFC8666((s32) "SceSysmemHeap", 0xC, (s32) &D_0000F390, 0, (s32) &D_0000FD88);
}

INCLUDE_ASM("nonmatchings/sysmem", func_0000075C);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_C9805775);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_EB7A74DB);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_636C953B);

INCLUDE_ASM("nonmatchings/sysmem", func_00000980);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_7B749390);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_A823047E);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_B2163AA1);

s32 SysMemForKernel_EFF0C6DD(void) {
    return D_0000FD90;
}

INCLUDE_ASM("nonmatchings/sysmem", func_00000BC0);

INCLUDE_ASM("nonmatchings/sysmem", func_00000C08);

INCLUDE_ASM("nonmatchings/sysmem", func_00000CC0);

INCLUDE_ASM("nonmatchings/sysmem", func_00000D30);

INCLUDE_ASM("nonmatchings/sysmem", func_00000D80);

INCLUDE_ASM("nonmatchings/sysmem", func_00000E08);

INCLUDE_ASM("nonmatchings/sysmem", func_00000ED8);

void func_00000F60(void) {
    SysMemForKernel_FEFC8666((s32) "SceSysmemMemoryPartition", 0x18, (s32) &D_0000F3C0, 0, (s32) &D_0000FD8C);
}

INCLUDE_ASM("nonmatchings/sysmem", func_00000F98);

INCLUDE_ASM("nonmatchings/sysmem", func_000010FC);

s32 func_000011F4(void) {
    return 0x80020002;
}

s32 func_00001200(void) {
    return 0x80020002;
}

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_55A40B2C);

INCLUDE_ASM("nonmatchings/sysmem", func_000012BC);

s32 func_00001318(struct Unk_func_00001318_0 *arg0) {
    u32 temp_a3;
    u32 var_a1;
    struct Unk_func_00001318_var_a0 *var_a0;

    var_a0 = arg0->unk10 + 4;
    var_a1 = 0;
    if (var_a0 != NULL) {
        do {
            if (!(var_a0->unk4 & 1)) {
                temp_a3 = (u32) var_a0->unk8 >> 2;
                var_a1 = (var_a1 < temp_a3) ? temp_a3 : var_a1;
            }
            var_a0 = var_a0->unk0;
        } while (var_a0 != NULL);
    }
    return var_a1 << 8;
}

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_E6581468);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelMaxFreeMemSize);

s32 func_00001478(struct Unk_func_00001478_0 *arg0) {
    s32 var_a0;
    struct Unk_func_00001478_var_v1 *var_v1;

    var_v1 = arg0->unk10 + 4;
    var_a0 = 0;
    if (var_v1 != NULL) {
        do {
            if (!(var_v1->unk4 & 1)) {
                var_a0 += (u32) var_v1->unk8 >> 2;
            }
            var_v1 = var_v1->unk0;
        } while (var_v1 != NULL);
    }
    return var_a0 << 8;
}

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_9697CD32);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelTotalFreeMemSize);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_A2A65F0E);

INCLUDE_ASM("nonmatchings/sysmem", func_0000168C);

INCLUDE_ASM("nonmatchings/sysmem", func_000016EC);

s32 func_000017D8(struct Unk_func_000017D8_0 *arg0) {
    return arg0->unkC;
}

s32 func_000017E0(struct Unk_func_000017E0_0 *arg0) {
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/sysmem", func_000017E8);

INCLUDE_ASM("nonmatchings/sysmem", func_0000184C);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelAllocPartitionMemory);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_CE5544F4);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_5EBE73DE);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_915EF4AC);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_82CCA14F);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2F3B7611);

INCLUDE_ASM("nonmatchings/sysmem", func_00002F48);

INCLUDE_ASM("nonmatchings/sysmem", func_000035F4);

void func_0000373C(void) {
    SysMemForKernel_FEFC8666((s32) "SceSysMemMemoryBlock", 0xC, (s32) &D_0000F3F0, 0, (s32) &D_0000F8C0);
}

INCLUDE_ASM("nonmatchings/sysmem", func_00003774);

INCLUDE_ASM("nonmatchings/sysmem", func_000037F4);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_EE867074);

INCLUDE_ASM("nonmatchings/sysmem", func_00003A1C);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelFreePartitionMemory);

INCLUDE_ASM("nonmatchings/sysmem", func_00003B50);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2A3E5280);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_EB4C0E1B);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetBlockHeadAddr);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E79C);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E7DC);

INCLUDE_ASM("nonmatchings/sysmem", func_00003E04);

INCLUDE_ASM("nonmatchings/sysmem", func_00003EE0);

INCLUDE_ASM("nonmatchings/sysmem", func_00003F68);

INCLUDE_ASM("nonmatchings/sysmem", func_00004350);

INCLUDE_ASM("nonmatchings/sysmem", func_00004398);

INCLUDE_ASM("nonmatchings/sysmem", func_000044C0);

INCLUDE_ASM("nonmatchings/sysmem", func_00004500);

INCLUDE_ASM("nonmatchings/sysmem", func_00004538);

INCLUDE_ASM("nonmatchings/sysmem", func_00004574);

INCLUDE_ASM("nonmatchings/sysmem", func_000045B0);

INCLUDE_ASM("nonmatchings/sysmem", func_00004620);

INCLUDE_ASM("nonmatchings/sysmem", func_00004704);

INCLUDE_ASM("nonmatchings/sysmem", func_00004854);

INCLUDE_ASM("nonmatchings/sysmem", func_000049E0);

INCLUDE_ASM("nonmatchings/sysmem", func_00004A38);

s32 func_00004A60(struct Unk_func_00004A60_0 *arg0) {
    return ((((u32) (arg0->unk4 - 0x10) >> 3) - arg0->unk8) * 8) - 8;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelMemset);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2F808748);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_1C4B1713);

INCLUDE_ASM("nonmatchings/sysmem", func_00005368);

INCLUDE_ASM("nonmatchings/sysmem", func_00005394);

INCLUDE_ASM("nonmatchings/sysmem", func_000053BC);

void func_00005430(u8 *arg0, u8 *arg1) {
    u8 *var_a0;
    u8 *var_a1;
    u8 var_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v0 = *var_a1;
    if (var_v0 != 0) {
        do {
            *var_a0 = var_v0;
            var_a1 += 1;
            var_v0 = *var_a1;
            var_a0 += 1;
        } while (var_v0 != 0);
    }
    *var_a0 = 0;
}

INCLUDE_ASM("nonmatchings/sysmem", func_00005458);

INCLUDE_ASM("nonmatchings/sysmem", func_0000547C);

INCLUDE_ASM("nonmatchings/sysmem", func_000054C8);

INCLUDE_ASM("nonmatchings/sysmem", func_000054FC);

INCLUDE_ASM("nonmatchings/sysmem", func_00005544);

INCLUDE_ASM("nonmatchings/sysmem", func_0000557C);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_97B18FA8);

INCLUDE_ASM("nonmatchings/sysmem", func_00005724);

void func_00005850(void) {
    D_0000F8C4.unk0 = 0x68;
    D_0000F8C4.unk64 = -1;
    D_0000F8C4.unk4 = 0;
    D_0000F8C4.unk8 = 0;
    D_0000F8C4.unk18 = 0;
    D_0000F8C4.unk40 = 0;
    D_0000F8C4.unk44 = 0;
    D_0000F8C4.unk54 = 0;
    D_0000F8C4.unk58 = 0;
    D_0000F8C4.unk5C = 0;
    D_0000F8C4.unk60 = 0;
}

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_E40D3A1D);

INCLUDE_ASM("nonmatchings/sysmem", func_000058DC);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_CE8D3DB3);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_55E4719C);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_6D8E0CDF);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_C7E57B9C);

s32 SysMemForKernel_A262FEF0(s32 *arg0) {
    s32 var_a1;

    var_a1 = 0x80020001;
    if (D_0000F8C4.unk4 & 0x10) {
        var_a1 = 0;
        *arg0 = D_0000F8C4.unk40;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_CBB05241);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_F91FE6AA);

M2C_UNK *SysMemForKernel_CD617A94(void) {
    return &D_0000F8C4;
}

s32 SysMemUserForUser_FC114573(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x1000) {
        var_a0 = D_0000F8C4.unk58;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetCompiledSdkVersion);

s32 SysMemForKernel_DEC0A0D8(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x2000) {
        var_a0 = D_0000F8C4.unk5C;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetCompilerVersion);

s32 SysMemForKernel_7ECBDBD9(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x10000) {
        var_a0 = D_0000F8C4.unk60;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_9C304ED7);

s32 SysMemForKernel_8C0CC205(void) {
    s32 var_a0;

    var_a0 = -1;
    if (D_0000F8C4.unk4 & 0x100000) {
        var_a0 = D_0000F8C4.unk64;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_E9E4D851);

INCLUDE_ASM("nonmatchings/sysmem", func_00005C64);

void SysMemForKernel_7B3E7441(void) {
    *(s32 *)0xBC100040 = (*(s32 *)0xBC100040 & ~3) | 2;
}

void SysMemForKernel_E0058030(void) {
    *(s32 *)0xBC100040 = (*(s32 *)0xBC100040 & ~3) | 1;
}

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_719792F1);

void SysMemForKernel_101C3E59(s32 arg0) {
    *(s32 *)0xBC100040 = (*(s32 *)0xBC100040 & ~3) | (arg0 & 3);
}

INCLUDE_ASM("nonmatchings/sysmem", func_00005D94);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_B2C7AA36);

INCLUDE_ASM("nonmatchings/sysmem", func_00005FD4);

INCLUDE_ASM("nonmatchings/sysmem", func_000061F0);

s32 func_0000623C(s32 arg0) {
    func_00000980((s32) &D_0000FD98, arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/sysmem", func_00006264);

s32 func_000062BC(s32 arg0) {
    func_00000980((s32) &D_0000FD98, arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/sysmem", func_000062E4);

s32 func_000063B0(s32 arg0) {
    func_00000980((s32) &D_0000FD98, arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/sysmem", func_000063D8);

s32 func_00006424(s32 arg0) {
    func_00000980((s32) &D_0000FD98, arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/sysmem", func_0000644C);

s32 func_00006498(s32 arg0) {
    func_00000980((s32) &D_0000FD98, arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_6C1DCD41);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_5367923C);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_6CD838EC);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_CE05CCB7);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000EABC);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_AD09C397);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_89A74008);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_55BFD686);

INCLUDE_ASM("nonmatchings/sysmem", func_00006CCC);

INCLUDE_ASM("nonmatchings/sysmem", func_00006D4C);

INCLUDE_ASM("nonmatchings/sysmem", func_00006DCC);

INCLUDE_ASM("nonmatchings/sysmem", func_00006F40);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_FEFC8666);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_D1BAB054);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_1C221A08);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2E3402CC);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_39357F07);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_8F20C4C0);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_CF4DE78C);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_41FFC7F9);

s32 SysMemForKernel_82D3CEE3(struct Unk_SysMemForKernel_82D3CEE3_0 *arg0, s32 arg1) {
    s32 var_a0;
    s32 var_a2;

    var_a0 = arg0->unk8;
    var_a2 = var_a0 ^ arg1;
    if ((var_a0 != 0) & (var_a0 != arg1)) {
        do {
            var_a0 = M2C_FIELD(var_a0, s32 *, 0x1C);
            var_a2 = var_a0 ^ arg1;
        } while ((var_a0 != 0) & (var_a0 != arg1));
    }
    return var_a2 == 0;
}

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_FC207849);

M2C_UNK *SysMemForKernel_536AD5E1(void) {
    return &D_0000FDA4;
}

s32 func_000075EC(struct Unk_func_000075EC_0 *arg0) {
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/sysmem", func_000075F4);

INCLUDE_ASM("nonmatchings/sysmem", func_0000764C);

s32 func_0000769C(struct Unk_func_0000769C_0 *arg0) {
    return arg0->unk8->unkC;
}

INCLUDE_ASM("nonmatchings/sysmem", func_000076A8);

INCLUDE_ASM("nonmatchings/sysmem", func_00007710);

INCLUDE_ASM("nonmatchings/sysmem", func_0000774C);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_DFAEBD5B);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_7BE95FA0);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_FE8DEBE0);

INCLUDE_ASM("nonmatchings/sysmem", func_00007CF4);

INCLUDE_ASM("nonmatchings/sysmem", func_00007E54);

INCLUDE_ASM("nonmatchings/sysmem", func_00007F4C);

INCLUDE_ASM("nonmatchings/sysmem", sceSysEventForKernel_D7D3FDCD);

INCLUDE_ASM("nonmatchings/sysmem", sceSysEventForKernel_36331294);

s32 func_00008160(void) {
    D_0000F92C = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/sysmem", sceSysEventForKernel_AEB300AE);

INCLUDE_ASM("nonmatchings/sysmem", sceSysEventForKernel_CD9E4BB5);

s32 sceSysEventForKernel_68D55505(void) {
    return D_0000F92C;
}

INCLUDE_ASM("nonmatchings/sysmem", func_00008284);

s32 sceSuspendForKernel_BDE686CD(s32 arg0) {
    D_0000F934 = arg0;
    return D_0000F930;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelPowerLock);

INCLUDE_ASM("nonmatchings/sysmem", func_0000832C);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelPowerUnlock);

INCLUDE_ASM("nonmatchings/sysmem", func_000083B8);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelPowerTick);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelVolatileMemLock);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelVolatileMemTryLock);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelVolatileMemUnlock);

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_98A1D061);

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_91A77137);

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_B43D1A8C);

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_8F58B1EC);

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_0AB0C6F3);

INCLUDE_ASM("nonmatchings/sysmem", func_000089F4);

INCLUDE_ASM("nonmatchings/sysmem", func_00008CDC);

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_67B59042);

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_B2C9640B);

void KDebugForKernel_E7A3874D(s32 arg0) {
    D_0000FC38 = arg0;
}

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_2FF4E9F9);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_BD5941B4);

s32 SysMemForKernel_80F25772(s32 arg0, s32 arg1, s32 arg2) {
    return SysMemForKernel_BD5941B4(arg0, arg1, 2, arg2) == 0;
}

INCLUDE_ASM("nonmatchings/sysmem", func_000095C0);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_3905D956);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000EC90);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000ECAC);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_26F96157);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000ECFC);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_6D6200DD);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_621037F5);

s32 func_0000AD04(s32 arg0, s32 arg1) {
    D_0000FC3C = arg0;
    D_0000FC40 = arg1;
    return 0;
}

s32 KDebugForKernel_24C32559(u32 arg0) {
    s32 var_a0;

    var_a0 = 0x80020001;
    if (arg0 < 0x20U) {
        var_a0 = ((u32) D_0000FC3C >> arg0) & 1;
    }
    return var_a0;
}

s32 KDebugForKernel_D636B827(void) {
    return D_0000FC3C;
}

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_5282DD5E);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_EE75658D);

s32 KDebugForKernel_9F8703E4(void) {
    return D_0000FC40;
}

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_428A8DA3);

s32 KDebugForKernel_FFD2F2B9(void) {
    return __builtin_allegrex_ext(D_0000FC3C, 0x1E, 1);
}

s32 KDebugForKernel_333DCEC7(s32 arg0) {
    D_0000FC44 = arg0;
    return 0;
}

s32 KDebugForKernel_E892D9A1(void) {
    return D_0000FC44;
}

INCLUDE_ASM("nonmatchings/sysmem", func_0000ADF8);

INCLUDE_ASM("nonmatchings/sysmem", func_0000AE94);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelPrintf);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_84F370BC);

s32 KDebugForKernel_9B868276(void) {
    return D_0000FC48;
}

void KDebugForKernel_E146606D(s32 arg0) {
    D_0000FC48 = arg0;
}

void KDebugForKernel_7CEB2C09(s32 arg0, s32 arg1) {
    D_0000F8B0 = arg0;
    D_0000F8B4 = arg1;
}

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_5CE9838B);

s32 KDebugForKernel_66253C4E(s32 arg0) {
    D_0000FC4C = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_DBB5597F);

s32 KDebugForKernel_E6554FDA(s32 arg0) {
    D_0000FC50 = arg0;
    return 0;
}

s32 KDebugForKernel_B9C643C9(void) {
    return D_0000F8B8;
}

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_7D1C74F0);

INCLUDE_ASM("nonmatchings/sysmem", syslib_D3744BE0);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_E400FDB0);

INCLUDE_ASM("nonmatchings/sysmem", func_0000BE7C);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C02C);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_F6C10E27);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_1890BE9C);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_03072750);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_811BED79);

s32 KDebugForKernel_A126F497(s32 arg0) {
    D_0000FC58 = arg0;
    return 0;
}

s32 KDebugForKernel_B7251823(void) {
    return D_0000FC58;
}

s32 SysMemForKernel_CDA3A2F7(void) {
    return D_0000FC90;
}

s32 SysMemForKernel_960B888C(void) {
    return D_0000FC90 + 0x200000;
}

s32 SysMemUserForUser_3FC9AE6A(void) {
    return 0x02000010;
}

s32 SysMemForKernel_452E3696(void) {
    return D_0000FC54;
}

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_95F5E8DA);

INCLUDE_ASM("nonmatchings/sysmem", SysMemUserForUser_A6848DF8);

s32 SysMemForKernel_EF2EE8C1(void) {
    return D_0000FF24;
}

INCLUDE_ASM("nonmatchings/sysmem", func_0000C6AC);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C768);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C824);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C88C);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C908);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C934);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C95C);

s32 func_0000C994(s32 arg0) {
    return arg0 == 0;
}

INCLUDE_ASM("nonmatchings/sysmem", func_0000C99C);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C9A8);

INCLUDE_ASM("nonmatchings/sysmem", func_0000CA24);

INCLUDE_ASM("nonmatchings/sysmem", func_0000CA84);

INCLUDE_ASM("nonmatchings/sysmem", func_0000CFF8);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000F290);
