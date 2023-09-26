/*-------------------------------------------------------------------------
   stdint.h - ISO C99 7.18 Integer types <stdint.h>

   Copyright (C) 2005, Maarten Brock, sourceforge.brock@dse.nl
   Copyright (C) 2011, Philipp Klaus Krause, pkk@spth.de

   This library is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 2, or (at your option) any
   later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License 
   along with this library; see the file COPYING. If not, write to the
   Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
   MA 02110-1301, USA.

   As a special exception, if you link this library with other files,
   some of which are compiled with SDCC, to produce an executable,
   this library does not by itself cause the resulting executable to
   be covered by the GNU General Public License. This exception does
   not however invalidate any other reasons why the executable file
   might be covered by the GNU General Public License.
-------------------------------------------------------------------------*/

#ifndef __STDC_VERSION_STDINT_H__
#define __STDC_VERSION_STDINT_H__ __STDC_VERSION__

/* Exact integral types.  */

#ifndef __SPECIFIED_WIDTH_INTEGER_TYPES_DEFINED
#define __SPECIFIED_WIDTH_INTEGER_TYPES_DEFINED

/* Signed.  */

typedef __INT8_TYPE__            int8_t;
typedef __INT16_TYPE__           int16_t;
typedef __INT32_TYPE__           int32_t;
typedef __INT64_TYPE__           int64_t;

/* Unsigned.  */
typedef __UINT8_TYPE__            uint8_t;
typedef __UINT16_TYPE__           uint16_t;
typedef __UINT32_TYPE__           uint32_t;
typedef __UINT64_TYPE__           uint64_t;
/* Small types.  */

/* Signed.  */
typedef __INT_LEAST8_TYPE__       int_least8_t;
typedef __INT_LEAST16_TYPE__      int_least16_t;
typedef __INT_LEAST32_TYPE__      int_least32_t;
typedef __INT_LEAST64_TYPE__      int_least64_t;

/* Unsigned.  */
typedef __UINT_LEAST8_TYPE__       uint_least8_t;
typedef __UINT_LEAST16_TYPE__      uint_least16_t;
typedef __UINT_LEAST32_TYPE__      uint_least32_t;
typedef __UINT_LEAST64_TYPE__      uint_least64_t;

/* Fast types.  */

/* Signed.  */
typedef __INT_FAST8_TYPE__       int_fast8_t;
typedef __INT_FAST16_TYPE__      int_fast16_t;
typedef __INT_FAST32_TYPE__      int_fast32_t;
typedef __INT_FAST64_TYPE__      int_fast64_t;

/* Unsigned.  */
typedef __UINT_FAST8_TYPE__       uint_fast8_t;
typedef __UINT_FAST16_TYPE__      uint_fast16_t;
typedef __UINT_FAST32_TYPE__      uint_fast32_t;
typedef __UINT_FAST64_TYPE__      uint_fast64_t;

#endif // __SPECIFIED_WIDTH_INTEGER_TYPES_DEFINED

/* Types for `void *' pointers.  */
typedef __INTPTR_TYPE__      intptr_t;
typedef __UINTPTR_TYPE__     uintptr_t;


/* Largest integral types.  */
typedef __INTMAX_TYPE__           intmax_t;
typedef __UINTMAX_TYPE__          uintmax_t;

/* Limits of integral types.  */

/* Minimum of signed integral types.  */
#define INT8_MIN               (-128)
#define INT16_MIN              (-32767-1)
#define INT32_MIN              (-2147483647L-1)
#define INT64_MIN              (-9223372036854775807LL-1)

/* Maximum of signed integral types.  */
#define INT8_MAX               (127)
#define INT16_MAX              (32767)
#define INT32_MAX              (2147483647L)
#define INT64_MAX              (9223372036854775807LL)

/* Maximum of unsigned integral types.  */
#define UINT8_MAX              (255)
#define UINT16_MAX             (65535)
#define UINT32_MAX             (4294967295UL)
#define UINT64_MAX             (18446744073709551615ULL)

