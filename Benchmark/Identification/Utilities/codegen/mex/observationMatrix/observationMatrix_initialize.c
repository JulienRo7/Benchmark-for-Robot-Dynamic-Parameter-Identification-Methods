/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * observationMatrix_initialize.c
 *
 * Code generation for function 'observationMatrix_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "observationMatrix.h"
#include "observationMatrix_initialize.h"
#include "_coder_observationMatrix_mex.h"
#include "observationMatrix_data.h"

/* Function Definitions */
void observationMatrix_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (observationMatrix_initialize.c) */
