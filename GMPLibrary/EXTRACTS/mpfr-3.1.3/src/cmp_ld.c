/* mpfr_cmp_d -- compare a floating-point number with a long double

Copyright 2004, 2006-2015 Free Software Foundation, Inc.
Contributed by the AriC and Caramel projects, INRIA.

This file is part of the GNU MPFR Library.

The GNU MPFR Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MPFR Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MPFR Library; see the file COPYING.LESSER.  If not, see
http://www.gnu.org/licenses/ or write to the Free Software Foundation, Inc.,
51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA. */

#include "mpfr-impl.h"

int
mpfr_cmp_ld (mpfr_srcptr b, long double d)
{
  mpfr_t tmp;
  int res;

  mpfr_init2 (tmp, MPFR_LDBL_MANT_DIG);
  res = mpfr_set_ld (tmp, d, MPFR_RNDN);
  MPFR_ASSERTD (res == 0);
  res = mpfr_cmp (b, tmp);
  mpfr_clear (tmp);

  return res;
}
