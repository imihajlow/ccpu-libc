/*---------------------------------------------------------------------
   div

   Copyright (c) 2022, Philipp Klaus Krause . krauseph@informatik.uni-freiburg.de

   This library is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 2, or (at your option) any
   later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
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

#include <stdlib.h>

#if !defined(__SDCC_ds390) && !defined(__SDCC_ds390) && !defined(__SDCC_hc08) && !defined(__SDCC_s08) && !defined(__SDCC_mos6502) // struct return not yet supported
ldiv_t ldiv(long int numer, long int denom)
{
	ldiv_t ret;
	ret.quot = numer / denom;
	ret.rem = numer % denom;
	return(ret);
}
#endif

