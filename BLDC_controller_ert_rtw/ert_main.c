/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'BLDC_controller'.
 *
 * Model version                  : 1.1297
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sun Mar  6 11:02:11 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include <stddef.h>
#include <stdio.h>                     /* This ert_main.c example uses printf/fflush */
#include "BLDC_controller.h"           /* Model's header file */
#include "rtwtypes.h"

static RT_MODEL rtM_;
static RT_MODEL *const rtMPtr = &rtM_; /* Real-time model */
static P rtP = {
  /* Variable: dV_openRate
   * Referenced by: '<S37>/dV_openRate'
   */
  12288,

  /* Variable: dz_cntTrnsDetHi
   * Referenced by: '<S17>/dz_cntTrnsDet'
   */
  40,

  /* Variable: dz_cntTrnsDetLo
   * Referenced by: '<S17>/dz_cntTrnsDet'
   */
  20,

  /* Variable: n_cruiseMotTgt
   * Referenced by: '<S61>/n_cruiseMotTgt'
   */
  0,

  /* Variable: z_maxCntRst
   * Referenced by:
   *   '<S13>/Counter'
   *   '<S13>/z_maxCntRst'
   *   '<S13>/z_maxCntRst2'
   *   '<S13>/UnitDelay3'
   *   '<S17>/z_counter'
   */
  2000,

  /* Variable: cf_speedCoef
   * Referenced by: '<S17>/cf_speedCoef'
   */
  10667U,

  /* Variable: t_errDequal
   * Referenced by: '<S20>/t_errDequal'
   */
  9600U,

  /* Variable: t_errQual
   * Referenced by: '<S20>/t_errQual'
   */
  1280U,

  /* Variable: Vd_max
   * Referenced by:
   *   '<S36>/Vd_max'
   *   '<S80>/Vd_max1'
   */
  14400,

  /* Variable: Vq_max_M1
   * Referenced by: '<S80>/Vq_max_M1'
   */
  { 14400, 14396, 14386, 14368, 14343, 14311, 14271, 14225, 14171, 14109, 14040,
    13963, 13879, 13786, 13685, 13576, 13459, 13333, 13198, 13053, 12900, 12736,
    12562, 12377, 12181, 11973, 11753, 11520, 11273, 11011, 10733, 10438, 10124,
    9790, 9433, 9051, 8640, 8196, 7713, 7184, 6597, 5935, 5170, 4245, 3019, 0 },

  /* Variable: Vq_max_XA
   * Referenced by: '<S80>/Vq_max_XA'
   */
  { 0, 320, 640, 960, 1280, 1600, 1920, 2240, 2560, 2880, 3200, 3520, 3840, 4160,
    4480, 4800, 5120, 5440, 5760, 6080, 6400, 6720, 7040, 7360, 7680, 8000, 8320,
    8640, 8960, 9280, 9600, 9920, 10240, 10560, 10880, 11200, 11520, 11840,
    12160, 12480, 12800, 13120, 13440, 13760, 14080, 14400 },

  /* Variable: a_phaAdvMax
   * Referenced by: '<S42>/a_phaAdvMax'
   */
  400,

  /* Variable: i_max
   * Referenced by:
   *   '<S36>/i_max'
   *   '<S80>/i_max'
   */
  12000,

  /* Variable: id_fieldWeakMax
   * Referenced by: '<S42>/id_fieldWeakMax'
   */
  4000,

  /* Variable: n_commAcvLo
   * Referenced by: '<S13>/n_commDeacv'
   */
  240,

  /* Variable: n_commDeacvHi
   * Referenced by: '<S13>/n_commDeacv'
   */
  480,

  /* Variable: n_fieldWeakAuthHi
   * Referenced by: '<S42>/n_fieldWeakAuthHi'
   */
  6400,

  /* Variable: n_fieldWeakAuthLo
   * Referenced by: '<S42>/n_fieldWeakAuthLo'
   */
  4800,

  /* Variable: n_max
   * Referenced by:
   *   '<S36>/n_max'
   *   '<S80>/n_max1'
   */
  16000,

  /* Variable: n_stdStillDet
   * Referenced by: '<S13>/n_stdStillDet'
   */
  48,

  /* Variable: r_errInpTgtThres
   * Referenced by: '<S20>/r_errInpTgtThres'
   */
  9600,

  /* Variable: r_fieldWeakHi
   * Referenced by: '<S42>/r_fieldWeakHi'
   */
  16000,

  /* Variable: r_fieldWeakLo
   * Referenced by: '<S42>/r_fieldWeakLo'
   */
  12000,

  /* Variable: cf_KbLimProt
   * Referenced by:
   *   '<S82>/cf_KbLimProt'
   *   '<S83>/cf_KbLimProt'
   */
  768U,

  /* Variable: cf_idKp
   * Referenced by: '<S63>/cf_idKp1'
   */
  819U,

  /* Variable: cf_iqKp
   * Referenced by: '<S62>/cf_iqKp'
   */
  1229U,

  /* Variable: cf_nKp
   * Referenced by: '<S61>/cf_nKp'
   */
  4833U,

  /* Variable: cf_currFilt
   * Referenced by: '<S50>/cf_currFilt'
   */
  7864U,

  /* Variable: cf_idKi
   * Referenced by: '<S63>/cf_idKi1'
   */
  737U,

  /* Variable: cf_iqKi
   * Referenced by: '<S62>/cf_iqKi'
   */
  1229U,

  /* Variable: cf_iqKiLimProt
   * Referenced by:
   *   '<S81>/cf_iqKiLimProt'
   *   '<S83>/cf_iqKiLimProt'
   */
  737U,

  /* Variable: cf_nKi
   * Referenced by: '<S61>/cf_nKi'
   */
  251U,

  /* Variable: cf_nKiLimProt
   * Referenced by:
   *   '<S82>/cf_nKiLimProt'
   *   '<S83>/cf_nKiLimProt'
   */
  246U,

  /* Variable: n_polePairs
   * Referenced by: '<S15>/n_polePairs'
   */
  15U,

  /* Variable: z_ctrlTypSel
   * Referenced by: '<S1>/z_ctrlTypSel'
   */
  2U,

  /* Variable: z_selPhaCurMeasABC
   * Referenced by: '<S49>/z_selPhaCurMeasABC'
   */
  0U,

  /* Variable: b_angleMeasEna
   * Referenced by:
   *   '<S3>/b_angleMeasEna'
   *   '<S13>/b_angleMeasEna'
   */
  0,

  /* Variable: b_cruiseCtrlEna
   * Referenced by: '<S1>/b_cruiseCtrlEna'
   */
  0,

  /* Variable: b_diagEna
   * Referenced by: '<S4>/b_diagEna'
   */
  1,

  /* Variable: b_fieldWeakEna
   * Referenced by:
   *   '<S6>/b_fieldWeakEna'
   *   '<S97>/b_fieldWeakEna'
   */
  0
};                                     /* Modifiable parameters */

