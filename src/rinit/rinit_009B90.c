/* gcc-3.3.3 gcc/config/fp-bit.c built as dp-bit.c with -DL_addsub_df (libgcc; GPL with the
   libgcc exception). The configuration (tconfig.h, mips t-file) is resolved below. */
#include "common.h"

#define BITS_PER_UNIT 8
#define ROUND_TOWARDS_ZERO 0
#define FLOAT_BIT_ORDER_MISMATCH
#define FINE_GRAINED_LIBRARIES
#define L_addsub_df

/* This is a software floating point library which can be used
   for targets without hardware floating point. 
   Copyright (C) 1994, 1995, 1996, 1997, 1998, 2000, 2001, 2002, 2003
   Free Software Foundation, Inc.

This file is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

In addition to the permissions in the GNU General Public License, the
Free Software Foundation gives you unlimited permission to link the
compiled version of this file with other programs, and to distribute
those programs without any restriction coming from the use of this
file.  (The General Public License restrictions do apply in other
respects; for example, they cover modification of the file, and
distribution when not linked into another program.)

This file is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* As a special exception, if you link this library with other files,
   some of which are compiled with GCC, to produce an executable,
   this library does not by itself cause the resulting executable
   to be covered by the GNU General Public License.
   This exception does not however invalidate any other reasons why
   the executable file might be covered by the GNU General Public License.  */

/* This implements IEEE 754 format arithmetic, but does not provide a
   mechanism for setting the rounding mode, or for generating or handling
   exceptions.

   The original code by Steve Chamberlain, hacked by Mark Eichin and Jim
   Wilson, all of Cygnus Support.  */

/* The intended way to use this file is to make two copies, add `#define FLOAT'
   to one copy, then compile both copies and add them to libgcc.a.  */

/* Header file for fp-bit.c.  */
/* Copyright (C) 2000, 2002, 2003
   Free Software Foundation, Inc.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* As a special exception, if you link this library with other files,
   some of which are compiled with GCC, to produce an executable,
   this library does not by itself cause the resulting executable
   to be covered by the GNU General Public License.
   This exception does not however invalidate any other reasons why
   the executable file might be covered by the GNU General Public License.  */

#define GCC_FP_BIT_H

/* Defining FINE_GRAINED_LIBRARIES allows one to select which routines
   from this file are compiled via additional -D options.

   This avoids the need to pull in the entire fp emulation library
   when only a small number of functions are needed.

   If FINE_GRAINED_LIBRARIES is not defined, then compile every
   suitable routine.  */

typedef float SFtype __attribute__ ((mode (SF)));
typedef float DFtype __attribute__ ((mode (DF)));

typedef int HItype __attribute__ ((mode (HI)));
typedef int SItype __attribute__ ((mode (SI)));
typedef int DItype __attribute__ ((mode (DI)));

/* The type of the result of a fp compare */
#define CMPtype SItype

typedef unsigned int UHItype __attribute__ ((mode (HI)));
typedef unsigned int USItype __attribute__ ((mode (SI)));
typedef unsigned int UDItype __attribute__ ((mode (DI)));

#define MAX_USI_INT  (~(USItype)0)
#define MAX_SI_INT   ((SItype) (MAX_USI_INT >> 1))
#define BITS_PER_SI  (4 * BITS_PER_UNIT)

#	define PREFIXFPDP dp
#	define PREFIXSFDF df
#	define NGARDS 8L
#	define GARDROUND 0x7f
#	define GARDMASK  0xff
#	define GARDMSB   0x80
#	define EXPBITS 11
#	define EXPBIAS 1023
#	define FRACBITS 52
#	define EXPMAX (0x7ff)
#	define QUIET_NAN 0x8000000000000LL
#	define FRAC_NBITS 64
#	define FRACHIGH  0x8000000000000000LL
#	define FRACHIGH2 0xc000000000000000LL
#	define pack_d __pack_d
#	define unpack_d __unpack_d
#	define __fpcmp_parts __fpcmp_parts_d
	typedef UDItype fractype;
	typedef USItype halffractype;
	typedef DFtype FLO_type;
	typedef DItype intfrac;

