/* lang: c++ */
/* cflags: -O0 */
#include "common.h"
#include "lftv_middleware_decls.h"

s32 *func_0004B4AC(void) {
    D_0005C640 = sceNetInetGetErrno();
    return &D_0005C640;
}

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_00056DF0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_00056E00);

INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_00056E10);

INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_00056E20);

INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_00056E40);

INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_00056E60);

INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_00056E80);

INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_00056EA0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_00056EB8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_00056EC8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_00056EE8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_00056F08);

INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_00056F1C);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_00056F28);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004B4E4);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004B5AC);

#if (FW_VERSION >= 260 && FW_VERSION < 303) || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", sceVshLftvMw_323FA41B);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_0007F334);

INCLUDE_RODATA("nonmatchings/lftv_middleware_04B4AC", D_0007F344);
#endif

#if FW_VERSION == 250 || (FW_VERSION >= 303 && FW_VERSION < 352)
void sceVshLftvMw_323FA41B(void) {
    sce_paf_private_memset(&D_0005C680, 0, 0x2020);
    D_0005C680 = 0x8002;
    D_0005C684 = 0;
    D_0005E6A0 = 0x4002;
    D_0005E6A4 = 1;
    D_000606C0 = 0x4002;
    D_000606C4 = 2;
    D_000626E8 = &D_0005C680;
    D_000626E0 = &D_0005E6A0;
    D_000626E4 = &D_000606C0;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", uninit_private_stdio);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004B7B4);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004B7EC);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_00046AF0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_00068D04);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004B9B4);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004B9E0);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004BA34);

void func_0004BAB8(void) {
    sceKernelExitThread(0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004BAE4);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004BB14);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004BB50);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004BBB0);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004BD04);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004BD28);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004BD68);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", sceVshLftvMw_DEAE9FE4);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004BE74);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004BF74);

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004DD7C);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004DDA4);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004BFA0);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004BFC8);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004BFF0);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004C018);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004C040);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004C068);

INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", strnlen);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_000695B4);
#else
INCLUDE_ASM("nonmatchings/lftv_middleware_04B4AC", func_0004C108);
#endif
