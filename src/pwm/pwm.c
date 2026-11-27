/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pwm_decls.h"

INCLUDE_ASM("nonmatchings/pwm", scePwmInit);

INCLUDE_ASM("nonmatchings/pwm", scePwmStart);

INCLUDE_ASM("nonmatchings/pwm", scePwmStop);

INCLUDE_ASM("nonmatchings/pwm", scePwmChangeDuty);

INCLUDE_ASM("nonmatchings/pwm", scePwmReferDuty);

s32 scePwmIsLoading(u32 id) {
    if (id >= 3) {
        return 0x80000102;
    }
    return *(volatile u32 *)(0xBE300008 + (id << 5)) & 1;
}

s32 module_start(void) {
    scePwmInit();
    return 0;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pwm", module_reboot_before);
#else
s32 module_reboot_before(void) {
    sceKernelUnregisterSysEventHandler(&D_00000550);
    return 0;
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pwm", scePwmEnd);
#else
s32 scePwmEnd(void) {
    sceKernelUnregisterSysEventHandler(&D_00000550);
    return 0;
}
#endif

s32 scePwmSuspend(void) {
    s32 i;

    sceSysregPwmIoDisable();
    sceSysregPwmClkDisable();
    for (i = 0; i < 3; i++) {
        D_00000590[i] = 0;
    }
    return 0;
}

s32 scePwmResume(void) {
    sceSysregPwmClkEnable();
    sceSysregPwmIoEnable();
    return 0;
}

INCLUDE_ASM("nonmatchings/pwm", func_00000350);

INCLUDE_RODATA("nonmatchings/pwm", D_00000548);
