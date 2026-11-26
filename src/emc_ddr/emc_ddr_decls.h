#ifndef EMC_DDR_DECLS_H
#define EMC_DDR_DECLS_H

#include "common.h"
#include "m2c_macros.h"

extern M2C_UNK sceDdrFlush;

M2C_UNK DmacManForKernel_32757C57(M2C_UNK);
s32 module_reboot_before(void);
s32 module_start(void);
s32 sceDdrInit(void);
s32 sceDdrSuspend(void);
s32 sceDdrEnd(void);
s32 sceDdrResume(void);

#endif
