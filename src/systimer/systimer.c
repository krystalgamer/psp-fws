/* cflags: -O2 -frename-registers */
#include "common.h"
#include "systimer_decls.h"

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/systimer", SysTimerForKernel_C99073E3);

INCLUDE_ASM("nonmatchings/systimer", func_000000E0);

INCLUDE_ASM("nonmatchings/systimer", SysTimerForKernel_975D8E84);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000002B4(void **arg0) {
    void *temp_a2;

    temp_a2 = *arg0;
    M2C_FIELD(temp_a2, s32 *, 0) = (s32) (M2C_FIELD(temp_a2, s32 *, 0x100) & 0x7F7FFFFF);
}

INCLUDE_ASM("nonmatchings/systimer", func_000002D0);
#endif

#if FW_VERSION == 282
void func_000002B0(void **arg0) {
    struct Unk_func_000002B0_temp_a2 *temp_a2;

    temp_a2 = *arg0;
    temp_a2->unk0 = (s32) (temp_a2->unk100 & 0x7F7FFFFF);
}

INCLUDE_ASM("nonmatchings/systimer", func_000002CC);
#endif

INCLUDE_ASM("nonmatchings/systimer", syslib_D3744BE0);

INCLUDE_ASM("nonmatchings/systimer", module_reboot_before);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/systimer", func_00000128);

INCLUDE_ASM("nonmatchings/systimer", func_00000160);

INCLUDE_ASM("nonmatchings/systimer", func_000001D8);

INCLUDE_ASM("nonmatchings/systimer", SysTimerForKernel_C99073E3);
#endif

INCLUDE_ASM("nonmatchings/systimer", SysTimerForKernel_C105CF38);

INCLUDE_ASM("nonmatchings/systimer", SysTimerForKernel_B53534B4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/systimer", func_000004C0);

INCLUDE_ASM("nonmatchings/systimer", SysTimerForKernel_975D8E84);
#endif

INCLUDE_ASM("nonmatchings/systimer", SysTimerForKernel_A95143E2);

INCLUDE_ASM("nonmatchings/systimer", SysTimerForKernel_4A01F9D3);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/systimer", func_00000798);
#endif

INCLUDE_ASM("nonmatchings/systimer", SysTimerForKernel_54BB5DB4);

INCLUDE_ASM("nonmatchings/systimer", SysTimerForKernel_228EDAE4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/systimer", func_00000898);
#endif

INCLUDE_ASM("nonmatchings/systimer", SysTimerForKernel_53231A15);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/systimer", func_00000878);

INCLUDE_ASM("nonmatchings/systimer", func_000008F0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/systimer", func_00000864);

INCLUDE_ASM("nonmatchings/systimer", func_000008DC);
#endif
