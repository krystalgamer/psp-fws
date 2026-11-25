#include "common.h"

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/idmanager", func_00000000);
#else
INCLUDE_ASM("nonmatchings/idmanager", module_start);

INCLUDE_RODATA("nonmatchings/idmanager", D_000008A0);

INCLUDE_RODATA("nonmatchings/idmanager", D_000008A4);

INCLUDE_RODATA("nonmatchings/idmanager", D_000008BC);

INCLUDE_RODATA("nonmatchings/idmanager", D_000008D0);

INCLUDE_RODATA("nonmatchings/idmanager", D_000008E8);

INCLUDE_RODATA("nonmatchings/idmanager", D_000008FC);

INCLUDE_RODATA("nonmatchings/idmanager", D_00000914);

INCLUDE_RODATA("nonmatchings/idmanager", D_00000928);

INCLUDE_RODATA("nonmatchings/idmanager", D_0000093C);

INCLUDE_RODATA("nonmatchings/idmanager", D_00000954);

INCLUDE_RODATA("nonmatchings/idmanager", D_00000964);

INCLUDE_RODATA("nonmatchings/idmanager", D_0000096C);

INCLUDE_RODATA("nonmatchings/idmanager", D_00000974);

INCLUDE_RODATA("nonmatchings/idmanager", D_00000990);

INCLUDE_RODATA("nonmatchings/idmanager", D_00000994);

INCLUDE_RODATA("nonmatchings/idmanager", D_000009A4);

INCLUDE_RODATA("nonmatchings/idmanager", D_000009B0);

INCLUDE_RODATA("nonmatchings/idmanager", D_000009B4);

INCLUDE_ASM("nonmatchings/idmanager", func_00000060);
#endif

INCLUDE_ASM("nonmatchings/idmanager", func_00000254);

INCLUDE_ASM("nonmatchings/idmanager", func_0000034C);

INCLUDE_ASM("nonmatchings/idmanager", func_0000041C);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/idmanager", func_0000046C);

INCLUDE_ASM("nonmatchings/idmanager", func_00000534);

INCLUDE_ASM("nonmatchings/idmanager", module_start);
#else
INCLUDE_ASM("nonmatchings/idmanager", func_00000510);

INCLUDE_ASM("nonmatchings/idmanager", func_000005F0);

INCLUDE_ASM("nonmatchings/idmanager", sceIdMgr_driver_F464F91C);
#endif
