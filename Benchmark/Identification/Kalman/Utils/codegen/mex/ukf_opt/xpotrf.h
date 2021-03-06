/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xpotrf.h
 *
 * Code generation for function 'xpotrf'
 *
 */

#ifndef XPOTRF_H
#define XPOTRF_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "omp.h"
#include "ukf_opt_types.h"

/* Function Declarations */
extern int32_T xpotrf(const emlrtStack *sp, int32_T n, real_T A_data[], int32_T
                      lda);

#endif

/* End of code generation (xpotrf.h) */
