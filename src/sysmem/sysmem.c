/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "sysmem_decls.h"

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/sysmem", D_0000F390);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_1C1FBFE7);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000DA30);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00000000);

INCLUDE_ASM("nonmatchings/sysmem", func_00000074);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000AB40);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_000001EC);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_EFEEBAC7);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2DB687E9);

INCLUDE_ASM("nonmatchings/sysmem", func_000007B0);

INCLUDE_ASM("nonmatchings/sysmem", func_00000824);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/sysmem", D_0000AB60);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000AB68);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_1C1FBFE7);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/sysmem", D_00012508);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012540);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_000001A4);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/sysmem", func_00000980);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_0000038C);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_002BA296);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_03808C51);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_EFEEBAC7);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2DB687E9);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/sysmem", func_00000724);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
void func_00000724(void) {
    SysMemForKernel_FEFC8666((s32) "SceSysmemHeap", 0xC, (s32) &D_0000F390, 0, (s32) &D_0000FD88);
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000075C);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_C9805775);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_000004F0);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_EB7A74DB);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_636C953B);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/sysmem", func_00000980);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_7B749390);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00000924);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_A823047E);

#if FW_VERSION == 100 || (FW_VERSION >= 201 && FW_VERSION < 280)
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_B2163AA1);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 SysMemForKernel_B2163AA1(void) {
    return D_0000FC7C;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_EFF0C6DD);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 SysMemForKernel_EFF0C6DD(void) {
    return D_0000FC84;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_EFEEBAC7);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2DB687E9);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 SysMemForKernel_EFF0C6DD(void) {
    return D_0000FD90;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00000BC0);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00000C08);
#else
INCLUDE_ASM("nonmatchings/sysmem", func_00000E18);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00000CC0);

INCLUDE_ASM("nonmatchings/sysmem", func_00000D30);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00000D80);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/sysmem", func_00000DCC);

INCLUDE_ASM("nonmatchings/sysmem", func_00000E9C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00000E0C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/sysmem", func_00000E18_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00000EA0);

INCLUDE_ASM("nonmatchings/sysmem", func_00000FBC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00000F64);

void SysMemForKernel_636C953B(s32 arg0, s32 arg1) {
    SysMemForKernel_EB7A74DB(arg0, arg1, 0);
}

INCLUDE_ASM("nonmatchings/sysmem", func_00000FCC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000109C);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000AED8);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000AEE4);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000AF04);

INCLUDE_ASM("nonmatchings/sysmem", func_000011E8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00001244);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000DE5C);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000DE6C);

INCLUDE_ASM("nonmatchings/sysmem", func_000013E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_0000125C);

INCLUDE_ASM("nonmatchings/sysmem", func_00001458);

INCLUDE_ASM("nonmatchings/sysmem", func_00001580);

INCLUDE_ASM("nonmatchings/sysmem", func_00001650);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00001650(void) {
    return 0x80020002;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_0000165C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000165C(void) {
    return 0x80020002;
}
#endif

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/sysmem", D_0000F3C0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00000E08);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", func_00000E1C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00000ED8);
#endif

#if FW_VERSION >= 270
void func_00000F60(void) {
    SysMemForKernel_FEFC8666((s32) "SceSysmemMemoryPartition", 0x1C, (s32) &D_0000F3C0, 0, (s32) &D_0000FD8C);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
void func_00000F60(void) {
    SysMemForKernel_FEFC8666((s32) "SceSysmemMemoryPartition", 0x18, (s32) &D_0000F3C0, 0, (s32) &D_0000FD8C);
}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_00000F80);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysmem", func_000010E0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_00000F98);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/sysmem", func_000010FC);

s32 func_000011F4(void) {
    return 0x80020002;
}

s32 func_00001200(void) {
    return 0x80020002;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_55A40B2C);

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_000012CC);

INCLUDE_ASM("nonmatchings/sysmem", func_0000135C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00001630);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00001750);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/sysmem", func_00001810);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
s32 func_00001810(void *arg0) {
    u32 temp_a3;
    u32 var_a1;
    void *var_a0;

    var_a0 = M2C_FIELD(arg0, s32 *, 0x10) + 4;
    var_a1 = 0;
    if (var_a0 != NULL) {
        do {
            if (!(M2C_FIELD(var_a0, s32 *, 4) & 1)) {
                temp_a3 = (u32) M2C_FIELD(var_a0, u32 *, 8) >> 2;
                var_a1 = (var_a1 < temp_a3) ? temp_a3 : var_a1;
            }
            var_a0 = M2C_FIELD(var_a0, void **, 0);
        } while (var_a0 != NULL);
    }
    return var_a1 << 8;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
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
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_E6581468);

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", sceKernelMaxFreeMemSize);
#endif

#if FW_VERSION >= 270
u32 sceKernelMaxFreeMemSize(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = SysMemForKernel_E6581468(2);
    setK1(temp_s0);
    return (u32) temp_v0;
}

INCLUDE_ASM("nonmatchings/sysmem", func_000014BC);
#endif

#if FW_VERSION == 100
void SysMemUserForUser_E6581468(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    SysMemForKernel_E6581468(2);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/sysmem", func_000018D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000018D8(void *arg0) {
    s32 var_a0;
    void *var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0x10) + 4;
    var_a0 = 0;
    if (var_v1 != NULL) {
        do {
            if (!(M2C_FIELD(var_v1, s32 *, 4) & 1)) {
                var_a0 += (u32) M2C_FIELD(var_v1, u32 *, 8) >> 2;
            }
            var_v1 = M2C_FIELD(var_v1, void **, 0);
        } while (var_v1 != NULL);
    }
    return var_a0 << 8;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
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
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_9697CD32);

