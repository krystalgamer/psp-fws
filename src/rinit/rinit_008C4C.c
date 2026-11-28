/* newlib-1.12.0 libc/stdlib/mallocr.c (BSD-style licence, see the newlib COPYING.NEWLIB) */
#include "common.h"
#include "rinit_decls.h"
#include "rinit_newlib.h"
#define _POINTER_INT long
#define MALLOC_ALIGNMENT 16 /* PSP newlib */

/* ---------- To make a malloc.h, start cutting here ------------ */

/* 
  A version of malloc/free/realloc written by Doug Lea and released to the 
  public domain.  Send questions/comments/complaints/performance data
  to dl@cs.oswego.edu

* VERSION 2.6.4  Thu Nov 28 07:54:55 1996  Doug Lea  (dl at gee)
  
   Note: There may be an updated version of this malloc obtainable at
           ftp://g.oswego.edu/pub/misc/malloc.c
         Check before installing!

* Why use this malloc?

  This is not the fastest, most space-conserving, most portable, or
  most tunable malloc ever written. However it is among the fastest
  while also being among the most space-conserving, portable and tunable.
  Consistent balance across these factors results in a good general-purpose 
  allocator. For a high-level description, see 
     http://g.oswego.edu/dl/html/malloc.html

* Synopsis of public routines

  (Much fuller descriptions are contained in the program documentation below.)

  malloc(size_t n);
     Return a pointer to a newly allocated chunk of at least n bytes, or null
     if no space is available.
  free(Void_t* p);
     Release the chunk of memory pointed to by p, or no effect if p is null.
  realloc(Void_t* p, size_t n);
     Return a pointer to a chunk of size n that contains the same data
     as does chunk p up to the minimum of (n, p's size) bytes, or null
     if no space is available. The returned pointer may or may not be
     the same as p. If p is null, equivalent to malloc.  Unless the
     #define REALLOC_ZERO_BYTES_FREES below is set, realloc with a
     size argument of zero (re)allocates a minimum-sized chunk.
  memalign(size_t alignment, size_t n);
     Return a pointer to a newly allocated chunk of n bytes, aligned
     in accord with the alignment argument, which must be a power of
     two.
  valloc(size_t n);
     Equivalent to memalign(pagesize, n), where pagesize is the page
     size of the system (or as near to this as can be figured out from
     all the includes/defines below.)
  pvalloc(size_t n);
     Equivalent to valloc(minimum-page-that-holds(n)), that is,
     round up n to nearest pagesize.
  calloc(size_t unit, size_t quantity);
     Returns a pointer to quantity * unit bytes, with all locations
     set to zero.
  cfree(Void_t* p);
     Equivalent to free(p).
  malloc_trim(size_t pad);
     Release all but pad bytes of freed top-most memory back 
     to the system. Return 1 if successful, else 0.
  malloc_usable_size(Void_t* p);
     Report the number usable allocated bytes associated with allocated
     chunk p. This may or may not report more bytes than were requested,
     due to alignment and minimum size constraints.
  malloc_stats();
     Prints brief summary statistics on stderr.
  mallinfo()
     Returns (by copy) a struct containing various summary statistics.
  mallopt(int parameter_number, int parameter_value)
     Changes one of the tunable parameters described below. Returns
     1 if successful in changing the parameter, else 0.

* Vital statistics:

  Alignment:                            8-byte
       8 byte alignment is currently hardwired into the design.  This
       seems to suffice for all current machines and C compilers.

  Assumed pointer representation:       4 or 8 bytes
       Code for 8-byte pointers is untested by me but has worked
       reliably by Wolfram Gloger, who contributed most of the
       changes supporting this.

  Assumed size_t  representation:       4 or 8 bytes
       Note that size_t is allowed to be 4 bytes even if pointers are 8.        

  Minimum overhead per allocated chunk: 4 or 8 bytes
       Each malloced chunk has a hidden overhead of 4 bytes holding size
       and status information.  

  Minimum allocated size: 4-byte ptrs:  16 bytes    (including 4 overhead)
                          8-byte ptrs:  24/32 bytes (including, 4/8 overhead)
                                     
       When a chunk is freed, 12 (for 4byte ptrs) or 20 (for 8 byte
       ptrs but 4 byte size) or 24 (for 8/8) additional bytes are 
       needed; 4 (8) for a trailing size field
       and 8 (16) bytes for free list pointers. Thus, the minimum
       allocatable size is 16/24/32 bytes.

       Even a request for zero bytes (i.e., malloc(0)) returns a
       pointer to something of the minimum allocatable size.

  Maximum allocated size: 4-byte size_t: 2^31 -  8 bytes
                          8-byte size_t: 2^63 - 16 bytes

       It is assumed that (possibly signed) size_t bit values suffice to
       represent chunk sizes. `Possibly signed' is due to the fact
       that `size_t' may be defined on a system as either a signed or
       an unsigned type. To be conservative, values that would appear
       as negative numbers are avoided.  
       Requests for sizes with a negative sign bit will return a
       minimum-sized chunk.

  Maximum overhead wastage per allocated chunk: normally 15 bytes

       Alignnment demands, plus the minimum allocatable size restriction
       make the normal worst-case wastage 15 bytes (i.e., up to 15
       more bytes will be allocated than were requested in malloc), with 
       two exceptions:
         1. Because requests for zero bytes allocate non-zero space,
            the worst case wastage for a request of zero bytes is 24 bytes.
         2. For requests >= mmap_threshold that are serviced via
            mmap(), the worst case wastage is 8 bytes plus the remainder
            from a system page (the minimal mmap unit); typically 4096 bytes.

* Limitations

    Here are some features that are NOT currently supported

    * No user-definable hooks for callbacks and the like.
    * No automated mechanism for fully checking that all accesses
      to malloced memory stay within their bounds.
    * No support for compaction.

* Synopsis of compile-time options:

    People have reported using previous versions of this malloc on all
    versions of Unix, sometimes by tweaking some of the defines
    below. It has been tested most extensively on Solaris and
    Linux. It is also reported to work on WIN32 platforms.
    People have also reported adapting this malloc for use in
    stand-alone embedded systems.

    The implementation is in straight, hand-tuned ANSI C.  Among other
    consequences, it uses a lot of macros.  Because of this, to be at
    all usable, this code should be compiled using an optimizing compiler
    (for example gcc -O2) that can simplify expressions and control
    paths.

  __STD_C                  (default: derived from C compiler defines)
     Nonzero if using ANSI-standard C compiler, a C++ compiler, or
     a C compiler sufficiently close to ANSI to get away with it.
  DEBUG                    (default: NOT defined)
     Define to enable debugging. Adds fairly extensive assertion-based 
     checking to help track down memory errors, but noticeably slows down
     execution.
  SEPARATE_OBJECTS	   (default: NOT defined)
     Define this to compile into separate .o files.  You must then
     compile malloc.c several times, defining a DEFINE_* macro each
     time.  The list of DEFINE_* macros appears below.
  MALLOC_LOCK		   (default: NOT defined)
  MALLOC_UNLOCK		   (default: NOT defined)
     Define these to C expressions which are run to lock and unlock
     the malloc data structures.  Calls may be nested; that is,
     MALLOC_LOCK may be called more than once before the corresponding
     MALLOC_UNLOCK calls.  MALLOC_LOCK must avoid waiting for a lock
     that it already holds.
  MALLOC_ALIGNMENT          (default: NOT defined)
     Define this to 16 if you need 16 byte alignment instead of 8 byte alignment
     which is the normal default.
  REALLOC_ZERO_BYTES_FREES (default: NOT defined) 
     Define this if you think that realloc(p, 0) should be equivalent
     to free(p). Otherwise, since malloc returns a unique pointer for
     malloc(0), so does realloc(p, 0).
  HAVE_MEMCPY               (default: defined)
     Define if you are not otherwise using ANSI STD C, but still 
     have memcpy and memset in your C library and want to use them.
     Otherwise, simple internal versions are supplied.
  USE_MEMCPY               (default: 1 if HAVE_MEMCPY is defined, 0 otherwise)
     Define as 1 if you want the C library versions of memset and
     memcpy called in realloc and calloc (otherwise macro versions are used). 
     At least on some platforms, the simple macro versions usually
     outperform libc versions.
  HAVE_MMAP                 (default: defined as 1)
     Define to non-zero to optionally make malloc() use mmap() to
     allocate very large blocks.  
  HAVE_MREMAP                 (default: defined as 0 unless Linux libc set)
     Define to non-zero to optionally make realloc() use mremap() to
     reallocate very large blocks.  
  malloc_getpagesize        (default: derived from system #includes)
     Either a constant or routine call returning the system page size.
  HAVE_USR_INCLUDE_MALLOC_H (default: NOT defined) 
     Optionally define if you are on a system with a /usr/include/malloc.h
     that declares struct mallinfo. It is not at all necessary to
     define this even if you do, but will ensure consistency.
  INTERNAL_SIZE_T           (default: size_t)
     Define to a 32-bit type (probably `unsigned int') if you are on a 
     64-bit machine, yet do not want or need to allow malloc requests of 
     greater than 2^31 to be handled. This saves space, especially for
     very small chunks.
  INTERNAL_LINUX_C_LIB      (default: NOT defined)
     Defined only when compiled as part of Linux libc.
     Also note that there is some odd internal name-mangling via defines
     (for example, internally, `malloc' is named `mALLOc') needed
     when compiling in this case. These look funny but don't otherwise
     affect anything.
  INTERNAL_NEWLIB	    (default: NOT defined)
     Defined only when compiled as part of the Cygnus newlib
     distribution.
  WIN32                     (default: undefined)
     Define this on MS win (95, nt) platforms to compile in sbrk emulation.
  LACKS_UNISTD_H            (default: undefined)
     Define this if your system does not have a <unistd.h>.
  MORECORE                  (default: sbrk)
     The name of the routine to call to obtain more memory from the system.
  MORECORE_FAILURE          (default: -1)
     The value returned upon failure of MORECORE.
  MORECORE_CLEARS           (default 1)
     True (1) if the routine mapped to MORECORE zeroes out memory (which
     holds for sbrk).
  DEFAULT_TRIM_THRESHOLD
  DEFAULT_TOP_PAD       
  DEFAULT_MMAP_THRESHOLD
  DEFAULT_MMAP_MAX      
     Default values of tunable parameters (described in detail below)
     controlling interaction with host system routines (sbrk, mmap, etc).
     These values may also be changed dynamically via mallopt(). The
     preset defaults are those that give best performance for typical
     programs/systems.

*/



