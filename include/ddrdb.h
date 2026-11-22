#ifndef DDRDB_H
#define DDRDB_H

#include "common.h"

/* sceDdrdb_driver imports (openpsid.prx); prototypes recovered from call sites. */
int sceDdrdbHash(u8 *data, u32 size, u8 *digest);
int sceDdrdbSigvry(u8 *pubKey, u8 *digest, u8 *sig);
int sceDdrdbCertvry(u8 *cert);
int sceDdrdbEncrypt(u8 *buf, u32 size);
int sceDdrdbDecrypt(u8 *buf, u32 size);
int sceDdrdbMul1(u8 *buf);
int sceDdrdbMul2(u8 *a, u8 *b, u8 *out);
int sceDdrdbSiggen(u8 *privKey, u8 *digest, u8 *sig);
int sceDdrdbPrngen(u8 *buf);

#endif
