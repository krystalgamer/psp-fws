/* newlib stdlib/malloc.c (free only) */
#include "common.h"
#include "rinit_decls.h"
#include "rinit_newlib.h"

void
free (aptr)
     void * aptr;
{
  _free_r (_REENT, aptr);
}
