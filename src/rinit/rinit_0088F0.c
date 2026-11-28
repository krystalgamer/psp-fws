/* newlib-1.12.0 libc/stdio/stdio.c (BSD-style licence, see the newlib COPYING.NEWLIB) */
#include "common.h"
#include "rinit_decls.h"
#include "rinit_newlib.h"

/* No user fns here.  Pesch 15apr92. */

/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/*
 * Small standard I/O/seek/close functions.
 * These maintain the `known seek offset' for seek optimisation.
 */

_READ_WRITE_RETURN_TYPE
__sread (cookie, buf, n)
     void * cookie;
     char *buf;
     int n;
{
  register FILE *fp = (FILE *) cookie;
  register int ret;

  ret = _read_r (_REENT, fp->_file, buf, n);

  /* If the read succeeded, update the current offset.  */

  if (ret >= 0)
    fp->_offset += ret;
  else
    fp->_flags &= ~__SOFF;	/* paranoia */
  return ret;
}

_READ_WRITE_RETURN_TYPE
__swrite (cookie, buf, n)
     void * cookie;
     char const *buf;
     int n;
{
  register FILE *fp = (FILE *) cookie;
  int w;

  if (fp->_flags & __SAPP)
    (void) _lseek_r (_REENT, fp->_file, (_off_t) 0, SEEK_END);
  fp->_flags &= ~__SOFF;	/* in case O_APPEND mode is set */

  w = _write_r (_REENT, fp->_file, buf, n);

  return w;
}

_fpos_t
__sseek (cookie, offset, whence)
     void * cookie;
     _fpos_t offset;
     int whence;
{
  register FILE *fp = (FILE *) cookie;
  register _off_t ret;

  ret = _lseek_r (_REENT, fp->_file, (_off_t) offset, whence);
  if (ret == -1L)
    fp->_flags &= ~__SOFF;
  else
    {
      fp->_flags |= __SOFF;
      fp->_offset = ret;
    }
  return ret;
}

int
__sclose (cookie)
     void * cookie;
{
  FILE *fp = (FILE *) cookie;

  return _close_r (_REENT, fp->_file);
}
