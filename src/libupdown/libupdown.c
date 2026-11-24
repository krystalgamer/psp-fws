#include "common.h"
#include "libupdown_decls.h"

INCLUDE_ASM("nonmatchings/libupdown", func_00000000);

INCLUDE_ASM("nonmatchings/libupdown", func_0000016C);

INCLUDE_ASM("nonmatchings/libupdown", func_000001EC);

INCLUDE_ASM("nonmatchings/libupdown", func_00000250);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_000002A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libupdown", func_000002E8);
#endif

INCLUDE_ASM("nonmatchings/libupdown", func_00000480);

INCLUDE_ASM("nonmatchings/libupdown", func_000004F8);

INCLUDE_ASM("nonmatchings/libupdown", func_00000550);

INCLUDE_ASM("nonmatchings/libupdown", func_00000564);

INCLUDE_ASM("nonmatchings/libupdown", func_00000574);

INCLUDE_ASM("nonmatchings/libupdown", func_000007B4);

INCLUDE_ASM("nonmatchings/libupdown", func_00000A24);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00000B44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00000C0C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00001DA4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libupdown", func_00000C10);
#endif

INCLUDE_ASM("nonmatchings/libupdown", func_00000D1C);

INCLUDE_ASM("nonmatchings/libupdown", func_00000D70);

INCLUDE_ASM("nonmatchings/libupdown", func_00000DF4);

INCLUDE_ASM("nonmatchings/libupdown", func_00000F24);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_000011D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libupdown", func_00001200);
#endif

INCLUDE_ASM("nonmatchings/libupdown", func_00001534);

INCLUDE_ASM("nonmatchings/libupdown", func_000017D0);

INCLUDE_ASM("nonmatchings/libupdown", func_000018A0);

INCLUDE_ASM("nonmatchings/libupdown", func_000018E0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00001888);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_000018B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00001B4C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libupdown", func_0000191C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libupdown", D_00002B78);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/libupdown", D_00002B88);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libupdown", func_00001938);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libupdown", func_00001A48);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libupdown", func_00001C34);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libupdown", func_00001DA4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libupdown", func_00001E30);
#endif

INCLUDE_ASM("nonmatchings/libupdown", func_00001F84);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_000020A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/libupdown", func_000020A0);
#endif

INCLUDE_ASM("nonmatchings/libupdown", func_000020D8);

INCLUDE_ASM("nonmatchings/libupdown", func_0000214C);

INCLUDE_ASM("nonmatchings/libupdown", func_000021D0);

INCLUDE_ASM("nonmatchings/libupdown", sceLibUpdateDL_F6690A9A);

INCLUDE_ASM("nonmatchings/libupdown", sceLibUpdateDL_FC1AB540);

INCLUDE_ASM("nonmatchings/libupdown", sceLibUpdateDL_D6A09757);

INCLUDE_ASM("nonmatchings/libupdown", sceLibUpdateDL_FD675E8D);

INCLUDE_ASM("nonmatchings/libupdown", sceLibUpdateDL_FA9AA797);

#if FW_VERSION == 100
void func_0000258C(void) {
    sceKernelGetSystemTimeLow();
}
#endif

#if FW_VERSION == 100
s32 sceLibUpdateDL_88FF3935(s32 arg0) {
    func_00000550(arg0 & 0xFF);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", sceLibUpdateDL_B5DB018D);
#endif

#if FW_VERSION == 100
void sceLibUpdateDL_F7E66CB4(void) {
    func_00000D70();
}
#endif

#if FW_VERSION == 100
s32 sceLibUpdateDL_C1AF1076(void) {
    func_00000564();
    return 0;
}
#endif

#if FW_VERSION != 100
void func_0000258C(void) {
    sceKernelGetSystemTimeLow();
}
#endif

#if FW_VERSION != 100
s32 sceLibUpdateDL_88FF3935(s32 arg0) {
    func_00000550(arg0 & 0xFF);
    return 0;
}
#endif

#if FW_VERSION != 100
void sceLibUpdateDL_B5DB018D(s32 arg0) {
    func_0000191C(arg0 & 0xFF);
}
#endif

#if FW_VERSION != 100
void sceLibUpdateDL_F7E66CB4(void) {
    func_00000D70();
}
#endif

#if FW_VERSION != 100
s32 sceLibUpdateDL_C1AF1076(void) {
    func_00000564();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/libupdown", sceLibUpdateDL_4F49C9C1);

INCLUDE_ASM("nonmatchings/libupdown", func_00002660);

INCLUDE_ASM("nonmatchings/libupdown", func_000026F0);

#if FW_VERSION == 100
s32 module_start(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 module_stop(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00002510);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_0000253C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00002568);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_0000257C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00002588);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_000025C0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00002600);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00002634);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00002660_v100);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00002700);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00002780);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00002858);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_000028A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_000028D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_0000293C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00002B14);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libupdown", func_00002B44);
#endif
