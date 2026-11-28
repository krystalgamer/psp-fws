/* newlib-1.12.0 libc/reent/sbrkr.c (BSD-style licence, see the newlib COPYING.NEWLIB) */
#include "common.h"
#include "rinit_decls.h"
#include "rinit_newlib.h"

/* Reentrant version of sbrk system call. */

/* Some targets provides their own versions of these functions.  Those
   targets should define REENTRANT_SYSCALLS_PROVIDED in TARGET_CFLAGS.  */

/* If MALLOC_PROVIDED is defined, we don't need this function.  */

/* We use the errno variable used by the system dependent layer.  */
#undef errno
extern int errno;

void *
_sbrk_r(struct _reent *ptr, ptrdiff_t incr)
{
  char *ret;
  void *_sbrk(ptrdiff_t);

  errno = 0;
  if ((ret = (char *)(_sbrk (incr))) == (void *) -1 && errno != 0)
    ptr->_errno = errno;
  return ret;
}
