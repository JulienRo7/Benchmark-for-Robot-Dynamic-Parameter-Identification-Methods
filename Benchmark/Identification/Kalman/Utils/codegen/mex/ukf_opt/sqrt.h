/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sqrt.h
 *
 * Code generation for function 'sqrt'
 *
 */

#ifndef SQRT_H
#define SQRT_H

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
extern void b_sqrt(const emlrtStack *sp, real_T *x);
extern void c_sqrt(const emlrtStack *sp, real_T x_data[], int32_T x_size[2]);

#endif

/* End of code generation (sqrt.h) */
