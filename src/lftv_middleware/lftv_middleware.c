/* lang: c++ */
/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware", func_00000030);

INCLUDE_ASM("nonmatchings/lftv_middleware", func_000000B8);
