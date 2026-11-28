/* newlib-1.12.0 libc/reent/reent.c (BSD-style licence, see the newlib COPYING.NEWLIB) */
#include "common.h"
#include "rinit_decls.h"
#include "rinit_newlib.h"

/* We use the errno variable used by the system dependent layer.  */
#undef errno
int errno;

/* Interim cleanup code */

void
cleanup_glue(struct _reent *ptr, struct _glue *glue)
{
  /* Have to reclaim these in reverse order: */
  if (glue->_next)
    cleanup_glue (ptr, glue->_next);

  _free_r (ptr, glue);
}

void
_reclaim_reent(struct _reent *ptr)
{
  if (ptr != _impure_ptr)
    {
      /* used by mprec routines. */
      if (_REENT_MP_FREELIST(ptr))
	{
	  int i;
	  for (i = 0; i < 15 /* _Kmax */; i++) 
	    {
	      struct _Bigint *thisone, *nextone;
	
	      nextone = _REENT_MP_FREELIST(ptr)[i];
	      while (nextone)
		{
		  thisone = nextone;
		  nextone = nextone->_next;
		  _free_r (ptr, thisone);
		}
	    }    

	  _free_r (ptr, _REENT_MP_FREELIST(ptr));
	}

      /* atexit stuff */
      if ((ptr->_atexit) && (ptr->_atexit != &ptr->_atexit0))
	{
	  struct _atexit *p, *q;
	  for (p = ptr->_atexit; p != &ptr->_atexit0;)
	    {
	      q = p;
	      p = p->_next;
	      _free_r (ptr, q);
	    }
	}

      if (ptr->_cvtbuf)
	_free_r (ptr, ptr->_cvtbuf);

      if (ptr->__sdidinit)
	{
	  /* cleanup won't reclaim memory 'coz usually it's run
	     before the program exits, and who wants to wait for that? */
	  ptr->__cleanup (ptr);

	  if (ptr->__sglue._next)
	    cleanup_glue (ptr, ptr->__sglue._next);
	}

      /* Malloc memory not reclaimed; no good way to return memory anyway. */

    }
}

/*
 *  Do atexit() processing and cleanup
 *
 *  NOTE:  This is to be executed at task exit.  It does not tear anything
 *         down which is used on a global basis.
 */

void
_wrapup_reent(struct _reent *ptr)
{
  register struct _atexit *p;
  register int n;

  if (ptr == 0)
      ptr = _REENT;

  for (p = ptr->_atexit; p; p = p->_next)
    for (n = p->_ind; --n >= 0;)
      (*p->_fns[n]) ();
  if (ptr->__cleanup)
    (*ptr->__cleanup) (ptr);
}
