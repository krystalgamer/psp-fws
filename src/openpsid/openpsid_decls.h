#ifndef OPENPSID_DECLS_H
#define OPENPSID_DECLS_H

#include "common.h"
#include "m2c_macros.h"


s32 func_00000244(void);
s32 func_0000024C(void);
int module_start(SceSize args, void *argp);
int sceDdrdbCertvry(u8 *cert);
int sceDdrdbDecrypt(u8 *buf, u32 size);
int sceDdrdbEncrypt(u8 *buf, u32 size);
int sceDdrdbHash(u8 *data, u32 size, u8 *digest);
int sceDdrdbMul1(u8 *out);
int sceDdrdbMul2(u8 *a, u8 *b, u8 *out);
int sceDdrdbPrngen(u8 *out);
int sceDdrdbSiggen(u8 *privKey, u8 *digest, u8 *sig);
int sceDdrdbSigvry(u8 *pubKey, u8 *digest, u8 *sig);
int sceOpenPSIDGetOpenPSID(u8 *psid);

#endif
