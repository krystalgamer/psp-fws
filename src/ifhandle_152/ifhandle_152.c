/* cflags: -O2 -frename-registers */
#include "common.h"
#include "k1.h"
#include "ifhandle_152_decls.h"

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandleTerm);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandleIfStart);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetCreateIfhandleEther);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetAttachIfhandleEther);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetDetachIfhandleEther);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetFlagIfEvent);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfDequeue);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfEnqueue);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandleInit);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandleGetAttachEther);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandleGetDetachEther);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandleIfUp);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandleIfDown);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandleIfIoctl);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandleIfDequeue);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandleSignalSema);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandleWaitSema);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetIfhandlePollSema);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetDestroyIfhandleEther);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetSendIfEvent);

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

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetGetMallocStatInternal);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMallocInternal);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetFreeInternal);

s32 func_0000189C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMGetclr);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMFree);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMFreem);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMPrepend);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMCopypacket);

INCLUDE_RODATA("nonmatchings/ifhandle_152", D_000039F4);

INCLUDE_RODATA("nonmatchings/ifhandle_152", D_00003A00);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMCopydata);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMAdj);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMPullup);

INCLUDE_ASM("nonmatchings/ifhandle_152", func_00002400);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMCopyback);

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

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMGet);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMGethdr);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMCopym);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMDup);

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMCat);

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

INCLUDE_ASM("nonmatchings/ifhandle_152", sceNetMPulldown);

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}
