/** @file
  Declaration of internal functions in AppleMathLib.

  Copyright (c) 2006 - 2010, Intel Corporation.  All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php.

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
**/

#ifndef APPLE_MATH_LIB_
#define APPLE_MATH_LIB_

// MultS64x64
/** Multiplies a 64-bit signed integer by a 64-bit signed integer and generates a
    64-bit signed result.

  This function multiplies the 64-bit signed value Multiplicand by the 64-bit
  signed value Multiplier and generates a 64-bit signed result. This 64-bit
  signed result is returned.

  @param  Multiplicand  A 64-bit signed value.
  @param  Multiplier    A 64-bit signed value.

  @return  Multiplicand * Multiplier.
**/
UINT64
EFIAPI
MultU64x64 (
  IN UINT64  Multiplicand,
  IN UINT64  Multiplier
  );

// MultS64x64
/** Multiplies a 64-bit signed integer by a 64-bit signed integer and generates a
    64-bit signed result.

  This function multiplies the 64-bit signed value Multiplicand by the 64-bit
  signed value Multiplier and generates a 64-bit signed result. This 64-bit
  signed result is returned.

  @param  Multiplicand  A 64-bit signed value.
  @param  Multiplier    A 64-bit signed value.

  @return  Multiplicand * Multiplier.
**/
INT64
EFIAPI
MultS64x64 (
  IN INT64  Multiplicand,
  IN INT64  Multiplier
  );

// DivU64x32
/** Divides a 64-bit unsigned integer by a 32-bit unsigned integer and
    generates a 64-bit unsigned result and an optional 32-bit unsigned remainder.

  This function divides the 64-bit unsigned value Dividend by the 32-bit
  unsigned value Divisor and generates a 64-bit unsigned quotient.
  This function returns the 64-bit unsigned quotient.

  It is the caller's responsibility to not call this function with a Divisor of 0.
  If Divisor is 0, then the quotient should be assumed to be the largest negative
  integer.

  If Divisor is 0, then ASSERT().

  @param  Dividend  A 64-bit unsigned value.
  @param  Divisor   A 32-bit unsigned value.

  @return  Dividend / Divisor.
**/
UINT64
EFIAPI
MathLibDivU64x32 (
  IN UINT64  Dividend,
  IN UINT32  Divisor
  );

// DivU64x64
/** Divides a 64-bit unsigned integer by a 64-bit unsigned integer and
    generates a 64-bit unsigned result and an optional 64-bit unsigned remainder.

  This function divides the 64-bit unsigned value Dividend by the 64-bit
  unsigned value Divisor and generates a 64-bit unsigned quotient.
  This function returns the 64-bit unsigned quotient.

  It is the caller's responsibility to not call this function with a Divisor of 0.
  If Divisor is 0, then the quotient should be assumed to be the largest negative
  integer.

  If Divisor is 0, then ASSERT().

  @param  Dividend  A 64-bit unsigned value.
  @param  Divisor   A 64-bit unsigned value.

  @return  Dividend / Divisor
**/
UINT64
EFIAPI
MathLibDivU64x64 (
  IN UINT64  Dividend,
  IN UINT64  Divisor
  );

// DivS64x64
/** Divides a 64-bit signed integer by a 64-bit signed integer and generates a
    64-bit signed result.

  This function divides the 64-bit signed value Dividend by the 64-bit signed
  value Divisor and generates a 64-bit signed quotient. This function
  returns the 64-bit signed quotient.

  It is the caller's responsibility to not call this function with a Divisor of 0.
  If Divisor is 0, then the quotient should be assumed to be the largest negative
  integer.

  If Divisor is 0, then ASSERT().

  @param  Dividend  A 64-bit signed value.
  @param  Divisor   A 64-bit signed value.

  @return  Dividend / Divisor
**/
INT64
EFIAPI
MathLibDivS64x64 (
  IN  INT64 Dividend,
  IN  INT64 Divisor
  );

#endif // APPLE_MATH_LIB_
