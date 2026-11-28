/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -mext */
#include "common.h"
#include "wlanfirm_magpie_decls.h"

INCLUDE_ASM("nonmatchings/wlanfirm_magpie", module_start);

s32 module_stop(void) {
    return 0;
}

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/wlanfirm_magpie", D_0000010C);

INCLUDE_RODATA("nonmatchings/wlanfirm_magpie", D_00000110);

INCLUDE_RODATA("nonmatchings/wlanfirm_magpie", D_00000128);

INCLUDE_RODATA("nonmatchings/wlanfirm_magpie", D_0000013C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/wlanfirm_magpie", D_0000015C_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/wlanfirm_magpie", D_0000015C_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/wlanfirm_magpie", D_0000015C_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/wlanfirm_magpie", D_00000160);
#endif

INCLUDE_RODATA("nonmatchings/wlanfirm_magpie", D_0000015C);

INCLUDE_RODATA("nonmatchings/wlanfirm_magpie", D_00000898);
