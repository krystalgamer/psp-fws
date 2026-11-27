/* lang: c++ */
/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

INCLUDE_ASM("nonmatchings/lftv_middleware_039E3C", func_00039E3C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_039E3C", func_000570DC);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_039E3C", func_00035C38);
#endif
