/* Test the `vreinterprets64_p8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vreinterprets64_p8 (void)
{
  int64x1_t out_int64x1_t;
  poly8x8_t arg0_poly8x8_t;

  out_int64x1_t = vreinterpret_s64_p8 (arg0_poly8x8_t);
}

/* { dg-final { cleanup-saved-temps } } */