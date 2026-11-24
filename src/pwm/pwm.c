/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pwm_decls.h"

INCLUDE_ASM("nonmatchings/pwm", scePwm_driver_68BA9CC1);

INCLUDE_ASM("nonmatchings/pwm", scePwm_driver_850ED3D3);

INCLUDE_ASM("nonmatchings/pwm", scePwm_driver_1FC555BE);

INCLUDE_ASM("nonmatchings/pwm", scePwm_driver_AB6D2E36);

INCLUDE_ASM("nonmatchings/pwm", scePwm_driver_F624C1A0);

INCLUDE_ASM("nonmatchings/pwm", scePwm_driver_93F30DAC);

#if FW_VERSION == 100
s32 module_start(void) {
    scePwm_driver_68BA9CC1();
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pwm", module_reboot_before);
#endif

#if FW_VERSION != 100
s32 module_start(void) {
    scePwm_driver_68BA9CC1();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_reboot_before(void) {
    sceSysEventForKernel_D7D3FDCD(&D_00000550);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pwm", scePwm_driver_B3169427);

INCLUDE_ASM("nonmatchings/pwm", scePwm_driver_526F94FC);

#if FW_VERSION == 100
s32 scePwm_driver_E449F656(void) {
    sceSysreg_driver_7DCA8302();
    sceSysreg_driver_7A5D2D15();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 scePwm_driver_E449F656(void) {
    sceSysreg_driver_7DCA8302();
    sceSysreg_driver_7A5D2D15();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pwm", func_00000350);

INCLUDE_RODATA("nonmatchings/pwm", D_00000548);