/* Preliminaries */

#define __STD_C     1

#define Void_t      void

/*
  Compile-time options
*/

/*

  Special defines for Cygnus newlib distribution.

 */

/*
  In newlib, all the publically visible routines take a reentrancy
  pointer.  We don't currently do anything much with it, but we do
  pass it to the lock routine.
 */

#define POINTER_UINT unsigned _POINTER_INT
#define SEPARATE_OBJECTS
#define HAVE_MMAP 0
#define MORECORE(size) _sbrk_r(reent_ptr, (size))
#define MORECORE_CLEARS 0
#define MALLOC_LOCK __malloc_lock(reent_ptr)
#define MALLOC_UNLOCK __malloc_unlock(reent_ptr)

#define malloc_getpagesize (4096)

extern void __malloc_lock(struct _reent *);
extern void __malloc_unlock(struct _reent *);

#define RARG struct _reent *reent_ptr,
#define RONEARG struct _reent *reent_ptr

#define RCALL reent_ptr,
#define RONECALL reent_ptr

/*
    Debugging:

    Because freed chunks may be overwritten with link fields, this
    malloc will often die when freed memory is overwritten by user
    programs.  This can be very effective (albeit in an annoying way)
    in helping track down dangling pointers.

    If you compile with -DDEBUG, a number of assertion checks are
    enabled that will catch more memory errors. You probably won't be
    able to make much sense of the actual assertion errors, but they
    should help you locate incorrectly overwritten memory.  The
    checking is fairly extensive, and will slow down execution
    noticeably. Calling malloc_stats or mallinfo with DEBUG set will
    attempt to check every non-mmapped allocated and free chunk in the
    course of computing the summmaries. (By nature, mmapped regions
    cannot be checked very much automatically.)

    Setting DEBUG may also be helpful if you are trying to modify 
    this code. The assertions in the check routines spell out in more 
    detail the assumptions and invariants underlying the algorithms.

*/