#		define add 		__adddf3
#		define sub 		__subdf3
#		define multiply 	__muldf3
#		define divide 		__divdf3
#		define compare 		__cmpdf2
#		define _eq_f2 		__eqdf2
#		define _ne_f2 		__nedf2
#		define _gt_f2 		__gtdf2
#		define _ge_f2 		__gedf2
#		define _lt_f2 		__ltdf2
#		define _le_f2 		__ledf2
#		define _unord_f2	__unorddf2
#		define usi_to_float 	__floatunsidf
#		define si_to_float 	__floatsidf
#		define float_to_si 	__fixdfsi
#		define float_to_usi 	__fixunsdfsi
#		define negate 		__negdf2
#		define df_to_sf		__truncdfsf2
#		define df_to_tf		__extenddftf2

#define INLINE __inline__

/* Preserve the sticky-bit when shifting fractions to the right.  */
#define LSHIFT(a) { a = (a & 1) | (a >> 1); }

/* numeric parameters */
/* F_D_BITOFF is the number of bits offset between the MSB of the mantissa
   of a float and of a double. Assumes there are only two float types.
   (double::FRAC_BITS+double::NGARDS-(float::FRAC_BITS-float::NGARDS))
 */
#define F_D_BITOFF (52+8-(23+7))

#define NORMAL_EXPMIN (-(EXPBIAS)+1)
#define IMPLICIT_1 ((fractype)1<<(FRACBITS+NGARDS))
#define IMPLICIT_2 ((fractype)1<<(FRACBITS+1+NGARDS))

/* common types */

typedef enum
{
  CLASS_SNAN,
  CLASS_QNAN,
  CLASS_ZERO,
  CLASS_NUMBER,
  CLASS_INFINITY
} fp_class_type;

typedef struct
{
  fp_class_type class;
  unsigned int sign;
  int normal_exp;

  union
    {
      fractype ll;
      halffractype l[2];
    } fraction;
} fp_number_type;

typedef union
{
  FLO_type value;
  fractype value_raw;

  halffractype words[2];

  struct
    {
      fractype fraction:FRACBITS __attribute__ ((packed));
      unsigned int exp:EXPBITS __attribute__ ((packed));
      unsigned int sign:1 __attribute__ ((packed));
    }
  bits;

}
FLO_union_type;

/* Prototypes */

extern void unpack_d (FLO_union_type *, fp_number_type *);

extern FLO_type add (FLO_type, FLO_type);
extern FLO_type sub (FLO_type, FLO_type);

extern int __fpcmp_parts (fp_number_type *, fp_number_type *);

extern SFtype __make_fp (fp_class_type, unsigned int, int, USItype);

/* The following macros can be defined to change the behavior of this file:
   FLOAT: Implement a `float', aka SFmode, fp library.  If this is not
     defined, then this file implements a `double', aka DFmode, fp library.
   FLOAT_ONLY: Used with FLOAT, to implement a `float' only library, i.e.
     don't include float->double conversion which requires the double library.
     This is useful only for machines which can't support doubles, e.g. some
     8-bit processors.
   CMPtype: Specify the type that floating point compares should return.
     This defaults to SItype, aka int.
   US_SOFTWARE_GOFAST: This makes all entry points use the same names as the
     US Software goFast library.
   _DEBUG_BITFLOAT: This makes debugging the code a little easier, by adding
     two integers to the FLO_union_type.
   NO_DENORMALS: Disable handling of denormals.
   NO_NANS: Disable nan and infinity handling
   SMALL_MACHINE: Useful when operations on QIs and HIs are faster
     than on an SI */

/* We don't currently support extended floats (long doubles) on machines
   without hardware to deal with them.

   These stubs are just to keep the linker from complaining about unresolved
   references which can be pulled in from libio & libstdc++, even if the
   user isn't using long doubles.  However, they may generate an unresolved
   external to abort if abort is not used by the function, and the stubs
   are referenced from within libc, since libgcc goes before and after the
   system library.  */

/* IEEE "special" number predicates */

extern const fp_number_type __thenan_df;

INLINE
static fp_number_type *
nan (void)
{
  /* Discard the const qualifier...  */
  return (fp_number_type *) (& __thenan_df);
}

INLINE
static int
isnan ( fp_number_type *  x)
{
  return x->class == CLASS_SNAN || x->class == CLASS_QNAN;
}

INLINE
static int
isinf ( fp_number_type *  x)
{
  return x->class == CLASS_INFINITY;
}

INLINE
static int
iszero ( fp_number_type *  x)
{
  return x->class == CLASS_ZERO;
}

INLINE 
static void
flip_sign ( fp_number_type *  x)
{
  x->sign = !x->sign;
}

