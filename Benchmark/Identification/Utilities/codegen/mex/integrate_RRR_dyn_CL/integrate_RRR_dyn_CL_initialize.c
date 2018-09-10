/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * integrate_RRR_dyn_CL_initialize.c
 *
 * Code generation for function 'integrate_RRR_dyn_CL_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "integrate_RRR_dyn_CL.h"
#include "integrate_RRR_dyn_CL_initialize.h"
#include "_coder_integrate_RRR_dyn_CL_mex.h"
#include "integrate_RRR_dyn_CL_data.h"

/* Function Definitions */
void integrate_RRR_dyn_CL_initialize(void)
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

/* End of code generation (integrate_RRR_dyn_CL_initialize.c) */
