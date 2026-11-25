/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

s32 sceVshLftvMw_304BB1BA(void) {
    func_00034664();
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_0001A8", sceVshLftvMw_C758B54C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0001A8", sceVshLftvMw_77C766AF);
#else
s32 sceVshLftvMw_77C766AF(void) {
    sceVshLftvMw_B45A02C2();
    func_0000FEE4();
    func_00013288();
    func_00014B10();
    func_00017FF0();
    func_0002A3E4();
    func_00017648();
    func_0001A534();
    func_0002C444();
    return 0;
}
#endif

s32 sceVshLftvMw_C76755BE(void) {
    func_0003468C();
    return 0;
}

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0001A8", func_000010EC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_0001A8", func_000004B0_v260);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_middleware_0001A8", func_000004B0_v250);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_0001A8", func_00001274);

INCLUDE_ASM("nonmatchings/lftv_middleware_0001A8", func_000005C8);

INCLUDE_ASM("nonmatchings/lftv_middleware_0001A8", func_0000061C);
#endif
