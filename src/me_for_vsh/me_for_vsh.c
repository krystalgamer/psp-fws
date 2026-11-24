#include "common.h"
#include "me_for_vsh_decls.h"

#if FW_VERSION >= 150
s32 sceMe4VSH_driver_99CBCF35(void) {
    sceMeCore_driver_3D5F109C(0x185);
    return 1;
}
#else
s32 sceMe4VSH_driver_99CBCF35(void) {
    sceMeWrapper_driver_3D5F109C(0x185);
    return 1;
}
#endif