#define assert(x) ((void)0)

/*
  SEPARATE_OBJECTS should be defined if you want each function to go
  into a separate .o file.  You must then compile malloc.c once per
  function, defining the appropriate DEFINE_ macro.  See below for the
  list of macros.
 */

#define STATIC

/*
   Define MALLOC_LOCK and MALLOC_UNLOCK to C expressions to run to
   lock and unlock the malloc data structures.  MALLOC_LOCK may be
   called recursively.
 */

/*
  INTERNAL_SIZE_T is the word-size used for internal bookkeeping
  of chunk sizes. On a 64-bit machine, you can reduce malloc
  overhead by defining INTERNAL_SIZE_T to be a 32 bit `unsigned int'
  at the expense of not being able to handle requests greater than
  2^31. This limitation is hardly ever a concern; you are encouraged
  to set this. However, the default version is the same as size_t.
*/

#define INTERNAL_SIZE_T size_t

/*
  Following is needed on implementations whereby long > size_t.
  The problem is caused because the code performs subtractions of
  size_t values and stores the result in long values.  In the case
  where long > size_t and the first value is actually less than
  the second value, the resultant value is positive.  For example,
  (long)(x - y) where x = 0 and y is 1 ends up being 0x00000000FFFFFFFF
  which is 2*31 - 1 instead of 0xFFFFFFFFFFFFFFFF.  This is due to the
  fact that assignment from unsigned to signed won't sign extend.
*/

#define long_sub_size_t(x, y)				\
  (sizeof (long) > sizeof (INTERNAL_SIZE_T) && x < y	\
   ? -(long) (y - x)					\
   : (long) (x - y))

/*
  REALLOC_ZERO_BYTES_FREES should be set if a call to
  realloc with zero bytes should be the same as a call to free.
  Some people think it should. Otherwise, since this malloc
  returns a unique pointer for malloc(0), so does realloc(p, 0). 
*/

/*   #define REALLOC_ZERO_BYTES_FREES */

/* 
  WIN32 causes an emulation of sbrk to be compiled in
  mmap-based options are not currently supported in WIN32.
*/

/* #define WIN32 */

/*
  HAVE_MEMCPY should be defined if you are not otherwise using
  ANSI STD C, but still have memcpy and memset in your C library
  and want to use them in calloc and realloc. Otherwise simple
  macro versions are defined here.

  USE_MEMCPY should be defined as 1 if you actually want to
  have memset and memcpy called. People report that the macro
  versions are often enough faster than libc versions on many
  systems that it is better to use them. 

*/

#define HAVE_MEMCPY 

#define USE_MEMCPY 1

void* memset(void*, int, size_t);
void* memcpy(void*, const void*, size_t);

/* The following macros are only invoked with (2n+1)-multiples of
   INTERNAL_SIZE_T units, with a positive integer n. This is exploited
   for fast inline execution when n is small. */

#define MALLOC_ZERO(charp, nbytes)                                            \
do {                                                                          \
  INTERNAL_SIZE_T mzsz = (nbytes);                                            \
  if(mzsz <= 9*sizeof(mzsz)) {                                                \
    INTERNAL_SIZE_T* mz = (INTERNAL_SIZE_T*) (charp);                         \
    if(mzsz >= 5*sizeof(mzsz)) {     *mz++ = 0;                               \
                                     *mz++ = 0;                               \
      if(mzsz >= 7*sizeof(mzsz)) {   *mz++ = 0;                               \
                                     *mz++ = 0;                               \
        if(mzsz >= 9*sizeof(mzsz)) { *mz++ = 0;                               \
                                     *mz++ = 0; }}}                           \
                                     *mz++ = 0;                               \
                                     *mz++ = 0;                               \
                                     *mz   = 0;                               \
  } else memset((charp), 0, mzsz);                                            \
} while(0)

#define MALLOC_COPY(dest,src,nbytes)                                          \
do {                                                                          \
  INTERNAL_SIZE_T mcsz = (nbytes);                                            \
  if(mcsz <= 9*sizeof(mcsz)) {                                                \
    INTERNAL_SIZE_T* mcsrc = (INTERNAL_SIZE_T*) (src);                        \
    INTERNAL_SIZE_T* mcdst = (INTERNAL_SIZE_T*) (dest);                       \
    if(mcsz >= 5*sizeof(mcsz)) {     *mcdst++ = *mcsrc++;                     \
                                     *mcdst++ = *mcsrc++;                     \
      if(mcsz >= 7*sizeof(mcsz)) {   *mcdst++ = *mcsrc++;                     \
                                     *mcdst++ = *mcsrc++;                     \
        if(mcsz >= 9*sizeof(mcsz)) { *mcdst++ = *mcsrc++;                     \
                                     *mcdst++ = *mcsrc++; }}}                 \
                                     *mcdst++ = *mcsrc++;                     \
                                     *mcdst++ = *mcsrc++;                     \
                                     *mcdst   = *mcsrc  ;                     \
  } else memcpy(dest, src, mcsz);                                             \
} while(0)

/*
  Define HAVE_MMAP to optionally make malloc() use mmap() to
  allocate very large blocks.  These will be returned to the
  operating system immediately after a free().
*/

/*
  Define HAVE_MREMAP to make realloc() use mremap() to re-allocate
  large blocks.  This is currently only possible on Linux with
  kernel versions newer than 1.3.77.
*/

#define HAVE_MREMAP 0

/*
  Access to system page size. To the extent possible, this malloc
  manages memory from the system in page-size units.
  
  The following mechanics for getpagesize were adapted from 
  bsd/gnu getpagesize.h 
*/

/*

  This version of malloc supports the standard SVID/XPG mallinfo
  routine that returns a struct containing the same kind of
  information you can get from malloc_stats. It should work on
  any SVID/XPG compliant system that has a /usr/include/malloc.h
  defining struct mallinfo. (If you'd like to install such a thing
  yourself, cut out the preliminary declarations as described above
  and below and save them in a malloc.h file. But there's no
  compelling reason to bother to do this.)

  The main declaration needed is the mallinfo struct that is returned
  (by-copy) by mallinfo().  The SVID/XPG malloinfo struct contains a
  bunch of fields, most of which are not even meaningful in this
  version of malloc. Some of these fields are are instead filled by
  mallinfo() with other numbers that might possibly be of interest.

  HAVE_USR_INCLUDE_MALLOC_H should be set if you have a
  /usr/include/malloc.h file that includes a declaration of struct
  mallinfo.  If so, it is included; else an SVID2/XPG2 compliant
  version is declared below.  These must be precisely the same for
  mallinfo() to work.

*/