#if FW_VERSION >= 150 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", sceKernelTotalFreeMemSize);
#endif

#if FW_VERSION >= 270
u32 sceKernelTotalFreeMemSize(void) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = SysMemForKernel_9697CD32(2);
    setK1(temp_s0);
    return (u32) temp_v0;
}
#endif

#if FW_VERSION == 100
void SysMemUserForUser_9697CD32(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    SysMemForKernel_9697CD32(2);
    setK1(temp_s0);
}

INCLUDE_ASM("nonmatchings/sysmem", func_00001998);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_A2A65F0E);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000168C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00001A68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00001A80);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00001AE4);

s32 func_00001B6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_00001B74(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00001B64);

INCLUDE_ASM("nonmatchings/sysmem", func_00001BCC);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelAllocPartitionMemory);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00001B7C);

INCLUDE_ASM("nonmatchings/sysmem", func_00001BC8);

INCLUDE_ASM("nonmatchings/sysmem", func_00001C4C);

INCLUDE_ASM("nonmatchings/sysmem", func_00001CC0);

INCLUDE_ASM("nonmatchings/sysmem", func_00001D10);

INCLUDE_ASM("nonmatchings/sysmem", func_00001D60);

INCLUDE_ASM("nonmatchings/sysmem", func_00001DC8);

INCLUDE_ASM("nonmatchings/sysmem", func_00001E2C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000B174);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000B194);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000B19C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000E098);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_CE5544F4);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_82CCA14F);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2F3B7611);

INCLUDE_ASM("nonmatchings/sysmem", func_00002D28);

INCLUDE_ASM("nonmatchings/sysmem", func_000032A0);

INCLUDE_ASM("nonmatchings/sysmem", func_000033E4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00001EAC);
#else
INCLUDE_ASM("nonmatchings/sysmem", func_000016EC);

s32 func_000017D8(struct Unk_func_000017D8_0 *arg0) {
    return arg0->unkC;
}

s32 func_000017E0(struct Unk_func_000017E0_0 *arg0) {
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/sysmem", func_000017E8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysmem", func_00001834);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/sysmem", func_00001918);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_00001B24);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_0000184C);
#endif

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/sysmem", D_0000F3F0);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelAllocPartitionMemory);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysmem", func_00001C60);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00002190);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_EE867074);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_CE5544F4);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_5EBE73DE);
#else
s32 SysMemForKernel_5EBE73DE(void) {
    return 0x80020002;
}
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_915EF4AC);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", SysMemUserForUser_2A3E5280);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 SysMemForKernel_915EF4AC(void) {
    return 0x80020002;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_82CCA14F);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_00002B30);

INCLUDE_ASM("nonmatchings/sysmem", func_0000354C);

INCLUDE_ASM("nonmatchings/sysmem", func_0000381C);

INCLUDE_ASM("nonmatchings/sysmem", func_00003A78);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2F3B7611);

INCLUDE_ASM("nonmatchings/sysmem", func_00002F48);

INCLUDE_ASM("nonmatchings/sysmem", func_000035F4);
#endif

#if FW_VERSION >= 201
void func_0000373C(void) {
    SysMemForKernel_FEFC8666((s32) "SceSysMemMemoryBlock", 0xC, (s32) &D_0000F3F0, 0, (s32) &D_0000F8C0);
}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_00003B2C);

INCLUDE_ASM("nonmatchings/sysmem", func_00003B94);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00003774);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/sysmem", func_00003C44);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_00003748);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/sysmem", func_000037F4);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_EE867074);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00003A1C);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelFreePartitionMemory);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_000038C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00002B40);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00003B50);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2A3E5280);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000E5E0);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E620);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_EB4C0E1B);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_82CCA14F);
#endif

INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetBlockHeadAddr);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00003BC4);

INCLUDE_ASM("nonmatchings/sysmem", func_00003CA0);

INCLUDE_ASM("nonmatchings/sysmem", func_00003D28);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00002EC4);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2F3B7611);

INCLUDE_ASM("nonmatchings/sysmem", func_000031E4);

INCLUDE_ASM("nonmatchings/sysmem", func_000037AC);

INCLUDE_ASM("nonmatchings/sysmem", func_00003BC4);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000E79C);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E7DC);

INCLUDE_ASM("nonmatchings/sysmem", func_00003E04);
#endif

#if FW_VERSION >= 270
void func_00004238(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00001B24(arg0, arg1);
    M2C_FIELD(temp_v0, s32 *, 4) = (s32) (M2C_FIELD(temp_v0, s32 *, 4) | 1);
}
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/sysmem", func_000045E4);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012C3C);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012C4C);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012C84);

INCLUDE_ASM("nonmatchings/sysmem", func_000046A0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/sysmem", func_00004260);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_00003EE0);

INCLUDE_ASM("nonmatchings/sysmem", func_00003F68);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00004350);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00004398);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", func_00004788);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000421C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00003D50);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_000044C0);

INCLUDE_ASM("nonmatchings/sysmem", func_00004500);

INCLUDE_ASM("nonmatchings/sysmem", func_00004538);

INCLUDE_ASM("nonmatchings/sysmem", func_00004574);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00004434);

INCLUDE_ASM("nonmatchings/sysmem", func_000044A4);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00004554);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/sysmem", func_00004588);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_000046D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00003ED4);

INCLUDE_ASM("nonmatchings/sysmem", func_00003F14);

INCLUDE_ASM("nonmatchings/sysmem", func_00003FBC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_000045B0);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_00004824);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00004620);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_00004A54);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/sysmem", func_000055E8);

