/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ukf_opt_mexutil.h
 *
 * Code generation for function 'ukf_opt_mexutil'
 *
 */

#ifndef UKF_OPT_MEXUTIL_H
#define UKF_OPT_MEXUTIL_H

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
extern const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
extern void emlrtFreeThreadStackData(const emlrtStack *sp);
extern emlrtCTX emlrtGetRootTLSGlobal(void);
extern ukf_optTLS *emlrtGetThreadStackData(void);
extern void emlrtInitThreadStackData(const emlrtStack *sp);
extern void emlrtLockerFunction(EmlrtLockeeFunction aLockee, const emlrtConstCTX
  aTLS, void *aData);
extern void l_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

#endif

/* End of code generation (ukf_opt_mexutil.h) */