/* #define HAVE_USR_INCLUDE_MALLOC_H */

/* SVID2/XPG mallinfo structure */

struct mallinfo {
  int arena;    /* total space allocated from system */
  int ordblks;  /* number of non-inuse chunks */
  int smblks;   /* unused -- always zero */
  int hblks;    /* number of mmapped regions */
  int hblkhd;   /* total space in mmapped regions */
  int usmblks;  /* unused -- always zero */
  int fsmblks;  /* unused -- always zero */
  int uordblks; /* total allocated space */
  int fordblks; /* total non-inuse space */
  int keepcost; /* top-most, releasable (via malloc_trim) space */
};	

/* SVID2/XPG mallopt options */

#define M_MXFAST  1    /* UNUSED in this malloc */
#define M_NLBLKS  2    /* UNUSED in this malloc */
#define M_GRAIN   3    /* UNUSED in this malloc */
#define M_KEEP    4    /* UNUSED in this malloc */

/* mallopt options that actually do something */

#define M_TRIM_THRESHOLD    -1
#define M_TOP_PAD           -2
#define M_MMAP_THRESHOLD    -3
#define M_MMAP_MAX          -4

#define DEFAULT_TRIM_THRESHOLD (128L * 1024L)

/*
    M_TRIM_THRESHOLD is the maximum amount of unused top-most memory 
      to keep before releasing via malloc_trim in free().

      Automatic trimming is mainly useful in long-lived programs.
      Because trimming via sbrk can be slow on some systems, and can
      sometimes be wasteful (in cases where programs immediately
      afterward allocate more large chunks) the value should be high
      enough so that your overall system performance would improve by
      releasing.  

      The trim threshold and the mmap control parameters (see below)
      can be traded off with one another. Trimming and mmapping are
      two different ways of releasing unused memory back to the
      system. Between these two, it is often possible to keep
      system-level demands of a long-lived program down to a bare
      minimum. For example, in one test suite of sessions measuring
      the XF86 X server on Linux, using a trim threshold of 128K and a
      mmap threshold of 192K led to near-minimal long term resource
      consumption.  

      If you are using this malloc in a long-lived program, it should
      pay to experiment with these values.  As a rough guide, you
      might set to a value close to the average size of a process
      (program) running on your system.  Releasing this much memory
      would allow such a process to run in memory.  Generally, it's
      worth it to tune for trimming rather tham memory mapping when a
      program undergoes phases where several large chunks are
      allocated and released in ways that can reuse each other's
      storage, perhaps mixed with phases where there are no such
      chunks at all.  And in well-behaved long-lived programs,
      controlling release of large blocks via trimming versus mapping
      is usually faster.

      However, in most programs, these parameters serve mainly as
      protection against the system-level effects of carrying around
      massive amounts of unneeded memory. Since frequent calls to
      sbrk, mmap, and munmap otherwise degrade performance, the default
      parameters are set to relatively high values that serve only as
      safeguards.

      The default trim value is high enough to cause trimming only in
      fairly extreme (by current memory consumption standards) cases.
      It must be greater than page size to have any useful effect.  To
      disable trimming completely, you can set to (unsigned long)(-1);

*/

#define DEFAULT_TOP_PAD        (0)

/*
    M_TOP_PAD is the amount of extra `padding' space to allocate or 
      retain whenever sbrk is called. It is used in two ways internally:

      * When sbrk is called to extend the top of the arena to satisfy
        a new malloc request, this much padding is added to the sbrk
        request.

      * When malloc_trim is called automatically from free(),
        it is used as the `pad' argument.

      In both cases, the actual amount of padding is rounded 
      so that the end of the arena is always a system page boundary.

      The main reason for using padding is to avoid calling sbrk so
      often. Having even a small pad greatly reduces the likelihood
      that nearly every malloc request during program start-up (or
      after trimming) will invoke sbrk, which needlessly wastes
      time. 

      Automatic rounding-up to page-size units is normally sufficient
      to avoid measurable overhead, so the default is 0.  However, in
      systems where sbrk is relatively slow, it can pay to increase
      this value, at the expense of carrying around more memory than 
      the program needs.

*/

#define DEFAULT_MMAP_THRESHOLD (128 * 1024)

/*

    M_MMAP_THRESHOLD is the request size threshold for using mmap() 
      to service a request. Requests of at least this size that cannot 
      be allocated using already-existing space will be serviced via mmap.  
      (If enough normal freed space already exists it is used instead.)

      Using mmap segregates relatively large chunks of memory so that
      they can be individually obtained and released from the host
      system. A request serviced through mmap is never reused by any
      other request (at least not directly; the system may just so
      happen to remap successive requests to the same locations).

      Segregating space in this way has the benefit that mmapped space
      can ALWAYS be individually released back to the system, which
      helps keep the system level memory demands of a long-lived
      program low. Mapped memory can never become `locked' between
      other chunks, as can happen with normally allocated chunks, which
      menas that even trimming via malloc_trim would not release them.

      However, it has the disadvantages that:

         1. The space cannot be reclaimed, consolidated, and then
            used to service later requests, as happens with normal chunks. 
         2. It can lead to more wastage because of mmap page alignment
            requirements
         3. It causes malloc performance to be more dependent on host
            system memory management support routines which may vary in
            implementation quality and may impose arbitrary
            limitations. Generally, servicing a request via normal
            malloc steps is faster than going through a system's mmap.

      All together, these considerations should lead you to use mmap
      only for relatively large requests.  

*/

#define DEFAULT_MMAP_MAX       (0)

