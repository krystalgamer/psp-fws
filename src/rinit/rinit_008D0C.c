/* newlib-1.12.0 libc/reent/closer.c (BSD-style licence, see the newlib COPYING.NEWLIB) */
#include "common.h"
#include "rinit_decls.h"
#include "rinit_newlib.h"

/* Reentrant version of close system call.  */

/* Some targets provides their own versions of this functions.  Those
   targets should define REENTRANT_SYSCALLS_PROVIDED in TARGET_CFLAGS.  */

/* We use the errno variable used by the system dependent layer.  */
#undef errno
extern int errno;

int
_close_r (ptr, fd)
     struct _reent *ptr;
     int fd;
{
  int ret;

  errno = 0;
  if ((ret = _close (fd)) == -1 && errno != 0)
    ptr->_errno = errno;
  return ret;
}
