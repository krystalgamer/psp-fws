/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "ifhandle_decls.h"

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_B9096E48);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_B1F5BB87);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/ifhandle", D_00003024);

INCLUDE_RODATA("nonmatchings/ifhandle", D_00003028);

INCLUDE_RODATA("nonmatchings/ifhandle", D_00003040);

INCLUDE_RODATA("nonmatchings/ifhandle", D_00003058);

INCLUDE_RODATA("nonmatchings/ifhandle", D_00003070);

INCLUDE_RODATA("nonmatchings/ifhandle", D_00003090);

INCLUDE_RODATA("nonmatchings/ifhandle", D_000030A0);

INCLUDE_RODATA("nonmatchings/ifhandle", D_000030B0);

INCLUDE_RODATA("nonmatchings/ifhandle", D_000030C0);

INCLUDE_RODATA("nonmatchings/ifhandle", D_000030D0);

INCLUDE_RODATA("nonmatchings/ifhandle", D_000030E4);

INCLUDE_RODATA("nonmatchings/ifhandle", D_00003204);

INCLUDE_RODATA("nonmatchings/ifhandle", D_0000321C);

INCLUDE_RODATA("nonmatchings/ifhandle", D_000033C4);

INCLUDE_RODATA("nonmatchings/ifhandle", D_000033CC);

INCLUDE_RODATA("nonmatchings/ifhandle", D_000033D0);

INCLUDE_RODATA("nonmatchings/ifhandle", D_000033E4);

INCLUDE_RODATA("nonmatchings/ifhandle", D_0000340C);
#endif

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_16042084);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_AE81C0CB);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_54D1AEA1);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_263767F6);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_E2F4F1C9);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_C28F6FF2);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_30F69334);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_B8188F96);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_4FB43BCE);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_8FCB05A1);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_EAD3A759);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_0296C7D6);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_E440A7D8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_30602CE9);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_D5DA7B3C);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_2162EE67);
#endif

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_C9344A59);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_F94BAF52);

#if FW_VERSION < 282
void sceNetIfhandle_driver_16246B99(struct Unk_sceNetIfhandle_driver_16246B99_0 *arg0, struct Unk_sceNetIfhandle_driver_16246B99_1 *arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = sceKernelCpuSuspendIntr();
        arg1->unk4 = arg0->unk18;
        if (arg0->unk1C == NULL) {
            arg0->unk1C = arg1;
        }
        arg0->unk18 = arg1;
        arg0->unk20 += 1;
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
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_0542835F);
#endif

#if FW_VERSION >= 282
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
#endif

#if FW_VERSION >= 150
s32 sceNetIfhandle_driver_0542835F(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    D_00003508 = arg0;
    D_0000350C = arg1;
    D_00003510 = arg2;
    D_00003504 = 1;
    sceKernelCpuResumeIntr(temp_a0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_773FC77C);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_9CBA24D4);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_C5623112);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetGetDropRate);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetSetDropRate);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/ifhandle", func_000012BC);

INCLUDE_ASM("nonmatchings/ifhandle", func_00001478);
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 282) || FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_0C391E9F);
#endif

#if FW_VERSION == 152
s32 sceNetIfhandle_driver_0C391E9F(s32 arg0, u32 arg1) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = sceKernelCreateVpl("pspnet", 2, 0U, (u32) arg0, NULL);
    if (temp_v0 >= 0) {
        D_00003B28 = temp_v0;
        D_00003B2C = 0;
    }
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 282) || FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_29ED84C5);
#endif

#if FW_VERSION == 152
s32 sceNetIfhandle_driver_29ED84C5(void) {
    u32 temp_s0;

    temp_s0 = shiftK1();
    if (D_00003B28 > 0) {
        sceKernelDeleteVpl(D_00003B28);
        D_00003B28 = -1;
    }
    setK1(temp_s0);
    return 0;
}
#endif

#if FW_VERSION == 282
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
#endif

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_4C2886CB);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_15CFE3C0);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_76BAD213);

#if FW_VERSION < 152 || (FW_VERSION >= 201 && FW_VERSION < 282)
INCLUDE_ASM("nonmatchings/ifhandle", func_000018BC);
#endif

#if FW_VERSION == 152
s32 func_000018BC(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00001330(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_59F0D619);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_F8825DC4);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_F56FAC82);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_C3325FDC);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_955F2924);

#if FW_VERSION >= 351
INCLUDE_RODATA("nonmatchings/ifhandle", D_00003668);
#endif

INCLUDE_RODATA("nonmatchings/ifhandle", D_00003470);

#if FW_VERSION < 351
INCLUDE_RODATA("nonmatchings/ifhandle", D_0000347C);
#endif

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_9A6261EC);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_BFF3CEA5);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_49EDBB18);

INCLUDE_ASM("nonmatchings/ifhandle", func_00001E90);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_1560F143);

#if FW_VERSION >= 351
INCLUDE_ASM("nonmatchings/ifhandle", func_000023BC);
#endif

#if FW_VERSION < 282
void sceNetIfhandle_driver_0FB8AE0D(void) {
    u32 temp_a1;

    temp_a1 = shiftK1();
    D_000043C8 = 0;
    D_000043CC = 0;
    D_000043D0 = 0;
    D_000043D4 = 0;
    setK1(temp_a1);
}
#else
void sceNetIfhandle_driver_0FB8AE0D(void) {
    u32 temp_a1;

    temp_a1 = shiftK1();
    D_00003548 = 0;
    D_0000354C = 0;
    D_00003550 = 0;
    D_00003554 = 0;
    setK1(temp_a1);
}
#endif

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_A493AA5F);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_4CF15C43);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_456E3146);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_6AB53C27);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_3E8DD3F8);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_5FB31C72);

#if FW_VERSION < 282
s32 sceNetIfhandle_driver_62B20015(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_a5;

    temp_a5 = shiftK1();
    D_000043C8 = arg0;
    D_000043CC = arg1;
    D_000043D0 = arg2;
    D_000043D4 = arg3;
    setK1(temp_a5);
    return 0;
}
#else
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
#endif

INCLUDE_ASM("nonmatchings/ifhandle", func_00002690);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_E80F00A4);

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}
#endif
