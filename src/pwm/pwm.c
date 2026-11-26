/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pwm_decls.h"

INCLUDE_ASM("nonmatchings/pwm", scePwmInit);

INCLUDE_ASM("nonmatchings/pwm", scePwmStart);

INCLUDE_ASM("nonmatchings/pwm", scePwmStop);

INCLUDE_ASM("nonmatchings/pwm", scePwmChangeDuty);

INCLUDE_ASM("nonmatchings/pwm", scePwmReferDuty);

INCLUDE_ASM("nonmatchings/pwm", scePwmIsLoading);

s32 module_start(void) {
    scePwmInit();
    return 0;
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pwm", module_reboot_before);
#else
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_00000550);
    return 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pwm", scePwmEnd);
#else
s32 scePwmEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_00000550);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pwm", scePwmSuspend);

s32 scePwmResume(void) {
    sceSysregPwmClkEnable();
    sceSysregPwmIoEnable();
    return 0;
}

INCLUDE_ASM("nonmatchings/pwm", func_00000350);

INCLUDE_RODATA("nonmatchings/pwm", D_00000548);
