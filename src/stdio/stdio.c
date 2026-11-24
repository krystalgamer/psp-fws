/* cflags: -Os -frename-registers */
#include "common.h"
#include "k1.h"
#include "stdio_decls.h"

INCLUDE_ASM("nonmatchings/stdio", func_00000000);

INCLUDE_ASM("nonmatchings/stdio", StdioForKernel_2CCF071A);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/stdio", func_0000014C);
#endif

INCLUDE_ASM("nonmatchings/stdio", printf);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/stdio", func_000001E8);
#endif

INCLUDE_ASM("nonmatchings/stdio", StdioForKernel_4F78930A);

#if FW_VERSION == 100
void putchar(s32 arg0) {
    StdioForKernel_4F78930A(arg0, 1);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/stdio", StdioForKernel_D2B2A2A7);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/stdio", StdioForKernel_11A5127A);
#endif

#if FW_VERSION != 100
void putchar(s32 arg0) {
    StdioForKernel_4F78930A(arg0, 1);
}
#endif

INCLUDE_ASM("nonmatchings/stdio", StdioForKernel_36B23B8B);

#if FW_VERSION == 100
void puts(s32 arg0) {
    StdioForKernel_36B23B8B(arg0, 1);
}
#else
INCLUDE_ASM("nonmatchings/stdio", puts);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/stdio", StdioForKernel_D2B2A2A7);
#endif

INCLUDE_ASM("nonmatchings/stdio", getchar);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/stdio", D_00000F8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/stdio", StdioForKernel_11A5127A);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/stdio", gets);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/stdio", func_000006A0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/stdio", StdioForUser_3054D478);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/stdio", StdioForUser_0CBB0571);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/stdio", StdioForUser_A46785C9);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/stdio", StdioForUser_A3B931DB);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/stdio", StdioForUser_9D061C19);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/stdio", StdioForUser_924ABA61);
#endif

#if FW_VERSION == 100
void syslib_D3744BE0(void) {
    func_00000C78();
}
#endif

#if FW_VERSION != 100
void gets(s32 arg0) {
    StdioForKernel_11A5127A(arg0, 0);
}
#endif

#if FW_VERSION != 100
s32 StdioForUser_3054D478(void) {
    return 0x80020001;
}
#endif

#if FW_VERSION != 100
s32 StdioForUser_0CBB0571(void) {
    return 0x80020001;
}
#endif

#if FW_VERSION != 100
void StdioForUser_A46785C9(void) {
}
#endif

#if FW_VERSION != 100
s32 StdioForUser_A3B931DB(void) {
    return 0x80020001;
}
#endif

#if FW_VERSION != 100
s32 StdioForUser_9D061C19(void) {
    return 0x80020001;
}
#endif

#if FW_VERSION != 100
s32 StdioForUser_924ABA61(void) {
    return 0x80020001;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/stdio", func_00000768);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/stdio", func_00000870);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/stdio", func_00000960);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/stdio", func_00000988);
#endif

#if FW_VERSION != 100
s32 sceKernelRegisterStdoutPipe(s32 arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000AFC(1, arg0);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION != 100
s32 sceKernelRegisterStderrPipe(s32 arg0) {
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = shiftK1();
    temp_v0 = func_00000AFC(2, arg0);
    setK1(temp_s0);
    return temp_v0;
}
#endif

#if FW_VERSION != 100
s32 func_00000A18(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00000A20(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00000A28(struct Unk_func_00000A28_0 *arg0) {
    return (arg0->unk4 < 3) ? 0 : 0x800203E8;
}
#endif

#if FW_VERSION != 100
s32 func_00000A40(struct Unk_func_00000A40_0 *arg0) {
    return (arg0->unk4 < 3) ? 0 : 0x800203E8;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/stdio", func_00000A58);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/stdio", func_00000A68);
#endif

#if FW_VERSION != 100
s32 func_00000AF0(void) {
    return 0x800203E9;
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/stdio", D_0000145C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/stdio", D_00001464);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/stdio", D_000014BC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/stdio", D_000014C8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/stdio", D_000014DC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/stdio", func_00000AFC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/stdio", D_00001508);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/stdio", D_0000151C);
#endif

INCLUDE_ASM("nonmatchings/stdio", func_00000C78);

#if FW_VERSION != 100
void syslib_D3744BE0(void) {
    func_00000C78();
}
#endif

INCLUDE_ASM("nonmatchings/stdio", sceKernelStdin);

INCLUDE_ASM("nonmatchings/stdio", sceKernelStdout);

INCLUDE_ASM("nonmatchings/stdio", sceKernelStderr);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/stdio", func_00000C0C);
#endif

INCLUDE_ASM("nonmatchings/stdio", StdioForKernel_98220F3E);

INCLUDE_ASM("nonmatchings/stdio", StdioForKernel_FB5380C5);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/stdio", StdioForKernel_2D8551AB);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/stdio", StdioForKernel_9662BF86);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/stdio", D_0000154C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/stdio", func_00000FB8);
#endif