INCLUDE_ASM("nonmatchings/sysmem", func_0000584C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/sysmem", func_00004704);

INCLUDE_ASM("nonmatchings/sysmem", func_00004854);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_000049E0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_0000405C);

INCLUDE_ASM("nonmatchings/sysmem", func_000041A8);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00004A38);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000048E0(void *arg0) {
    return ((((u32) (M2C_FIELD(arg0, s32 *, 4) - 0x10) >> 3) - M2C_FIELD(arg0, s32 *, 8)) * 8) - 8;
}

INCLUDE_ASM("nonmatchings/sysmem", sceKernelMemset);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E8C0);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E8E0);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E8F0);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2F808748);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_1C4B1713);

INCLUDE_ASM("nonmatchings/sysmem", func_0000541C);

INCLUDE_ASM("nonmatchings/sysmem", func_00005448);

INCLUDE_ASM("nonmatchings/sysmem", func_00005470);

void func_000054E4(u8 *arg0, u8 *arg1) {
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

INCLUDE_ASM("nonmatchings/sysmem", func_0000550C);

void func_00005530(u8 *arg0, u8 *arg1, u32 arg2) {
    u32 var_a4;
    u8 *var_a0;
    u8 *var_a1;
    u8 var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a3 = *var_a1;
    var_a4 = 0;
    if ((var_a3 != 0) & (arg2 != 0)) {
        do {
            *var_a0 = var_a3;
            var_a1 += 1;
            var_a4 += 1;
            var_a3 = *var_a1;
            var_a0 += 1;
        } while ((var_a3 != 0) & (var_a4 < arg2));
    }
}

INCLUDE_ASM("nonmatchings/sysmem", func_00005574);

INCLUDE_ASM("nonmatchings/sysmem", func_000055A8);

INCLUDE_ASM("nonmatchings/sysmem", func_000055F0);

INCLUDE_ASM("nonmatchings/sysmem", func_00005628);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_000056CC);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/sysmem", func_00005710);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void SysMemForKernel_7B3E7441(void) {
    *(s32 *)0xBC100040 = (*(s32 *)0xBC100040 & ~3) | 2;
}

INCLUDE_ASM("nonmatchings/sysmem", func_000058A8);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E95C);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000E96C);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_B2C7AA36);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_0000435C);

INCLUDE_ASM("nonmatchings/sysmem", func_0000437C);

INCLUDE_ASM("nonmatchings/sysmem", func_000043DC);

INCLUDE_ASM("nonmatchings/sysmem", func_00004498);

INCLUDE_ASM("nonmatchings/sysmem", func_00004550);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_000046D0);
#else
s32 func_00004A60(struct Unk_func_00004A60_0 *arg0) {
    return ((((u32) (arg0->unk4 - 0x10) >> 3) - arg0->unk8) * 8) - 8;
}
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/sysmem", func_00005B74);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/sysmem", func_00005608);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelMemset);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2F808748);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_1C4B1713);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_0D1D8AC8);
#endif

#if FW_VERSION == 201
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
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000557C);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_97B18FA8);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_00005FAC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_00005724);
#endif

#if FW_VERSION >= 270
void func_00005850(void) {
    D_0000F8C4.unk0 = 0x70;
    M2C_VFIELD(&D_0000F8C4, s32, 0x6C) = -1;
    D_0000F8C4.unk4 = 0;
    D_0000F8C4.unk8 = 0;
    D_0000F8C4.unk18 = 0;
    D_0000F8C4.unk40 = 0;
    D_0000F8C4.unk44 = 0;
    D_0000F8C4.unk54 = 0;
    M2C_VFIELD(&D_0000F8C4, s8, 0x58) = 0;
    D_0000F8C4.unk60 = 0;
    D_0000F8C4.unk64 = 0;
    M2C_VFIELD(&D_0000F8C4, s32, 0x68) = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
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
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_E40D3A1D);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/sysmem", func_000058DC);
#endif

#if FW_VERSION >= 201
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
#endif

#if FW_VERSION >= 270
s32 SysMemUserForUser_FC114573(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x1000) {
        var_a0 = D_0000F8C4.unk60;
    }
    return var_a0;
}
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/sysmem", D_00012D3C);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012D54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 SysMemUserForUser_FC114573(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x1000) {
        var_a0 = D_0000F8C4.unk58;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetCompiledSdkVersion);
#endif

