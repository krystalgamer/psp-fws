/* newlib-1.12.0 libc/stdlib/malloc.c */
#include "common.h"
#include "rinit_decls.h"
#include "rinit_newlib.h"

void *
malloc (nbytes)
     size_t nbytes;
{
  return _malloc_r (_REENT, nbytes);
}

void
free (aptr)
     void * aptr;
{
  _free_r (_REENT, aptr);
}
