#ifndef IDSTORAGE_H
#define IDSTORAGE_H

#include "common.h"

int sceIdStorageLookup(u16 key, u32 offset, void *buf, u32 len);

#endif