/*
    M_MMAP_MAX is the maximum number of requests to simultaneously 
      service using mmap. This parameter exists because:

         1. Some systems have a limited number of internal tables for
            use by mmap.
         2. In most systems, overreliance on mmap can degrade overall
            performance.
         3. If a program allocates many large regions, it is probably
            better off using normal sbrk-based allocation routines that
            can reclaim and reallocate normal heap memory. Using a
            small value allows transition into this mode after the
            first few allocations.

      Setting to 0 disables all use of mmap.  If HAVE_MMAP is not set,
      the default value is 0, and attempts to set it to non-zero values
      in mallopt will fail.
*/

/* 

  Special defines for linux libc

  Except when compiled using these special defines for Linux libc
  using weak aliases, this malloc is NOT designed to work in
  multithreaded applications.  No semaphores or other concurrency
  control are provided to ensure that multiple malloc or free calls
  don't run at the same time, which could be disasterous. A single
  semaphore could be used across malloc, realloc, and free (which is
  essentially the effect of the linux weak alias approach). It would
  be hard to obtain finer granularity.

*/

#define MORECORE_FAILURE -1

#define cALLOc		_calloc_r
#define fREe		_free_r
#define mALLOc		_malloc_r
#define mEMALIGn	_memalign_r
#define rEALLOc		_realloc_r
#define vALLOc		_valloc_r
#define pvALLOc		_pvalloc_r
#define mALLINFo	_mallinfo_r
#define mALLOPt		_mallopt_r

#define malloc_stats			_malloc_stats_r
#define malloc_trim			_malloc_trim_r
#define malloc_usable_size		_malloc_usable_size_r

#define malloc_update_mallinfo		__malloc_update_mallinfo

#define malloc_av_			__malloc_av_
#define malloc_current_mallinfo		__malloc_current_mallinfo
#define malloc_max_sbrked_mem		__malloc_max_sbrked_mem
#define malloc_max_total_mem		__malloc_max_total_mem
#define malloc_sbrk_base		__malloc_sbrk_base
#define malloc_top_pad			__malloc_top_pad
#define malloc_trim_threshold		__malloc_trim_threshold

/* Public routines */

Void_t* mALLOc(RARG size_t);
void    fREe(RARG Void_t*);
Void_t* rEALLOc(RARG Void_t*, size_t);
Void_t* mEMALIGn(RARG size_t, size_t);
Void_t* vALLOc(RARG size_t);
Void_t* pvALLOc(RARG size_t);
Void_t* cALLOc(RARG size_t, size_t);
void    cfree(Void_t*);
int     malloc_trim(RARG size_t);
size_t  malloc_usable_size(RARG Void_t*);
void    malloc_stats(RONEARG);
int     mALLOPt(RARG int, int);
struct mallinfo mALLINFo(RONEARG);

/* ---------- To make a malloc.h, end cutting here ------------ */

/* 
  Emulation of sbrk for WIN32
  All code within the ifdef WIN32 is untested by me.
*/



/*
  Type declarations
*/

struct malloc_chunk
{
  INTERNAL_SIZE_T prev_size; /* Size of previous chunk (if free). */
  INTERNAL_SIZE_T size;      /* Size in bytes, including overhead. */
  struct malloc_chunk* fd;   /* double links -- used only if free. */
  struct malloc_chunk* bk;
};

typedef struct malloc_chunk* mchunkptr;

/*

   malloc_chunk details:

    (The following includes lightly edited explanations by Colin Plumb.)

    Chunks of memory are maintained using a `boundary tag' method as
    described in e.g., Knuth or Standish.  (See the paper by Paul
    Wilson ftp://ftp.cs.utexas.edu/pub/garbage/allocsrv.ps for a
    survey of such techniques.)  Sizes of free chunks are stored both
    in the front of each chunk and at the end.  This makes
    consolidating fragmented chunks into bigger chunks very fast.  The
    size fields also hold bits representing whether chunks are free or
    in use.

    An allocated chunk looks like this:  

    chunk-> +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
            |             Size of previous chunk, if allocated            | |
            +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
            |             Size of chunk, in bytes                         |P|
      mem-> +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
            |             User data starts here...                          .
            .                                                               .
            .             (malloc_usable_space() bytes)                     .
            .                                                               |
nextchunk-> +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
            |             Size of chunk                                     |
            +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

    Where "chunk" is the front of the chunk for the purpose of most of
    the malloc code, but "mem" is the pointer that is returned to the
    user.  "Nextchunk" is the beginning of the next contiguous chunk.

    Chunks always begin on even word boundries, so the mem portion
    (which is returned to the user) is also on an even word boundary, and
    thus double-word aligned.

    Free chunks are stored in circular doubly-linked lists, and look like this:

    chunk-> +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
            |             Size of previous chunk                            |
            +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
    `head:' |             Size of chunk, in bytes                         |P|
      mem-> +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
            |             Forward pointer to next chunk in list             |
            +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
            |             Back pointer to previous chunk in list            |
            +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
            |             Unused space (may be 0 bytes long)                .
            .                                                               .
            .                                                               |
nextchunk-> +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
    `foot:' |             Size of chunk, in bytes                           |
            +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+

    The P (PREV_INUSE) bit, stored in the unused low-order bit of the
    chunk size (which is always a multiple of two words), is an in-use
    bit for the *previous* chunk.  If that bit is *clear*, then the
    word before the current chunk size contains the previous chunk
    size, and can be used to find the front of the previous chunk.
    (The very first chunk allocated always has this bit set,
    preventing access to non-existent (or non-owned) memory.)

    Note that the `foot' of the current chunk is actually represented
    as the prev_size of the NEXT chunk. (This makes it easier to
    deal with alignments etc).

    The two exceptions to all this are 

     1. The special chunk `top', which doesn't bother using the 
        trailing size field since there is no
        next contiguous chunk that would have to index off it. (After
        initialization, `top' is forced to always exist.  If it would
        become less than MINSIZE bytes long, it is replenished via
        malloc_extend_top.)

     2. Chunks allocated via mmap, which have the second-lowest-order
        bit (IS_MMAPPED) set in their size fields.  Because they are
        never merged or traversed from any other chunk, they have no
        foot size or inuse information.

    Available chunks are kept in any of several places (all declared below):

    * `av': An array of chunks serving as bin headers for consolidated
       chunks. Each bin is doubly linked.  The bins are approximately
       proportionally (log) spaced.  There are a lot of these bins
       (128). This may look excessive, but works very well in
       practice.  All procedures maintain the invariant that no
       consolidated chunk physically borders another one. Chunks in
       bins are kept in size order, with ties going to the
       approximately least recently used chunk.

       The chunks in each bin are maintained in decreasing sorted order by
       size.  This is irrelevant for the small bins, which all contain
       the same-sized chunks, but facilitates best-fit allocation for
       larger chunks. (These lists are just sequential. Keeping them in
       order almost never requires enough traversal to warrant using
       fancier ordered data structures.)  Chunks of the same size are
       linked with the most recently freed at the front, and allocations
       are taken from the back.  This results in LRU or FIFO allocation
       order, which tends to give each chunk an equal opportunity to be
       consolidated with adjacent freed chunks, resulting in larger free
       chunks and less fragmentation. 

    * `top': The top-most available chunk (i.e., the one bordering the
       end of available memory) is treated specially. It is never
       included in any bin, is used only if no other chunk is
       available, and is released back to the system if it is very
       large (see M_TRIM_THRESHOLD).

    * `last_remainder': A bin holding only the remainder of the
       most recently split (non-top) chunk. This bin is checked
       before other non-fitting chunks, so as to provide better
       locality for runs of sequentially allocated chunks. 

    *  Implicitly, through the host system's memory mapping tables.
       If supported, requests greater than a threshold are usually 
       serviced via calls to mmap, and then later released via munmap.

*/



