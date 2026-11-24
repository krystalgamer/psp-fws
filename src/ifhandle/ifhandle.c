/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "ifhandle_decls.h"

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_B9096E48);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_B1F5BB87);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_16042084);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_AE81C0CB);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_54D1AEA1);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_263767F6);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_E2F4F1C9);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_C28F6FF2);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_30F69334);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_B8188F96);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_4FB43BCE);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_8FCB05A1);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_EAD3A759);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_0296C7D6);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_E440A7D8);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_C9344A59);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_F94BAF52);

void sceNetIfhandle_driver_16246B99(void *arg0, void *arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = sceKernelCpuSuspendIntr();
        M2C_FIELD(arg1, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0x18);
        if (M2C_FIELD(arg0, void **, 0x1C) == NULL) {
            M2C_FIELD(arg0, void **, 0x1C) = arg1;
        }
        M2C_FIELD(arg0, void **, 0x18) = arg1;
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
        sceKernelCpuResumeIntr(temp_v0);
    }
}

s32 sceNetIfhandle_driver_C6D14282(void *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x80000103;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = arg1;
        var_v0 = 0;
    }
    return var_v0;
}

s32 sceNetIfhandle_driver_D5AD6DEA(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 4);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_0542835F);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_773FC77C);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_9CBA24D4);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_C5623112);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetGetDropRate);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetSetDropRate);

s32 sceNetIfhandle_driver_0C391E9F(s32 arg0, u32 arg1) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = sceKernelCreateVpl("SceNet", arg0, 0U, arg1, NULL);
    if (temp_v0 >= 0) {
        D_000034E8 = temp_v0;
        D_000034EC = 0;
    }
    setK1(temp_s0);
    return temp_v0;
}

s32 sceNetIfhandle_driver_29ED84C5(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    if (D_000034E8 > 0) {
        sceKernelDeleteVpl(D_000034E8);
        D_000034E8 = -1;
    }
    setK1(temp_s0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_4C2886CB);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_15CFE3C0);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_76BAD213);

s32 func_00001330(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_59F0D619);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_F8825DC4);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_F56FAC82);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_C3325FDC);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_955F2924);

INCLUDE_RODATA("tmp/asm/282/ifhandle/nonmatchings/ifhandle", D_00003470);

INCLUDE_RODATA("tmp/asm/282/ifhandle/nonmatchings/ifhandle", D_0000347C);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_9A6261EC);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_BFF3CEA5);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_49EDBB18);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", func_00001E90);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_1560F143);

void sceNetIfhandle_driver_0FB8AE0D(void) {
    u32 temp_a1;

    temp_a1 = shiftK1();
    D_00003548 = 0;
    D_0000354C = 0;
    D_00003550 = 0;
    D_00003554 = 0;
    setK1(temp_a1);
}

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_A493AA5F);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_4CF15C43);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_456E3146);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_6AB53C27);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_3E8DD3F8);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_5FB31C72);

s32 sceNetIfhandle_driver_62B20015(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_a5;

    temp_a5 = shiftK1();
    D_00003548 = arg0;
    D_0000354C = arg1;
    D_00003550 = arg2;
    D_00003554 = arg3;
    setK1(temp_a5);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", func_00002690);

INCLUDE_ASM("tmp/asm/282/ifhandle/nonmatchings/ifhandle", sceNetIfhandle_driver_E80F00A4);