static DW rtDW;                        /* Observable states */
static ExtU rtU;                       /* External inputs */
static ExtY rtY;                       /* External outputs */

/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */
void rt_OneStep(RT_MODEL *const rtM);
void rt_OneStep(RT_MODEL *const rtM)
{
  static boolean_T OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */

  /* Step the model */
  BLDC_controller_step(rtM);

  /* Get model outputs here */

  /* Indicate task complete */
  OverrunFlag = false;

  /* Disable interrupts here */
  /* Restore FPU context here (if necessary) */
  /* Enable interrupts here */
}

/*
 * The example "main" function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching rt_OneStep to a real-time clock is target specific.  This example
 * illustrates how you do this relative to initializing the model.
 */
int_T main(int_T argc, const char *argv[])
{
  RT_MODEL *const rtM = rtMPtr;

  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Pack model data into RTM */
  rtM->defaultParam = &rtP;
  rtM->dwork = &rtDW;
  rtM->inputs = &rtU;
  rtM->outputs = &rtY;

  /* Initialize model */
  BLDC_controller_initialize(rtM);

  /* Attach rt_OneStep to a timer or interrupt service routine with
   * period 6.0E-5 seconds (the model's base sample time) here.  The
   * call syntax for rt_OneStep is
   *
   *  rt_OneStep(rtM);
   */
  printf("Warning: The simulation will run forever. "
         "Generated ERT main won't simulate model step behavior. "
         "To change this behavior select the 'MAT-file logging' option.\n");
  fflush((NULL));
  while (1) {
    /*  Perform other application tasks here */
  }

  /* The option 'Remove error status field in real-time model data structure'
   * is selected, therefore the following code does not need to execute.
   */
#if 0

  /* Disable rt_OneStep() here */
#endif

  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