/*  sizes, alignments */

#define SIZE_SZ                (sizeof(INTERNAL_SIZE_T))
#define MALLOC_ALIGN           MALLOC_ALIGNMENT
#define MALLOC_ALIGN_MASK      (MALLOC_ALIGNMENT - 1)
#define MINSIZE                (sizeof(struct malloc_chunk))

/* conversion from malloc headers to user pointers, and back */

#define chunk2mem(p)   ((Void_t*)((char*)(p) + 2*SIZE_SZ))
#define mem2chunk(mem) ((mchunkptr)((char*)(mem) - 2*SIZE_SZ))

/* pad request bytes into a usable size */

#define request2size(req) \
 (((unsigned long)((req) + (SIZE_SZ + MALLOC_ALIGN_MASK)) < \
  (unsigned long)(MINSIZE + MALLOC_ALIGN_MASK)) ? ((MINSIZE + MALLOC_ALIGN_MASK) & ~(MALLOC_ALIGN_MASK)) : \
   (((req) + (SIZE_SZ + MALLOC_ALIGN_MASK)) & ~(MALLOC_ALIGN_MASK)))

/* Check if m has acceptable alignment */

#define aligned_OK(m)    (((unsigned long)((m)) & (MALLOC_ALIGN_MASK)) == 0)



/* 
  Physical chunk operations  
*/

/* size field is or'ed with PREV_INUSE when previous adjacent chunk in use */

#define PREV_INUSE 0x1 

/* size field is or'ed with IS_MMAPPED if the chunk was obtained with mmap() */

#define IS_MMAPPED 0x2

/* Bits to mask off when extracting size */

#define SIZE_BITS (PREV_INUSE|IS_MMAPPED)

/* Ptr to next physical malloc_chunk. */

#define next_chunk(p) ((mchunkptr)( ((char*)(p)) + ((p)->size & ~PREV_INUSE) ))

/* Ptr to previous physical malloc_chunk */

#define prev_chunk(p)\
   ((mchunkptr)( ((char*)(p)) - ((p)->prev_size) ))

/* Treat space at ptr + offset as a chunk */

#define chunk_at_offset(p, s)  ((mchunkptr)(((char*)(p)) + (s)))



/* 
  Dealing with use bits 
*/

/* extract p's inuse bit */

#define inuse(p)\
((((mchunkptr)(((char*)(p))+((p)->size & ~PREV_INUSE)))->size) & PREV_INUSE)

/* extract inuse bit of previous chunk */

#define prev_inuse(p)  ((p)->size & PREV_INUSE)

/* check for mmap()'ed chunk */

#define chunk_is_mmapped(p) ((p)->size & IS_MMAPPED)

/* set/clear chunk as in use without otherwise disturbing */

#define set_inuse(p)\
((mchunkptr)(((char*)(p)) + ((p)->size & ~PREV_INUSE)))->size |= PREV_INUSE

#define clear_inuse(p)\
((mchunkptr)(((char*)(p)) + ((p)->size & ~PREV_INUSE)))->size &= ~(PREV_INUSE)

/* check/set/clear inuse bits in known places */

#define inuse_bit_at_offset(p, s)\
 (((mchunkptr)(((char*)(p)) + (s)))->size & PREV_INUSE)

#define set_inuse_bit_at_offset(p, s)\
 (((mchunkptr)(((char*)(p)) + (s)))->size |= PREV_INUSE)

#define clear_inuse_bit_at_offset(p, s)\
 (((mchunkptr)(((char*)(p)) + (s)))->size &= ~(PREV_INUSE))



/* 
  Dealing with size fields 
*/

/* Get size, ignoring use bits */

#define chunksize(p)          ((p)->size & ~(SIZE_BITS))

/* Set size at head, without disturbing its use bit */

#define set_head_size(p, s)   ((p)->size = (((p)->size & PREV_INUSE) | (s)))

/* Set size/use ignoring previous bits in header */

#define set_head(p, s)        ((p)->size = (s))

/* Set size at footer (only when chunk is not in use) */

#define set_foot(p, s)   (((mchunkptr)((char*)(p) + (s)))->prev_size = (s))



/*
   Bins

    The bins, `av_' are an array of pairs of pointers serving as the
    heads of (initially empty) doubly-linked lists of chunks, laid out
    in a way so that each pair can be treated as if it were in a
    malloc_chunk. (This way, the fd/bk offsets for linking bin heads
    and chunks are the same).

    Bins for sizes < 512 bytes contain chunks of all the same size, spaced
    8 bytes apart. Larger bins are approximately logarithmically
    spaced. (See the table below.) The `av_' array is never mentioned
    directly in the code, but instead via bin access macros.

    Bin layout:

    64 bins of size       8
    32 bins of size      64
    16 bins of size     512
     8 bins of size    4096
     4 bins of size   32768
     2 bins of size  262144
     1 bin  of size what's left

    There is actually a little bit of slop in the numbers in bin_index
    for the sake of speed. This makes no difference elsewhere.

    The special chunks `top' and `last_remainder' get their own bins,
    (this is implemented via yet more trickery with the av_ array),
    although `top' is never properly linked to its bin since it is
    always handled specially.

*/