/* Minimum of signed integral types having a minimum size.  */
#define INT_LEAST8_MIN         (INT8_MIN)
#define INT_LEAST16_MIN        (INT16_MIN)
#define INT_LEAST32_MIN        (INT32_MIN)
#define INT_LEAST64_MIN        (INT64_MIN)

/* Maximum of signed integral types having a minimum size.  */
#define INT_LEAST8_MAX         INT8_MAX
#define INT_LEAST16_MAX        INT16_MAX
#define INT_LEAST32_MAX        INT32_MAX
#define INT_LEAST64_MAX        INT64_MAX

/* Maximum of unsigned integral types having a minimum size.  */
#define UINT_LEAST8_MAX        UINT8_MAX
#define UINT_LEAST16_MAX       UINT16_MAX
#define UINT_LEAST32_MAX       UINT32_MAX
#define UINT_LEAST64_MAX       UINT64_MAX

/* Minimum of fast signed integral types having a minimum size.  */
#define INT_FAST8_MIN          (INT8_MIN)
#define INT_FAST16_MIN         (INT16_MIN)
#define INT_FAST32_MIN         (INT32_MIN)
#define INT_FAST64_MIN         (INT64_MIN)

/* Maximum of fast signed integral types having a minimum size.  */
#define INT_FAST8_MAX          INT8_MAX
#define INT_FAST16_MAX         INT16_MAX
#define INT_FAST32_MAX         INT32_MAX
#define INT_FAST64_MAX         INT64_MAX

/* Maximum of fast unsigned integral types having a minimum size.  */
#define UINT_FAST8_MAX         UINT8_MAX
#define UINT_FAST16_MAX        UINT16_MAX
#define UINT_FAST32_MAX        UINT32_MAX
#define UINT_FAST64_MAX        UINT64_MAX

/* Values to test for integral types holding `void *' pointer.  */
#define INTPTR_MIN             (-__INTPTR_MAX__-1)
#define INTPTR_MAX             (__INTPTR_MAX__)
#define UINTPTR_MAX            (__UINTPTR_MAX__)

/* Minimum for largest signed integral type.  */
#define INTMAX_MIN             (-__INTMAX_MAX__-1)

/* Maximum for largest signed integral type.  */
#define INTMAX_MAX             (__INTMAX_MAX__)

/* Maximum for largest unsigned integral type.  */
#define UINTMAX_MAX            (__UINTMAX_MAX__)

/* Limits of other integer types.  */

/* Limits of `ptrdiff_t' type.  */
#define PTRDIFF_MIN           (-__PTRDIFF_MAX__-1)
#define PTRDIFF_MAX           (__PTRDIFF_MAX__)

/* */
#define SIG_ATOMIC_MIN        (0)
#define SIG_ATOMIC_MAX        (255)

/* Limit of `size_t' type.  */
#define SIZE_MAX               (__SIZE_MAX__)

/* Signed.  */
#define INT8_C(c)      c
#define INT16_C(c)     c
#define INT32_C(c)     c ## L
#define INT64_C(c)     c ## LL

/* Unsigned.  */
#define UINT8_C(c)     c ## U
#define UINT16_C(c)    c ## U
#define UINT32_C(c)    c ## UL
#define UINT64_C(c)    c ## ULL

#define WCHAR_MIN      (__WCHAR_MIN__)
#define WCHAR_MAX      (__WCHAR_MAX__)

#define WINT_MIN       (__WINT_MIN__)
#define WINT_MAX       (__WINT_MAX__)

/* Maximal type.  */
#define INTMAX_C(c)    c ## LL
#define UINTMAX_C(c)   c ## ULL

/* Bounds-checking interfaces from annex K of the C11 standard. */
#if defined (__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__
#define RSIZE_MAX SIZE_MAX
#endif

#endif /* stdint.h */

