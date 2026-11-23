/* cflags: -Os -frename-registers */
#include "common.h"
#include "stdio_decls.h"

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", func_00000000);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", StdioForKernel_2CCF071A);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", printf);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", func_000001E8);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", StdioForKernel_4F78930A);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", StdioForKernel_D2B2A2A7);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", StdioForKernel_11A5127A);

void putchar(s32 arg0) {
    StdioForKernel_4F78930A(arg0, 1);
}

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", StdioForKernel_36B23B8B);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", puts);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", getchar);

void gets(s32 arg0) {
    StdioForKernel_11A5127A(arg0, 0);
}

s32 StdioForUser_3054D478(void) {
    return 0x80020001;
}

s32 StdioForUser_0CBB0571(void) {
    return 0x80020001;
}

void StdioForUser_A46785C9(void) {
}

s32 StdioForUser_A3B931DB(void) {
    return 0x80020001;
}

s32 StdioForUser_9D061C19(void) {
    return 0x80020001;
}

s32 StdioForUser_924ABA61(void) {
    return 0x80020001;
}

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", func_00000768);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", func_00000870);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", func_00000960);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", func_00000988);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", sceKernelRegisterStdoutPipe);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", sceKernelRegisterStderrPipe);

s32 func_00000A18(void) {
    return 0;
}

s32 func_00000A20(void) {
    return 0;
}

s32 func_00000A28(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) < 3) ? 0 : 0x800203E8;
}

s32 func_00000A40(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) < 3) ? 0 : 0x800203E8;
}

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", func_00000A58);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", func_00000A68);

s32 func_00000AF0(void) {
    return 0x800203E9;
}

INCLUDE_RODATA("tmp/asm/282/stdio/nonmatchings/stdio", D_0000145C);

INCLUDE_RODATA("tmp/asm/282/stdio/nonmatchings/stdio", D_00001464);

INCLUDE_RODATA("tmp/asm/282/stdio/nonmatchings/stdio", D_000014BC);

INCLUDE_RODATA("tmp/asm/282/stdio/nonmatchings/stdio", D_000014C8);

INCLUDE_RODATA("tmp/asm/282/stdio/nonmatchings/stdio", D_000014DC);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", func_00000AFC);

INCLUDE_RODATA("tmp/asm/282/stdio/nonmatchings/stdio", D_00001508);

INCLUDE_RODATA("tmp/asm/282/stdio/nonmatchings/stdio", D_0000151C);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", func_00000C78);

void syslib_D3744BE0(void) {
    func_00000C78();
}

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", sceKernelStdin);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", sceKernelStdout);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", sceKernelStderr);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", StdioForKernel_98220F3E);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", StdioForKernel_FB5380C5);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", StdioForKernel_2D8551AB);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", StdioForKernel_9662BF86);

INCLUDE_RODATA("tmp/asm/282/stdio/nonmatchings/stdio", D_0000154C);

INCLUDE_ASM("tmp/asm/282/stdio/nonmatchings/stdio", func_00000FB8);
