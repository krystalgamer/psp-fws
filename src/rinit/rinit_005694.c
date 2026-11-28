/* newlib-1.12.0 libc/stdio/fflush.c (BSD-style licence, see the newlib COPYING.NEWLIB) */
#include "common.h"
#include "rinit_decls.h"
#include "rinit_newlib.h"

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

/* Flush a single file, or (if fp is NULL) all files.  */

int
fflush(register FILE * fp)
{
  register unsigned char *p;
  register int n, t;

  if (fp == NULL)
    return _fwalk (_GLOBAL_REENT, fflush);

  _flockfile(fp);

  CHECK_INIT (fp);

  t = fp->_flags;
  if ((t & __SWR) == 0 || (p = fp->_bf._base) == NULL)
    {
      _funlockfile(fp);
      return 0;
    }
  n = fp->_p - p;		/* write this much */

  /*
   * Set these immediately to avoid problems with longjmp
   * and to allow exchange buffering (via setvbuf) in user
   * write function.
   */
  fp->_p = p;
  fp->_w = t & (__SLBF | __SNBF) ? 0 : fp->_bf._size;

  while (n > 0)
    {
      t = (*fp->_write) (fp->_cookie, (char *) p, n);
      if (t <= 0)
	{
          fp->_flags |= __SERR;
          _funlockfile(fp);
          return EOF;
	}
      p += t;
      n -= t;
    }
  _funlockfile(fp);
  return 0;
}