#if FW_VERSION >= 270
s32 SysMemForKernel_DEC0A0D8(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x2000) {
        var_a0 = D_0000F8C4.unk64;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 SysMemForKernel_DEC0A0D8(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x2000) {
        var_a0 = D_0000F8C4.unk5C;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetCompilerVersion);
#endif

#if FW_VERSION >= 270
s32 SysMemForKernel_7ECBDBD9(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x10000) {
        var_a0 = M2C_FIELD(&D_0000F8C4, s32 *, 0x68);
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 SysMemForKernel_7ECBDBD9(void) {
    s32 var_a0;

    var_a0 = 0;
    if (D_0000F8C4.unk4 & 0x10000) {
        var_a0 = D_0000F8C4.unk60;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_9C304ED7);
#endif

#if FW_VERSION >= 270
s32 SysMemForKernel_8C0CC205(void) {
    s32 var_a0;

    var_a0 = -1;
    if (D_0000F8C4.unk4 & 0x100000) {
        var_a0 = M2C_FIELD(&D_0000F8C4, s32 *, 0x6C);
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 SysMemForKernel_8C0CC205(void) {
    s32 var_a0;

    var_a0 = -1;
    if (D_0000F8C4.unk4 & 0x100000) {
        var_a0 = D_0000F8C4.unk64;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_E9E4D851);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_38495D84);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_6373995D);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
s32 SysMemForKernel_38495D84(void) {
    return D_00010AF0;
}
#endif

#if FW_VERSION >= 250
s32 SysMemForKernel_29A5899B(s32 arg0) {
    D_00010244 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_F4390489);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_419DB8F4);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_A1ACEA31);
#endif

#if FW_VERSION >= 250
s32 SysMemForKernel_071D9804(void) {
    return 0;
}

s32 SysMemForKernel_02786087(void) {
    return 0x80020001;
}

s32 SysMemForKernel_1F7F7F40(void) {
    return 0;
}

s32 SysMemForKernel_049CC735(void) {
    return 0;
}

s32 SysMemForKernel_39351245(void) {
    return 0;
}

s32 SysMemForKernel_D2E3A399(void) {
    return 0;
}

s32 SysMemForKernel_4852F8DD(void) {
    return 0;
}

s32 SysMemForKernel_4EC43DC4(void) {
    return 0;
}
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_A2983280);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", func_000067E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_00005C64);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_7B3E7441);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
void SysMemForKernel_7B3E7441(void) {
    *(s32 *)0xBC100040 = (*(s32 *)0xBC100040 & ~3) | 2;
}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_E0058030);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
void SysMemForKernel_E0058030(void) {
    *(s32 *)0xBC100040 = (*(s32 *)0xBC100040 & ~3) | 1;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_719792F1);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_101C3E59);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
void SysMemForKernel_101C3E59(s32 arg0) {
    *(s32 *)0xBC100040 = (*(s32 *)0xBC100040 & ~3) | (arg0 & 3);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/sysmem", func_00005D94);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_B2C7AA36);

INCLUDE_ASM("nonmatchings/sysmem", func_00005FD4);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_000061F0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00004C7C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004C7C(s32 arg0) {
    func_00000980((s32) &D_0000FC8C, arg0);
    return 0;
}
#endif

#if FW_VERSION >= 201
s32 func_0000623C(s32 arg0) {
    func_00000980((s32) &D_0000FD98, arg0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00006264);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00004CFC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004CFC(s32 arg0) {
    func_00000980((s32) &D_0000FC8C, arg0);
    return 0;
}
#endif

#if FW_VERSION >= 201
s32 func_000062BC(s32 arg0) {
    func_00000980((s32) &D_0000FD98, arg0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_000062E4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00004DF0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004DF0(s32 arg0) {
    func_00000980((s32) &D_0000FC8C, arg0);
    return 0;
}
#endif

#if FW_VERSION >= 201
s32 func_000063B0(s32 arg0) {
    func_00000980((s32) &D_0000FD98, arg0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_000063D8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00004E64);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004E64(s32 arg0) {
    func_00000980((s32) &D_0000FC8C, arg0);
    return 0;
}
#endif

#if FW_VERSION >= 201
s32 func_00006424(s32 arg0) {
    func_00000980((s32) &D_0000FD98, arg0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_0000644C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00004ED8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00004ED8(s32 arg0) {
    func_00000980((s32) &D_0000FC8C, arg0);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00004F00);

INCLUDE_ASM("nonmatchings/sysmem", func_00004F24);

INCLUDE_ASM("nonmatchings/sysmem", func_00004F68);
#endif

#if FW_VERSION >= 201
s32 func_00006498(s32 arg0) {
    func_00000980((s32) &D_0000FD98, arg0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_6C1DCD41);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_5367923C);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_6CD838EC);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_CE05CCB7);
#endif

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/sysmem", D_0000F718);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000F770);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_6CD838EC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_CE05CCB7);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_000052A4);

INCLUDE_ASM("nonmatchings/sysmem", func_00005418);
#endif

INCLUDE_RODATA("nonmatchings/sysmem", D_0000EABC);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_AD09C397);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_89A74008);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_55BFD686);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00006B10);

INCLUDE_ASM("nonmatchings/sysmem", func_00006B90);

INCLUDE_ASM("nonmatchings/sysmem", func_00006C10);

INCLUDE_ASM("nonmatchings/sysmem", func_00006D84);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00006CCC);

INCLUDE_ASM("nonmatchings/sysmem", func_00006D4C);

INCLUDE_ASM("nonmatchings/sysmem", func_00006DCC);

INCLUDE_ASM("nonmatchings/sysmem", func_00006F40);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_FEFC8666);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_D1BAB054);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_1C221A08);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_2E3402CC);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_39357F07);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00005980);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_89A74008);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_8F20C4C0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_55BFD686);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_CF4DE78C);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_41FFC7F9);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_82D3CEE3);
#else
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
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_536AD5E1);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00005DBC);

INCLUDE_ASM("nonmatchings/sysmem", func_00005E20);

INCLUDE_ASM("nonmatchings/sysmem", func_00005E84);
#endif

#if FW_VERSION < 201
s32 func_00005EE8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}
#else
M2C_UNK *SysMemForKernel_536AD5E1(void) {
    return &D_0000FDA4;
}

s32 func_000075EC(struct Unk_func_000075EC_0 *arg0) {
    return arg0->unkC;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_000075F4);

INCLUDE_ASM("nonmatchings/sysmem", func_0000764C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00005F98);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00005F98(void *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0xC);
}
#endif

#if FW_VERSION >= 201
s32 func_0000769C(struct Unk_func_0000769C_0 *arg0) {
    return arg0->unk8->unkC;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_000076A8);

INCLUDE_ASM("nonmatchings/sysmem", func_00007710);

INCLUDE_ASM("nonmatchings/sysmem", func_0000774C);

