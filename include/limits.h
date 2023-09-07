/*-------------------------------------------------------------------------
   limits.h - ANSI defines constants for sizes of integral types

   Copyright (C) 1999, Sandeep Dutta . sandeep.dutta@usa.net

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

#ifndef __STDC_VERSION_LIMITS_H__
#define __STDC_VERSION_LIMITS_H__ __STDC_VERSION__

#define CHAR_BIT    __CHAR_BIT__
#define SCHAR_MAX   __SCHAR_MAX__
#define SCHAR_MIN  (-__SCHAR_MAX__ - 1)
#define UCHAR_MAX   0xff

#ifdef __CHAR_UNSIGNED__
#define CHAR_MAX    UCHAR_MAX
#define CHAR_MIN    0
#else
#define CHAR_MAX    SCHAR_MAX
#define CHAR_MIN    SCHAR_MIN
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199409L
#define MB_LEN_MAX  4
#endif

#define INT_MIN     (-__INT_MAX__ - 1)
#define INT_MAX     __INT_MAX__
#define SHRT_MAX    __SHRT_MAX__
#define SHRT_MIN    (-__SHRT_MAX__ - 1)
#define UINT_MAX    0xffff
#define UINT_MIN    0
#define USHRT_MAX   UINT_MAX
#define USHRT_MIN   UINT_MIN
#define LONG_MIN    (-__LONG_MAX__-1)
#define LONG_MAX    __LONG_MAX__
#define ULONG_MAX   0xffffffffUL
#define ULONG_MIN   0UL

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define LLONG_MIN   (-__LONG_LONG_MAX__-1)
#define LLONG_MAX   __LONG_LONG_MAX__
#define ULLONG_MAX  18446744073709551615ULL
#define USHRT_WIDTH __SHRT_WIDTH__
#define UINT_WIDTH __INT_WIDTH__
#define ULONG_WIDTH __LONG_WIDTH__
#define ULLONG_WIDTH __LONG_LONG_WIDTH__
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
#define BITINT_MAXWIDTH __SDCC_BITINT_MAXWIDTH
#endif

#endif

