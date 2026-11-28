/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -frename-registers -mext */
/* compiler[282,300,301,302,303,310,311,330,340]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pwm_decls.h"

INCLUDE_ASM("nonmatchings/pwm", scePwmInit);

INCLUDE_ASM("nonmatchings/pwm", scePwmStart);

INCLUDE_ASM("nonmatchings/pwm", scePwmStop);

s32 scePwmChangeDuty(u32 id, u16 duty, u16 cycle) {
    if (id >= 3) {
        return 0x80000102;
    }
    if (D_00000590[id] == 2) {
        return 0x80000021;
    }
    ((volatile ScePwmHw *)0xBE300000)[id].duty = duty;
    ((volatile ScePwmHw *)0xBE300000)[id].cycle = cycle;
    ((volatile ScePwmHw *)0xBE300000)[id].load = 1;
    return 0;
}

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

s32 func_00000350(s32 ev_id) {
    s32 i;

    switch (ev_id) {
    case 0x4004:
        sceSysregPwmIoDisable();
        sceSysregPwmClkDisable();
        for (i = 0; i < 3; i++) {
            D_00000590[i] = 0;
        }
        break;
    case 0x10004:
        sceSysregPwmClkEnable();
        sceSysregPwmIoEnable();
        break;
    }
    return 0;
}

INCLUDE_RODATA("nonmatchings/pwm", D_00000548);