#if FW_VERSION == 100
void func_00006080(u8 *arg0, u8 *arg1) {
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

INCLUDE_ASM("nonmatchings/sysmem", func_000060A8);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_DFAEBD5B);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_7BE95FA0);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_FE8DEBE0);

INCLUDE_ASM("nonmatchings/sysmem", func_00007CF4);

#if FW_VERSION >= 250
INCLUDE_RODATA("nonmatchings/sysmem", D_0000F86C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_00007C98);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", func_00007E54);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00007F4C);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceSysEventForKernel_D7D3FDCD);

INCLUDE_ASM("nonmatchings/sysmem", sceSysEventForKernel_36331294);
#else
void func_000065F8(u8 *arg0, u8 *arg1) {
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

INCLUDE_ASM("nonmatchings/sysmem", func_00006620);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00006620(void) {
    D_0000F874 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 201
s32 func_00008160(void) {
    D_0000F92C = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", sceSysEventForKernel_AEB300AE);

INCLUDE_ASM("nonmatchings/sysmem", sceSysEventForKernel_CD9E4BB5);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceSysEventForKernel_68D55505(void) {
    return D_0000F874;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", sceSysEventForKernel_D7D3FDCD);

INCLUDE_ASM("nonmatchings/sysmem", sceSysEventForKernel_36331294);
#endif

#if FW_VERSION >= 201
s32 sceSysEventForKernel_68D55505(void) {
    return D_0000F92C;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_00008284);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_BDE686CD);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceSuspendForKernel_BDE686CD(s32 arg0) {
    D_0000F87C = arg0;
    return D_0000F878;
}
#endif

#if FW_VERSION >= 201
s32 sceSuspendForKernel_BDE686CD(s32 arg0) {
    D_0000F934 = arg0;
    return D_0000F930;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", sceKernelPowerLock);

INCLUDE_ASM("nonmatchings/sysmem", func_0000832C);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelPowerUnlock);

INCLUDE_ASM("nonmatchings/sysmem", func_000083B8);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelPowerTick);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", sceKernelVolatileMemLock);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelVolatileMemTryLock);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelVolatileMemUnlock);

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_98A1D061);
#endif

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_91A77137);

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_B43D1A8C);

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_8F58B1EC);

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_0AB0C6F3);

INCLUDE_ASM("nonmatchings/sysmem", func_000089F4);

INCLUDE_ASM("nonmatchings/sysmem", func_00008CDC);

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_67B59042);

INCLUDE_ASM("nonmatchings/sysmem", sceSuspendForKernel_B2C9640B);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_9B868276);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_E146606D);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_7CEB2C09);

INCLUDE_ASM("nonmatchings/sysmem", func_000070E0);

INCLUDE_ASM("nonmatchings/sysmem", func_00007118);

INCLUDE_ASM("nonmatchings/sysmem", func_0000714C);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_84F370BC);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_5CE9838B);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_66253C4E);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_DBB5597F);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_E6554FDA);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_B9C643C9);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_7D1C74F0);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_E7A3874D);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void KDebugForKernel_E7A3874D(s32 arg0) {
    D_0000FB80 = arg0;
}
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/sysmem", D_0000BAD0);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000BAD8);
#endif

#if FW_VERSION >= 201
void KDebugForKernel_E7A3874D(s32 arg0) {
    D_0000FC38 = arg0;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_2FF4E9F9);

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/sysmem", SysclibForKernel_1D83F344);
#endif

#if FW_VERSION >= 250
void bcmp(s32 arg0, s32 arg1, s32 arg2) {
    memcmp(arg0, arg1, arg2);
}

void bcopy(s32 arg0, s32 arg1) {
    memmove(arg1, arg0);
}

INCLUDE_ASM("nonmatchings/sysmem", bzero);

INCLUDE_ASM("nonmatchings/sysmem", toupper);

INCLUDE_ASM("nonmatchings/sysmem", tolower);

INCLUDE_ASM("nonmatchings/sysmem", SysclibForKernel_32C767F2);

M2C_UNK *SysclibForKernel_D887CACD(void) {
    return &D_0000F8DD;
}

INCLUDE_ASM("nonmatchings/sysmem", index);

INCLUDE_ASM("nonmatchings/sysmem", SysclibForKernel_DF17F4A2);

INCLUDE_ASM("nonmatchings/sysmem", __udivdi3);

INCLUDE_ASM("nonmatchings/sysmem", __umoddi3);

INCLUDE_ASM("nonmatchings/sysmem", memchr);

INCLUDE_ASM("nonmatchings/sysmem", memcmp);

INCLUDE_ASM("nonmatchings/sysmem", memcpy);

INCLUDE_ASM("nonmatchings/sysmem", memmove);

INCLUDE_ASM("nonmatchings/sysmem", memset);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000F8DC);

INCLUDE_ASM("nonmatchings/sysmem", SysclibForKernel_87C78FB6);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000F988);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/sysmem", D_00013064);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/sysmem", D_00012570);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/sysmem", D_00012A6C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysmem", D_00012224);
#endif

#if FW_VERSION == 270
INCLUDE_RODATA("nonmatchings/sysmem", D_00012850);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/sysmem", D_00012664);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/sysmem", D_0000F990);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/sysmem", SysclibForKernel_8AF6B8F8);

INCLUDE_ASM("nonmatchings/sysmem", rindex);

INCLUDE_ASM("nonmatchings/sysmem", sprintf);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/sysmem", func_00009AE8);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/sysmem", func_00009B1C);

INCLUDE_ASM("nonmatchings/sysmem", strcat);

INCLUDE_ASM("nonmatchings/sysmem", strchr);

