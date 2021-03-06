/* { dg-do compile { target i?86-*-* x86_64-*-* } } */
/* { dg-options "-O -pedantic-errors -march=k8 -msse4a -m3dnow -mavx -mfma4 -mxop -maes -mpclmul -mpopcnt -mabm -mbmi -mtbm -mlwp -mfsgsbase -mrdrnd -mf16c" } */

/* Test that {,x,e,p,t,s,w,a,b,i}mmintrin.h, mm3dnow.h, fma4intrin.h,
   xopintrin.h, abmintrin.h, bmiintrin.h, tbmintrin.h, lwpintrin.h,
   popcntintrin.h and mm_malloc.h.h are usable with -O -pedantic-errors.  */

#include <x86intrin.h>

int dummy;