extern FLO_type pack_d ( fp_number_type * );

static fp_number_type *
_fpadd_parts (fp_number_type * a,
	      fp_number_type * b,
	      fp_number_type * tmp)
{
  intfrac tfraction;

  /* Put commonly used fields in local variables.  */
  int a_normal_exp;
  int b_normal_exp;
  fractype a_fraction;
  fractype b_fraction;

  if (isnan (a))
    {
      return a;
    }
  if (isnan (b))
    {
      return b;
    }
  if (isinf (a))
    {
      /* Adding infinities with opposite signs yields a NaN.  */
      if (isinf (b) && a->sign != b->sign)
	return nan ();
      return a;
    }
  if (isinf (b))
    {
      return b;
    }
  if (iszero (b))
    {
      if (iszero (a))
	{
	  *tmp = *a;
	  tmp->sign = a->sign & b->sign;
	  return tmp;
	}
      return a;
    }
  if (iszero (a))
    {
      return b;
    }

  /* Got two numbers. shift the smaller and increment the exponent till
     they're the same */
  {
    int diff;

    a_normal_exp = a->normal_exp;
    b_normal_exp = b->normal_exp;
    a_fraction = a->fraction.ll;
    b_fraction = b->fraction.ll;

    diff = a_normal_exp - b_normal_exp;

    if (diff < 0)
      diff = -diff;
    if (diff < FRAC_NBITS)
      {
	/* ??? This does shifts one bit at a time.  Optimize.  */
	while (a_normal_exp > b_normal_exp)
	  {
	    b_normal_exp++;
	    LSHIFT (b_fraction);
	  }
	while (b_normal_exp > a_normal_exp)
	  {
	    a_normal_exp++;
	    LSHIFT (a_fraction);
	  }
      }
    else
      {
	/* Somethings's up.. choose the biggest */
	if (a_normal_exp > b_normal_exp)
	  {
	    b_normal_exp = a_normal_exp;
	    b_fraction = 0;
	  }
	else
	  {
	    a_normal_exp = b_normal_exp;
	    a_fraction = 0;
	  }
      }
  }

  if (a->sign != b->sign)
    {
      if (a->sign)
	{
	  tfraction = -a_fraction + b_fraction;
	}
      else
	{
	  tfraction = a_fraction - b_fraction;
	}
      if (tfraction >= 0)
	{
	  tmp->sign = 0;
	  tmp->normal_exp = a_normal_exp;
	  tmp->fraction.ll = tfraction;
	}
      else
	{
	  tmp->sign = 1;
	  tmp->normal_exp = a_normal_exp;
	  tmp->fraction.ll = -tfraction;
	}
      /* and renormalize it */

      while (tmp->fraction.ll < IMPLICIT_1 && tmp->fraction.ll)
	{
	  tmp->fraction.ll <<= 1;
	  tmp->normal_exp--;
	}
    }
  else
    {
      tmp->sign = a->sign;
      tmp->normal_exp = a_normal_exp;
      tmp->fraction.ll = a_fraction + b_fraction;
    }
  tmp->class = CLASS_NUMBER;
  /* Now the fraction is added, we have to shift down to renormalize the
     number */

  if (tmp->fraction.ll >= IMPLICIT_2)
    {
      LSHIFT (tmp->fraction.ll);
      tmp->normal_exp++;
    }
  return tmp;

}

FLO_type
add (FLO_type arg_a, FLO_type arg_b)
{
  fp_number_type a;
  fp_number_type b;
  fp_number_type tmp;
  fp_number_type *res;
  FLO_union_type au, bu;

  au.value = arg_a;
  bu.value = arg_b;

  unpack_d (&au, &a);
  unpack_d (&bu, &b);

  res = _fpadd_parts (&a, &b, &tmp);

  return pack_d (res);
}

FLO_type
sub (FLO_type arg_a, FLO_type arg_b)
{
  fp_number_type a;
  fp_number_type b;
  fp_number_type tmp;
  fp_number_type *res;
  FLO_union_type au, bu;

  au.value = arg_a;
  bu.value = arg_b;

  unpack_d (&au, &a);
  unpack_d (&bu, &b);

  b.sign ^= 1;

  res = _fpadd_parts (&a, &b, &tmp);

  return pack_d (res);
}

/* These should be optimized for their specific tasks someday.  */

extern SFtype __make_fp (fp_class_type, unsigned int, int, USItype);