INCLUDE_ASM("nonmatchings/sysmem", strcmp);

u8 *strcpy(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_v0;
    u8 temp_a3;

    var_a1 = arg1;
    var_v0 = NULL;
    var_a2 = arg0;
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

INCLUDE_ASM("nonmatchings/sysmem", strcspn);

INCLUDE_ASM("nonmatchings/sysmem", strtol);

INCLUDE_ASM("nonmatchings/sysmem", strtoul);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", SysclibForKernel_1D83F344);

INCLUDE_ASM("nonmatchings/sysmem", func_0000B170);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/sysmem", strncmp);

INCLUDE_ASM("nonmatchings/sysmem", strncpy);

INCLUDE_ASM("nonmatchings/sysmem", strnlen);

INCLUDE_ASM("nonmatchings/sysmem", strlen);

INCLUDE_ASM("nonmatchings/sysmem", strrchr);

INCLUDE_ASM("nonmatchings/sysmem", strpbrk);

INCLUDE_ASM("nonmatchings/sysmem", strspn);

INCLUDE_ASM("nonmatchings/sysmem", strstr);

INCLUDE_ASM("nonmatchings/sysmem", strtok_r);

INCLUDE_ASM("nonmatchings/sysmem", strtok);

INCLUDE_ASM("nonmatchings/sysmem", SysclibForKernel_279F9A12);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheInvalidateRange);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", UtilsForUser_B83A1E76);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", sceKernelIcacheInvalidateRange);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsMd5BlockUpdate);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsMd5BlockResult);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsMd5Digest);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsMd5BlockInit);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsSha1BlockUpdate);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsSha1BlockResult);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsSha1Digest);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsSha1BlockInit);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsMt19937Init);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelUtilsMt19937UInt);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_23A0C5BA);

INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_41887EF4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
s32 UtilsForKernel_7B7ED3FD(s32 arg0, s32 arg1, s32 arg2) {
    D_00013908 = arg0;
    D_0001390C = arg1;
    D_00013910 = arg2;
    return 0;
}

s32 UtilsForKernel_6151A7C3(void) {
    D_00013908 = 0;
    D_0001390C = 0;
    D_00013910 = 0;
    return 0;
}
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", sceKernelLibcClock);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelLibcTime);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelLibcGettimeofday);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_BDBFCA89);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_78934841);

INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_B0E9C31F);

s32 UtilsForKernel_23FFC828(s32 arg0) {
    void *sp0;
    return (UtilsForKernel_B0E9C31F(arg0, 0, 0, 0, 0, &sp0) < 0) ? 0 : sp0;
}

INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_E0CE3E29);

s32 UtilsForKernel_E0E6BA96(s32 arg0) {
    void *sp0;
    return (UtilsForKernel_B0E9C31F(arg0, 0, &sp0, 0, 0, 0) < 0) ? 0 : sp0;
}

s32 UtilsForKernel_8C1FBE04(s32 arg0) {
    void *sp0;
    return (UtilsForKernel_B0E9C31F(arg0, 0, 0, &sp0, 0, 0) < 0) ? 0 : sp0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00007A38);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_24C32559);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_D636B827);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_5282DD5E);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_9F8703E4);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_333DCEC7);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_E892D9A1);

INCLUDE_ASM("nonmatchings/sysmem", func_00007AE4);

INCLUDE_ASM("nonmatchings/sysmem", func_00007B28);
#endif

#if FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_BD5941B4);

s32 SysMemForKernel_80F25772(s32 arg0, s32 arg1, s32 arg2) {
    return SysMemForKernel_BD5941B4(arg0, arg1, 2, arg2) == 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_000092F0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_000095C0);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_3905D956);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000EBD0);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000EBEC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_RODATA("nonmatchings/sysmem", D_0000EC90);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000ECAC);
#endif

#if FW_VERSION >= 270
INCLUDE_RODATA("nonmatchings/sysmem", D_00012A80);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012AC8);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012B10);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012B78);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012BCC);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012C38);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012C80);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012C98);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012C9C);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_8A3ACE8C);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_26F96157);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000ECFC);

#if FW_VERSION >= 270
INCLUDE_RODATA("nonmatchings/sysmem", D_00012EAC);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012EB8);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012EE0);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012EE4);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_6D6200DD);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_621037F5);

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000AA28(s32 arg0, s32 arg1) {
    D_0000FB84 = arg0;
    D_0000FB88 = arg1;
    return 0;
}

s32 KDebugForKernel_24C32559(u32 arg0) {
    s32 var_a0;

    var_a0 = 0x80020001;
    if (arg0 < 0x20U) {
        var_a0 = ((u32) D_0000FB84 >> arg0) & 1;
    }
    return var_a0;
}

s32 KDebugForKernel_D636B827(void) {
    return D_0000FB84;
}

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_5282DD5E);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_EE75658D);

s32 KDebugForKernel_9F8703E4(void) {
    return D_0000FB88;
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_428A8DA3);

s32 KDebugForKernel_FFD2F2B9(void) {
    return __builtin_allegrex_ext(D_0000FB84, 0x1E, 1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 KDebugForKernel_333DCEC7(s32 arg0) {
    D_0000FB8C = arg0;
    return 0;
}

s32 KDebugForKernel_E892D9A1(void) {
    return D_0000FB8C;
}

INCLUDE_ASM("nonmatchings/sysmem", func_0000AAD8);

INCLUDE_ASM("nonmatchings/sysmem", func_0000AB74);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelPrintf);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_84F370BC);

s32 KDebugForKernel_9B868276(void) {
    return D_0000FB90;
}

