#include "common.h"
#include "pspnet_adhoc_matching_decls.h"

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingInit);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingCreate);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingStart);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingStop);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingDelete);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingSelectTarget);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingSetHelloOpt);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingGetHelloOpt);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingGetMembers);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingTerm);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingCancelTarget);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingCancelTargetWithOpt);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingGetPoolMaxAlloc);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", sceNetAdhocMatchingGetPoolStat);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00000E88);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00001054);

void func_0000113C(void *arg0, s32 *arg1) {
    sceKernelDeleteMbx(M2C_FIELD(arg0, s32 *, 0x40));
    func_00002F90(*arg1);
    sceKernelWaitThreadEnd(M2C_FIELD(arg0, s32 *, 0x3C), 0);
    *arg1 = func_00002F24();
    sceNetFreeThreadinfo(M2C_FIELD(arg0, s32 *, 0x3C));
    sceKernelDeleteThread(M2C_FIELD(arg0, s32 *, 0x3C));
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000011A0);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00001430);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00001F54);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_0000213C);

void func_00002188(void *arg0) {
    sceNetAdhocPdpDelete(M2C_FIELD(arg0, s32 *, 0x38), 0);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000021B8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000022B4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000023E8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002420);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002480);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_0000256C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000025B4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002648);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002680);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002700);

void func_00002794(void *arg0, s32 *arg1) {
    sceNetAdhocSetSocketAlert(M2C_FIELD(arg0, s32 *, 0x38), 0x20);
    func_00002F90(*arg1);
    sceKernelWaitThreadEnd(M2C_FIELD(arg0, s32 *, 0x44), 0);
    *arg1 = func_00002F24();
    sceNetFreeThreadinfo(M2C_FIELD(arg0, s32 *, 0x44));
    sceKernelDeleteThread(M2C_FIELD(arg0, s32 *, 0x44));
}

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000027FC);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000029F8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002A6C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002AF4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002B68);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002BB8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002C08);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002C64);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002CC0);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002D1C);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002DC8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002E94);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002EE8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002F24);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002F90);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002FC4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00002FD4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003040);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003078);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000030C8);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003104);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003178);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000031A0);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000031AC);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003210);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003388);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000033F4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003424);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003560);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000035C4);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003674);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_000036AC);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_00003774);

INCLUDE_ASM("tmp/asm/282/pspnet_adhoc_matching/nonmatchings/pspnet_adhoc_matching", func_0000382C);
