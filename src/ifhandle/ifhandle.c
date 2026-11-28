/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "ifhandle_decls.h"

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandleTerm);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandleIfStart);

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

INCLUDE_ASM("nonmatchings/ifhandle", sceNetCreateIfhandleEther);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetAttachIfhandleEther);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetDetachIfhandleEther);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetFlagIfEvent);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfDequeue);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfEnqueue);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandleInit);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandleGetAttachEther);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandleGetDetachEther);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandleIfUp);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandleIfDown);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandleIfIoctl);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandleIfDequeue);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandleSignalSema);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandleWaitSema);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandlePollSema);
#endif

INCLUDE_ASM("nonmatchings/ifhandle", sceNetDestroyIfhandleEther);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetSendIfEvent);

#if FW_VERSION < 282
void sceNetIfPrepend(struct Unk_sceNetIfhandle_driver_16246B99_0 *arg0, struct Unk_sceNetIfhandle_driver_16246B99_1 *arg1) {
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

s32 sceNetSetIfhandleOpt(struct Unk_sceNetIfhandle_driver_C6D14282_0 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x80000103;
    if (arg0 != NULL) {
        arg0->unk4 = arg1;
        var_v0 = 0;
    }
    return var_v0;
}

s32 sceNetGetIfhandleOpt(struct Unk_sceNetIfhandle_driver_D5AD6DEA_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0->unk4;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/ifhandle", sceNetIfhandle_driver_0542835F);
#endif

#if FW_VERSION >= 282
void sceNetIfPrepend(struct Unk_sceNetIfhandle_driver_16246B99_0 *arg0, struct Unk_sceNetIfhandle_driver_16246B99_1 *arg1) {
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

s32 sceNetSetIfhandleOpt(struct Unk_sceNetIfhandle_driver_C6D14282_0 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0x80000103;
    if (arg0 != NULL) {
        arg0->unk4 = arg1;
        var_v0 = 0;
    }
    return var_v0;
}

s32 sceNetGetIfhandleOpt(struct Unk_sceNetIfhandle_driver_D5AD6DEA_0 *arg0) {
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

INCLUDE_ASM("nonmatchings/ifhandle", sceNetGetMallocStatInternal);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMallocInternal);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetFreeInternal);

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

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMGetclr);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMFree);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMFreem);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMPrepend);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMCopypacket);

#if FW_VERSION >= 351
INCLUDE_RODATA("nonmatchings/ifhandle", D_00003668);
#endif

INCLUDE_RODATA("nonmatchings/ifhandle", D_00003470);

#if FW_VERSION < 351
INCLUDE_RODATA("nonmatchings/ifhandle", D_0000347C);
#endif

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMCopydata);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMAdj);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMPullup);

INCLUDE_ASM("nonmatchings/ifhandle", func_00001E90);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMCopyback);

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

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMGet);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMGethdr);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMCopym);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMDup);

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMCat);

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

INCLUDE_ASM("nonmatchings/ifhandle", sceNetMPulldown);

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}
#endif