void KDebugForKernel_E146606D(s32 arg0) {
    D_0000FB90 = arg0;
}

void KDebugForKernel_7CEB2C09(s32 arg0, s32 arg1) {
    D_0000F860 = arg0;
    D_0000F864 = arg1;
}

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_5CE9838B);

s32 KDebugForKernel_66253C4E(s32 arg0) {
    D_0000FB94 = arg0;
    return 0;
}

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_DBB5597F);

s32 KDebugForKernel_E6554FDA(s32 arg0) {
    D_0000FB98 = arg0;
    return 0;
}

s32 KDebugForKernel_B9C643C9(void) {
    return D_0000F868;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", func_0000AD04);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 func_0000AD04(s32 arg0, s32 arg1) {
    D_0000FC3C = arg0;
    D_0000FC40 = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_24C32559);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 KDebugForKernel_24C32559(u32 arg0) {
    s32 var_a0;

    var_a0 = 0x80020001;
    if (arg0 < 0x20U) {
        var_a0 = ((u32) D_0000FC3C >> arg0) & 1;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_D636B827);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 KDebugForKernel_D636B827(void) {
    return D_0000FC3C;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_AFB8FC80);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_23906FB2);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_5282DD5E);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_EE75658D);

s32 KDebugForKernel_9F8703E4(void) {
    return D_0000FC40;
}

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_428A8DA3);

s32 KDebugForKernel_FFD2F2B9(void) {
    return __builtin_allegrex_ext(D_0000FC3C, 0x1E, 1);
}
#endif

#if FW_VERSION >= 250
s32 KDebugForKernel_72E6B3B8(void) {
    func_0000C690();
    return D_000109D4 == 0;
}

s32 KDebugForKernel_A216AE06(void) {
    func_0000C690();
    return D_000109D4;
}
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_333DCEC7);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 KDebugForKernel_333DCEC7(s32 arg0) {
    D_0000FC44 = arg0;
    return 0;
}
#endif

#if FW_VERSION >= 201
s32 KDebugForKernel_E892D9A1(void) {
    return D_0000FC44;
}

INCLUDE_ASM("nonmatchings/sysmem", func_0000ADF8);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/sysmem", func_0000C690);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", func_0000CF10);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_0000C6EC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000AE94);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/sysmem", sceKernelPrintf);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_84F370BC);
#endif

#if FW_VERSION >= 270
s32 KDebugForKernel_9B868276(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_00013688 == 0) {
        var_v0 = D_00013EB8;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
s32 KDebugForKernel_9B868276(void) {
    return D_0000FC48;
}
#endif

#if FW_VERSION >= 270
void KDebugForKernel_E146606D(s32 arg0) {
    D_00013EB8 = arg0;
    D_00013688 = 0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
void KDebugForKernel_E146606D(s32 arg0) {
    D_0000FC48 = arg0;
}
#endif

#if FW_VERSION >= 270
void KDebugForKernel_8B041DFB(s32 arg0) {
    if (D_00013688 != 0) {
        D_00013EB8 = arg0;
    }
}
#endif

#if FW_VERSION >= 201
void KDebugForKernel_7CEB2C09(s32 arg0, s32 arg1) {
    D_0000F8B0 = arg0;
    D_0000F8B4 = arg1;
}
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/sysmem", func_0000E3C4);
#endif

#if FW_VERSION >= 201
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
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_7D1C74F0);
#endif

INCLUDE_ASM("nonmatchings/sysmem", syslib_D3744BE0);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/sysmem", func_0000DDAC);

INCLUDE_ASM("nonmatchings/sysmem", func_0000DEE0);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/sysmem", func_0000E08C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00009498);

INCLUDE_ASM("nonmatchings/sysmem", func_00009554);

INCLUDE_ASM("nonmatchings/sysmem", func_00009610);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_E400FDB0);
#endif

#if FW_VERSION >= 270 && FW_VERSION < 300
INCLUDE_ASM("nonmatchings/sysmem", func_0000DFD8);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", func_0000E368);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/sysmem", D_0000BF10);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000BF1C);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000BF3C);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000BF60);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000BF88);

INCLUDE_ASM("nonmatchings/sysmem", func_00009B8C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000BFA8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_00009E40);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 270
INCLUDE_ASM("nonmatchings/sysmem", func_0000BE7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/sysmem", func_0000C02C);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_F6C10E27);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_E0645895);
#endif

#if FW_VERSION >= 250
s32 SysMemForKernel_1F01A9E2(void) {
    return D_00010CBC;
}
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/sysmem", D_00010104);

INCLUDE_RODATA("nonmatchings/sysmem", D_00010120);

INCLUDE_RODATA("nonmatchings/sysmem", D_00010138);

INCLUDE_RODATA("nonmatchings/sysmem", D_0001014C);
#endif

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_1890BE9C);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_03072750);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_811BED79);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_F6C10E27);

INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_A126F497);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 KDebugForKernel_A126F497(s32 arg0) {
    D_0000FBA0 = arg0;
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", KDebugForKernel_B7251823);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 KDebugForKernel_B7251823(void) {
    return D_0000FBA0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_CDA3A2F7);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 SysMemForKernel_CDA3A2F7(void) {
    return D_0000FBE0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_960B888C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 SysMemForKernel_960B888C(void) {
    return D_0000FBE0 + 0x200000;
}
#endif

#if FW_VERSION == 152
s32 SysMemUserForUser_3FC9AE6A(void) {
    return 0x01050200;
}
#endif

#if FW_VERSION == 151
s32 SysMemUserForUser_3FC9AE6A(void) {
    return 0x01050100;
}
#endif

#if FW_VERSION == 150
s32 SysMemUserForUser_3FC9AE6A(void) {
    return 0x01050001;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 SysMemForKernel_452E3696(void) {
    return D_0000FB9C;
}

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_95F5E8DA);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C778);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C834);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/sysmem", func_0000A5D0);

