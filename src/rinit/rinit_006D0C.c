/* newlib-1.12.0 libc/string/memchr.c (BSD-style licence, see the newlib COPYING.NEWLIB) */
#include "common.h"
#include "rinit_decls.h"

/* Nonzero if either X or Y is not aligned on a "long" boundary.  */
#define UNALIGNED(X) ((long)X & (sizeof (long) - 1))

/* How many bytes are loaded each iteration of the word copy loop.  */
#define LBLOCKSIZE (sizeof (long))

/* Threshhold for punting to the bytewise iterator.  */
#define TOO_SMALL(LEN)  ((LEN) < LBLOCKSIZE)

#define DETECTNULL(X) (((X) - 0x01010101) & ~(X) & 0x80808080)

void *
memchr(const void * src_void, int c, size_t length)
{
  const unsigned char *src = (const unsigned char *) src_void;
  unsigned long *asrc;
  unsigned long  buffer;
  unsigned long  mask;
  int i, j;

  c &= 0xff;
  
  /* If the size is small, or src is unaligned, then 
     use the bytewise loop.  We can hope this is rare.  */
  if (!TOO_SMALL (length) && !UNALIGNED (src)) 
    {
      /* The fast code reads the ASCII one word at a time and only 
         performs the bytewise search on word-sized segments if they
         contain the search character, which is detected by XORing 
         the word-sized segment with a word-sized block of the search
         character and then detecting for the presence of NULL in the
         result.  */
      asrc = (unsigned long*) src;
      mask = 0;
      for (i = 0; i < LBLOCKSIZE; i++)
        mask = (mask << 8) + c;

      while (length >= LBLOCKSIZE)
        {
          buffer = *asrc;
          buffer ^=  mask;
          if (DETECTNULL (buffer))
	    {
              src = (unsigned char*) asrc;
  	      for ( j = 0; j < LBLOCKSIZE; j++ )
	        {
                  if (*src == c)
                    return (char*) src;
                  src++;
	        }
   	    }
          length -= LBLOCKSIZE;
          asrc++;
        }
  
      /* If there are fewer than LBLOCKSIZE characters left,
         then we resort to the bytewise loop.  */

      src = (unsigned char*) asrc;
    }

  while (length--)
    { 
      if (*src == c)
        return (char*) src;
      src++;
    } 

  return NULL;
}
