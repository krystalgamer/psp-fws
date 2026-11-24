#include "common.h"
#include "impose_plugin_decls.h"

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/impose_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/impose_plugin", module_start);

#if FW_VERSION == 100
s32 module_stop(void) {
    func_00000DE8();
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose_plugin", func_0000015C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000180);
#endif

#if FW_VERSION != 100
s32 module_stop(void) {
    func_000010D0();
    return 0;
}
#endif

#if FW_VERSION != 100
void func_0000015C(struct Unk_func_0000015C_0 *arg0) {
    arg0->unk1FD = 0;
    arg0->unk1FE = 0;
    scePaf_86B41BA3();
}
#endif

#if FW_VERSION != 100
void func_00000180(struct Unk_func_00000180_0 *arg0) {
    arg0->unk1FD = 0;
    arg0->unk1FE = 0;
    scePaf_86B41BA3();
}
#endif

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001378);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001380);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_0000138C);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001398);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013A4);
#endif

INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013B4);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013C0);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013C8);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013DC);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013EC);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001404);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001414);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/impose_plugin", D_000013A4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001420);
#endif

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001434);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001444);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_00001450);

INCLUDE_RODATA("nonmatchings/impose_plugin", D_0000145C);

INCLUDE_ASM("nonmatchings/impose_plugin", func_000001A4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose_plugin", func_000003BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose_plugin", func_000003CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000420);
#endif

INCLUDE_ASM("nonmatchings/impose_plugin", func_000006B8);

INCLUDE_ASM("nonmatchings/impose_plugin", func_0000073C);

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000770);

INCLUDE_ASM("nonmatchings/impose_plugin", func_0000082C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose_plugin", func_000008DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000924);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000964);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000A2C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/impose_plugin", func_00000B5C);
#endif

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000C04);

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000C70);

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000CDC);

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000D14);

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000E6C);

INCLUDE_ASM("nonmatchings/impose_plugin", func_00000ED0);

#if FW_VERSION == 100
void func_00000D64(void) {

}
#endif

#if FW_VERSION != 100
void func_0000104C(void) {
}
#endif

INCLUDE_ASM("nonmatchings/impose_plugin", func_00001054);

INCLUDE_ASM("nonmatchings/impose_plugin", func_00001078);