INCLUDE_ASM("nonmatchings/sysmem", func_0000A5FC);
#endif

#if FW_VERSION >= 201
s32 KDebugForKernel_A126F497(s32 arg0) {
    D_0000FC58 = arg0;
    return 0;
}

s32 KDebugForKernel_B7251823(void) {
    return D_0000FC58;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_CDA3A2F7);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 SysMemForKernel_CDA3A2F7(void) {
    return D_0000FC90;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_960B888C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
s32 SysMemForKernel_960B888C(void) {
    return D_0000FC90 + 0x200000;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_B9F8561C);

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_9452B542);

INCLUDE_ASM("nonmatchings/sysmem", SysMemUserForUser_3FC9AE6A);
#endif

#if FW_VERSION == 271
s32 SysMemUserForUser_3FC9AE6A(void) {
    return 0x02070110;
}
#endif

#if FW_VERSION == 270
s32 SysMemUserForUser_3FC9AE6A(void) {
    return 0x02070010;
}
#endif

#if FW_VERSION == 260
s32 SysMemUserForUser_3FC9AE6A(void) {
    return 0x02060010;
}
#endif

#if FW_VERSION == 250
s32 SysMemUserForUser_3FC9AE6A(void) {
    return 0x02050010;
}
#endif

#if FW_VERSION == 201
s32 SysMemUserForUser_3FC9AE6A(void) {
    return 0x02000010;
}
#endif

#if FW_VERSION >= 201
s32 SysMemForKernel_452E3696(void) {
    return D_0000FC54;
}

INCLUDE_ASM("nonmatchings/sysmem", SysMemForKernel_95F5E8DA);

INCLUDE_ASM("nonmatchings/sysmem", SysMemUserForUser_A6848DF8);

s32 SysMemForKernel_EF2EE8C1(void) {
    return D_0000FF24;
}
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", func_0000ED8C);

INCLUDE_ASM("nonmatchings/sysmem", func_0000EFA0);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F06C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/sysmem", func_0000C6AC);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C768);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", func_0000F4BC);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheWritebackAll);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F53C);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheWritebackInvalidateAll);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F578);

INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_864A9D72);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F5C4);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheWritebackRange);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F6A8);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheWritebackInvalidateRange);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F78C);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F798);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F87C);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_B83A1E76);

INCLUDE_ASM("nonmatchings/sysmem", func_0000EEB0);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheProbe);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F8D8);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheReadTag);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F91C);

INCLUDE_ASM("nonmatchings/sysmem", func_0000F944);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelDcacheProbeRange);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelIcacheInvalidateAll);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FA64);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FA70);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FB40);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelIcacheProbe);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FB9C);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelIcacheReadTag);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FBE0);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FC08);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FC10);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FCB0);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FD38);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FD70);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FDE8);

INCLUDE_ASM("nonmatchings/sysmem", func_0000FF50);

INCLUDE_ASM("nonmatchings/sysmem", func_000101F0);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelGetGPI);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelSetGPO);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_AF3616C0);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_193D4036);

INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_95035FEF);
#endif

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_6231A71D);

INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_39F49610);

INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_136F2419);

INCLUDE_ASM("nonmatchings/sysmem", sceKernelPutUserLog);

INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_92282A47);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_E8DB3CE6);

INCLUDE_ASM("nonmatchings/sysmem", func_000105C0);

INCLUDE_ASM("nonmatchings/sysmem", func_000105DC);

INCLUDE_ASM("nonmatchings/sysmem", func_00010658);

INCLUDE_ASM("nonmatchings/sysmem", func_00010698);

INCLUDE_ASM("nonmatchings/sysmem", func_000106F4);

INCLUDE_ASM("nonmatchings/sysmem", func_000106F8);

INCLUDE_ASM("nonmatchings/sysmem", func_000108AC);
#endif

#if FW_VERSION >= 270
INCLUDE_ASM("nonmatchings/sysmem", UtilsForKernel_7DD07271);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/sysmem", setjmp);

INCLUDE_ASM("nonmatchings/sysmem", longjmp);

INCLUDE_ASM("nonmatchings/sysmem", func_0000E11C);

INCLUDE_ASM("nonmatchings/sysmem", wmemset);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000C824);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C88C);
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_0000C908);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C934);

INCLUDE_ASM("nonmatchings/sysmem", func_0000C95C);

#if FW_VERSION < 201
s32 func_0000A6B4(s32 arg0) {
    return arg0 == 0;
}
#else
s32 func_0000C994(s32 arg0) {
    return arg0 == 0;
}
#endif

INCLUDE_ASM("nonmatchings/sysmem", func_0000C99C);

#if FW_VERSION >= 260
INCLUDE_RODATA("nonmatchings/sysmem", D_00012EF8);

INCLUDE_RODATA("nonmatchings/sysmem", D_00012FF8);

INCLUDE_RODATA("nonmatchings/sysmem", D_00013040);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000C990);

INCLUDE_ASM("nonmatchings/sysmem", func_0000CEE0);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000F240);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/sysmem", func_0000C9A8);

INCLUDE_ASM("nonmatchings/sysmem", func_0000CA24);

INCLUDE_ASM("nonmatchings/sysmem", func_0000CA84);

INCLUDE_ASM("nonmatchings/sysmem", func_0000CFF8);

INCLUDE_RODATA("nonmatchings/sysmem", D_0000F290);
#endif