#define av_ malloc_av_

#define NAV             128   /* number of bins */

typedef struct malloc_chunk* mbinptr;

/* access macros */

#define bin_at(i)      ((mbinptr)((char*)&(av_[2*(i) + 2]) - 2*SIZE_SZ))
#define next_bin(b)    ((mbinptr)((char*)(b) + 2 * sizeof(mbinptr)))
#define prev_bin(b)    ((mbinptr)((char*)(b) - 2 * sizeof(mbinptr)))

/*
   The first 2 bins are never indexed. The corresponding av_ cells are instead
   used for bookkeeping. This is not to save space, but to simplify
   indexing, maintain locality, and avoid some initialization tests.
*/

#define top            (bin_at(0)->fd)   /* The topmost chunk */
#define last_remainder (bin_at(1))       /* remainder from last split */

/*
   Because top initially points to its own bin with initial
   zero size, thus forcing extension on the first malloc request, 
   we avoid having any special code in malloc to check whether 
   it even exists yet. But we still need to in malloc_extend_top.
*/

#define initial_top    ((mchunkptr)(bin_at(0)))

/* Helper macro to initialize bins */

#define IAV(i)  bin_at(i), bin_at(i)

extern mbinptr av_[NAV * 2 + 2];



/* field-extraction macros */

#define first(b) ((b)->fd)
#define last(b)  ((b)->bk)

/* 
  Indexing into bins
*/

#define bin_index(sz)                                                          \
(((((unsigned long)(sz)) >> 9) ==    0) ?       (((unsigned long)(sz)) >>  3): \
 ((((unsigned long)(sz)) >> 9) <=    4) ?  56 + (((unsigned long)(sz)) >>  6): \
 ((((unsigned long)(sz)) >> 9) <=   20) ?  91 + (((unsigned long)(sz)) >>  9): \
 ((((unsigned long)(sz)) >> 9) <=   84) ? 110 + (((unsigned long)(sz)) >> 12): \
 ((((unsigned long)(sz)) >> 9) <=  340) ? 119 + (((unsigned long)(sz)) >> 15): \
 ((((unsigned long)(sz)) >> 9) <= 1364) ? 124 + (((unsigned long)(sz)) >> 18): \
                                          126)                     
/* 
  bins for chunks < 512 are all spaced SMALLBIN_WIDTH bytes apart, and hold
  identically sized chunks. This is exploited in malloc.
*/

#define MAX_SMALLBIN_SIZE   512
#define SMALLBIN_WIDTH        8
#define SMALLBIN_WIDTH_BITS   3
#define MAX_SMALLBIN        (MAX_SMALLBIN_SIZE / SMALLBIN_WIDTH) - 1

#define smallbin_index(sz)  (((unsigned long)(sz)) >> SMALLBIN_WIDTH_BITS)

/* 
   Requests are `small' if both the corresponding and the next bin are small
*/

#define is_small_request(nb) (nb < MAX_SMALLBIN_SIZE - SMALLBIN_WIDTH)



/*
    To help compensate for the large number of bins, a one-level index
    structure is used for bin-by-bin searching.  `binblocks' is a
    one-word bitvector recording whether groups of BINBLOCKWIDTH bins
    have any (possibly) non-empty bins, so they can be skipped over
    all at once during during traversals. The bits are NOT always
    cleared as soon as all bins in a block are empty, but instead only
    when all are noticed to be empty during traversal in malloc.
*/

#define BINBLOCKWIDTH     4   /* bins per block */

#define binblocks      (bin_at(0)->size) /* bitvector of nonempty blocks */

/* bin<->block macros */

#define idx2binblock(ix)    ((unsigned long)1 << (ix / BINBLOCKWIDTH))
#define mark_binblock(ii)   (binblocks |= idx2binblock(ii))
#define clear_binblock(ii)  (binblocks &= ~(idx2binblock(ii)))



/*  Other static bookkeeping data */

#define trim_threshold		malloc_trim_threshold
#define top_pad			malloc_top_pad
#define n_mmaps_max		malloc_n_mmaps_max
#define mmap_threshold		malloc_mmap_threshold
#define sbrk_base		malloc_sbrk_base
#define max_sbrked_mem		malloc_max_sbrked_mem
#define max_total_mem		malloc_max_total_mem
#define current_mallinfo	malloc_current_mallinfo
#define n_mmaps			malloc_n_mmaps
#define max_n_mmaps		malloc_max_n_mmaps
#define mmapped_mem		malloc_mmapped_mem
#define max_mmapped_mem		malloc_max_mmapped_mem

/* variables holding tunable values */

extern unsigned long trim_threshold;
extern unsigned long top_pad;
extern char* sbrk_base;
extern unsigned long max_sbrked_mem;
extern unsigned long max_total_mem;
extern struct mallinfo current_mallinfo;

/* The total memory obtained from system via sbrk */
#define sbrked_mem  (current_mallinfo.arena)



/* 
  Debugging support 
*/

#define check_free_chunk(P) 
#define check_inuse_chunk(P)
#define check_chunk(P)
#define check_malloced_chunk(P,N)



/* 
  Macro-based internal utilities
*/

/*  
  Linking chunks in bin lists.
  Call these only with variables, not arbitrary expressions, as arguments.
*/

/* 
  Place chunk p of size s in its bin, in size order,
  putting it ahead of others of same size.
*/

#define frontlink(P, S, IDX, BK, FD)                                          \
{                                                                             \
  if (S < MAX_SMALLBIN_SIZE)                                                  \
  {                                                                           \
    IDX = smallbin_index(S);                                                  \
    mark_binblock(IDX);                                                       \
    BK = bin_at(IDX);                                                         \
    FD = BK->fd;                                                              \
    P->bk = BK;                                                               \
    P->fd = FD;                                                               \
    FD->bk = BK->fd = P;                                                      \
  }                                                                           \
  else                                                                        \
  {                                                                           \
    IDX = bin_index(S);                                                       \
    BK = bin_at(IDX);                                                         \
    FD = BK->fd;                                                              \
    if (FD == BK) mark_binblock(IDX);                                         \
    else                                                                      \
    {                                                                         \
      while (FD != BK && S < chunksize(FD)) FD = FD->fd;                      \
      BK = FD->bk;                                                            \
    }                                                                         \
    P->bk = BK;                                                               \
    P->fd = FD;                                                               \
    FD->bk = BK->fd = P;                                                      \
  }                                                                           \
}

