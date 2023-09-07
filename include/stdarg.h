/*-------------------------------------------------------------------------
   stdarg.h - ANSI macros for variable parameter list

   Copyright (C) 2000, Michael Hope
   Copyright (C) 2011, Philipp Klaus Krause pkk@spth.de

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

#ifndef __STDC_VERSION_STDARG_H__
#define __STDC_VERSION_STDARG_H__ 201710L /* TODO: replace by __STDC_VERSION__ when this header becomes C23-compliant! */

typedef __builtin_va_list va_list;
#define va_start(v,l)   do { (v) = __builtin_va_start((l)); } while (0)
#define va_end(x)
#define va_arg(v, t)    ((v) = __builtin_va_increment((v)), __builtin_va_arg((v), t))
#define __va_copy(d,s)  __builtin_va_copy((d),(s))

#endif

