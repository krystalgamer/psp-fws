/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
void _ZN3paf15CriticalSectionC1Ev(struct Unk_scePaf_B884B031_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk0 = sceKernelCreateEventFlag(&D_0019D1F0, 0x200U, 3U, NULL);
}

void func_001180D8(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void _ZN3paf15CriticalSectionD1Ev(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void paf::CriticalSection::Enter() {
    struct Unk_scePaf_C1F72218_0 *arg0 = (struct Unk_scePaf_C1F72218_0 *) this;
    u32 temp_v0;

    sceKernelWaitEventFlag(arg0->unk0, 1U, 0x20, NULL, NULL);
    temp_v0 = sceKernelGetThreadId();
    if (arg0->unk4 != temp_v0) {
        sceKernelSetEventFlag((s32) arg0->unk0, 1);
        sceKernelWaitEventFlag(arg0->unk0, 3U, 0x20, NULL, NULL);
        arg0->unk4 = temp_v0;
    }
    arg0->unk8 = (s32) (arg0->unk8 + 1);
    sceKernelSetEventFlag((s32) arg0->unk0, 1);
}

void paf::CriticalSection::Leave() {
    struct Unk_scePaf_539F2583_0 *arg0 = (struct Unk_scePaf_539F2583_0 *) this;
    s32 temp_v1;

    sceKernelWaitEventFlag(arg0->unk0, 1U, 0x20, NULL, NULL);
    temp_v1 = arg0->unk8 - 1;
    arg0->unk8 = temp_v1;
    if (temp_v1 == 0) {
        sceKernelSetEventFlag((s32) arg0->unk0, 2);
        arg0->unk4 = 0;
    }
    sceKernelSetEventFlag((s32) arg0->unk0, 1);
}

INCLUDE_ASM("nonmatchings/paf_118094", func_0011820C);

void func_00118288(void) {
    func_0011820C(1, 0xFFFF);
}

void func_001182A8(void) {
    func_0011820C(0, 0xFFFF);
}
#endif