/* take a chunk off a list */

#define unlink(P, BK, FD)                                                     \
{                                                                             \
  BK = P->bk;                                                                 \
  FD = P->fd;                                                                 \
  FD->bk = BK;                                                        \
  BK->fd = FD;                                                        \
}                                                                             \

/* Place p as the last remainder */

#define link_last_remainder(P)                                                \
{                                                                             \
  last_remainder->fd = last_remainder->bk =  P;                               \
  P->fd = P->bk = last_remainder;                                             \
}

/* Clear the last_remainder bin */

#define clear_last_remainder \
  (last_remainder->fd = last_remainder->bk = last_remainder)



/* Routines dealing with mmap(). */





/* Main public routines */






/*

  calloc calls malloc, then zeroes out the allocated chunk.

*/

Void_t* cALLOc(RARG size_t n, size_t elem_size)
{
  mchunkptr p;
  INTERNAL_SIZE_T csz;

  INTERNAL_SIZE_T sz = n * elem_size;

  Void_t* mem;

  /* check if expand_top called, in which case don't need to clear */

  mem = mALLOc (RCALL sz);

  if (mem == 0) 
  {
    return 0;
  }
  else
  {
    p = mem2chunk(mem);

    /* Two optional cases in which clearing not necessary */

    csz = chunksize(p);

    MALLOC_ZERO(mem, csz - SIZE_SZ);
    return mem;
  }
}





extern void malloc_update_mallinfo(void);





/*

History:

    V2.6.3 Sun May 19 08:17:58 1996  Doug Lea  (dl at gee)
      * Added pvalloc, as recommended by H.J. Liu
      * Added 64bit pointer support mainly from Wolfram Gloger
      * Added anonymously donated WIN32 sbrk emulation
      * Malloc, calloc, getpagesize: add optimizations from Raymond Nijssen
      * malloc_extend_top: fix mask error that caused wastage after
        foreign sbrks
      * Add linux mremap support code from HJ Liu
   
    V2.6.2 Tue Dec  5 06:52:55 1995  Doug Lea  (dl at gee)
      * Integrated most documentation with the code.
      * Add support for mmap, with help from 
        Wolfram Gloger (Gloger@lrz.uni-muenchen.de).
      * Use last_remainder in more cases.
      * Pack bins using idea from  colin@nyx10.cs.du.edu
      * Use ordered bins instead of best-fit threshhold
      * Eliminate block-local decls to simplify tracing and debugging.
      * Support another case of realloc via move into top
      * Fix error occuring when initial sbrk_base not word-aligned.  
      * Rely on page size for units instead of SBRK_UNIT to
        avoid surprises about sbrk alignment conventions.
      * Add mallinfo, mallopt. Thanks to Raymond Nijssen
        (raymond@es.ele.tue.nl) for the suggestion. 
      * Add `pad' argument to malloc_trim and top_pad mallopt parameter.
      * More precautions for cases where other routines call sbrk,
        courtesy of Wolfram Gloger (Gloger@lrz.uni-muenchen.de).
      * Added macros etc., allowing use in linux libc from
        H.J. Lu (hjl@gnu.ai.mit.edu)
      * Inverted this history list

    V2.6.1 Sat Dec  2 14:10:57 1995  Doug Lea  (dl at gee)
      * Re-tuned and fixed to behave more nicely with V2.6.0 changes.
      * Removed all preallocation code since under current scheme
        the work required to undo bad preallocations exceeds
        the work saved in good cases for most test programs.
      * No longer use return list or unconsolidated bins since
        no scheme using them consistently outperforms those that don't
        given above changes.
      * Use best fit for very large chunks to prevent some worst-cases.
      * Added some support for debugging

    V2.6.0 Sat Nov  4 07:05:23 1995  Doug Lea  (dl at gee)
      * Removed footers when chunks are in use. Thanks to
        Paul Wilson (wilson@cs.texas.edu) for the suggestion.

    V2.5.4 Wed Nov  1 07:54:51 1995  Doug Lea  (dl at gee)
      * Added malloc_trim, with help from Wolfram Gloger 
        (wmglo@Dent.MED.Uni-Muenchen.DE).

    V2.5.3 Tue Apr 26 10:16:01 1994  Doug Lea  (dl at g)

    V2.5.2 Tue Apr  5 16:20:40 1994  Doug Lea  (dl at g)
      * realloc: try to expand in both directions
      * malloc: swap order of clean-bin strategy;
      * realloc: only conditionally expand backwards
      * Try not to scavenge used bins
      * Use bin counts as a guide to preallocation
      * Occasionally bin return list chunks in first scan
      * Add a few optimizations from colin@nyx10.cs.du.edu

    V2.5.1 Sat Aug 14 15:40:43 1993  Doug Lea  (dl at g)
      * faster bin computation & slightly different binning
      * merged all consolidations to one part of malloc proper
         (eliminating old malloc_find_space & malloc_clean_bin)
      * Scan 2 returns chunks (not just 1)
      * Propagate failure in realloc if malloc returns 0
      * Add stuff to allow compilation on non-ANSI compilers 
          from kpv@research.att.com
     
    V2.5 Sat Aug  7 07:41:59 1993  Doug Lea  (dl at g.oswego.edu)
      * removed potential for odd address access in prev_chunk
      * removed dependency on getpagesize.h
      * misc cosmetics and a bit more internal documentation
      * anticosmetics: mangled names in macros to evade debugger strangeness
      * tested on sparc, hp-700, dec-mips, rs6000 
          with gcc & native cc (hp, dec only) allowing
          Detlefs & Zorn comparison study (in SIGPLAN Notices.)

    Trial version Fri Aug 28 13:14:29 1992  Doug Lea  (dl at g.oswego.edu)
      * Based loosely on libg++-1.2X malloc. (It retains some of the overall 
         structure of old version,  but most details differ.)

*/
