/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "ifhandle_152_decls.h"

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_B9096E48);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_B1F5BB87);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_16042084);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_AE81C0CB);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_54D1AEA1);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_263767F6);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_E2F4F1C9);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_C28F6FF2);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_30F69334);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_B8188F96);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_4FB43BCE);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_8FCB05A1);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_EAD3A759);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_0296C7D6);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_E440A7D8);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_30602CE9);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_D5DA7B3C);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_2162EE67);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_C9344A59);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_F94BAF52);

void sceNetIfhandle_driver_16246B99(struct Unk_sceNetIfhandle_driver_16246B99_0 *arg0, struct Unk_sceNetIfhandle_driver_16246B99_1 *arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = sceKernelCpuSuspendIntr();
        arg1->unk4 = (void *) arg0->unk18;
        if (arg0->unk1C == NULL) {
            arg0->unk1C = arg1;
        }
        arg0->unk18 = arg1;
        arg0->unk20 = (s32) (arg0->unk20 + 1);
        sceKernelCpuResumeIntr(temp_v0);
    }
}

s32 sceNetIfhandle_driver_C6D14282(struct Unk_sceNetIfhandle_driver_C6D14282_0 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x80000103;
    if (arg0 != NULL) {
        arg0->unk4 = arg1;
        var_v0 = 0;
    }
    return var_v0;
}

s32 sceNetIfhandle_driver_D5AD6DEA(struct Unk_sceNetIfhandle_driver_D5AD6DEA_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk4;
    }
    return var_v0;
}

s32 sceNetIfhandle_driver_0542835F(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00003AF8 = arg0;
    D_00003AFC = arg1;
    D_00003B00 = arg2;
    D_00003AF4 = 1;
    sceKernelCpuResumeIntr(temp_a0);
    return 0;
}

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_773FC77C);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_9CBA24D4);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_C5623112);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetGetDropRate);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetSetDropRate);

INCLUDE_ASM("nonmatchings/ifhandle_152", func_000012A0);

INCLUDE_ASM("nonmatchings/ifhandle_152", func_0000145C);

s32 sceNetIfhandle_driver_0C391E9F(u32 arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = sceKernelCreateVpl("pspnet", 2, 0U, arg0, NULL);
    if (temp_v0 >= 0) {
        D_00003AD8 = temp_v0;
        D_00003ADC = 0;
    }
    setK1(temp_s0);
    return temp_v0;
}

s32 sceNetIfhandle_driver_29ED84C5(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    if (D_00003AD8 > 0) {
        sceKernelDeleteVpl(D_00003AD8);
        D_00003AD8 = -1;
    }
    setK1(temp_s0);
    return 0;
}

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_4C2886CB);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_15CFE3C0);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_76BAD213);

s32 func_0000189C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_59F0D619);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_F8825DC4);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_F56FAC82);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_C3325FDC);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_955F2924);

INCLUDE_RODATA("nonmatchings/ifhandle_152", D_000039F4);

INCLUDE_RODATA("nonmatchings/ifhandle_152", D_00003A00);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_9A6261EC);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_BFF3CEA5);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_49EDBB18);

INCLUDE_ASM("nonmatchings/ifhandle_152", func_00002400);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_1560F143);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/ifhandle_152", func_000028CC);
#endif

void sceNetIfhandle_driver_0FB8AE0D(void) {
    u32 temp_a1;

    temp_a1 = shiftK1();
    D_00004378 = 0;
    D_0000437C = 0;
    D_00004380 = 0;
    D_00004384 = 0;
    setK1(temp_a1);
}

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_A493AA5F);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_4CF15C43);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_456E3146);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_6AB53C27);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_3E8DD3F8);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_5FB31C72);

s32 sceNetIfhandle_driver_62B20015(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_a5;

    temp_a5 = shiftK1();
    D_00004378 = arg0;
    D_0000437C = arg1;
    D_00004380 = arg2;
    D_00004384 = arg3;
    setK1(temp_a5);
    return 0;
}

INCLUDE_ASM("nonmatchings/ifhandle_152", func_00002C20);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandle_driver_E80F00A4);

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}
