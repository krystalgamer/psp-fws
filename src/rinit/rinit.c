#include "common.h"
#include "rinit_decls.h"

INCLUDE_ASM("nonmatchings/rinit", __do_global_dtors_aux);

INCLUDE_ASM("nonmatchings/rinit", frame_dummy);

