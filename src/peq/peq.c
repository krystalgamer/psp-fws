#include "common.h"
#include "peq_decls.h"

#if FW_VERSION == 100
s32 scePEQ_driver_213DE849(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/peq", scePEQ_ED13C3B5);
#endif

#if FW_VERSION != 100
s32 scePEQ_driver_213DE849(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/peq", scePEQ_F7EA0632);

INCLUDE_ASM("nonmatchings/peq", scePEQ_FC45514B);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/peq", scePEQ_ED13C3B5);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/peq", func_00000238);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/peq", func_00000274);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/peq", func_000002BC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/peq", func_000002C8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/peq", func_000002D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/peq", func_000002E0);
#endif
