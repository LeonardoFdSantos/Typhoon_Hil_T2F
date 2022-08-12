// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------

#ifdef __cplusplus
#include <limits>

extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <complex.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"

#ifdef __cplusplus
}
#endif

// H files from Advanced C Function components


// Header files from additional sources (Advanced C Function)

// ----------------------------------------------------------------------------------------                // generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines
































































































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
double _consumidor_ia_ia1__out;
double _consumidor_ib_ia1__out;
double _consumidor_ic_ia1__out;
double _consumidor_pll_pid_integrator1__out;
double _consumidor_pll_pid_integrator2__out;
double _consumidor_pll_unit_delay1__out;
double _consumidor_pll_to_hz__out;
double _consumidor_vab_va1__out;
double _consumidor_van_va1__out;
double _consumidor_vbc_va1__out;
double _consumidor_vbn_va1__out;
double _consumidor_vca_va1__out;
double _consumidor_vcn_va1__out;
double _consumidor_zero__out = 0.0;
X_Int32 _faltaconsumidor_fault_select__out;
double _fuselink1_fuselinka_cpu_trans_output__out;
X_Int32 _fuselink1_s1_ctc_wrapper__feedback_out = 0;
double _fuselink2_fuselinka_cpu_trans_output__out;
X_Int32 _fuselink2_s1_ctc_wrapper__feedback_out = 0;
double _fuselink3_fuselinka_cpu_trans_output__out;
X_Int32 _fuselink3_s1_ctc_wrapper__feedback_out = 0;
double _fuselink4_fuselinka_cpu_trans_output__out;
X_Int32 _fuselink4_s1_ctc_wrapper__feedback_out = 0;
double _fuselink5_fuselinka_cpu_trans_output__out;
X_Int32 _fuselink5_s1_ctc_wrapper__feedback_out = 0;
double _fuselink6_fuselinka_cpu_trans_output__out;
X_Int32 _fuselink6_s1_ctc_wrapper__feedback_out = 0;
double _fuselink7_fuselinka_cpu_trans_output__out;
X_Int32 _fuselink7_s1_ctc_wrapper__feedback_out = 0;
double _rele_ia_ia1__out;
double _rele_ib_ia1__out;
double _rele_ic_ia1__out;
double _rele_pll_pid_integrator1__out;
double _rele_pll_pid_integrator2__out;
double _rele_pll_unit_delay1__out;
double _rele_pll_to_hz__out;
double _rele_vab_va1__out;
double _rele_van_va1__out;
double _rele_vbc_va1__out;
double _rele_vbn_va1__out;
double _rele_vca_va1__out;
double _rele_vcn_va1__out;
double _rele_zero__out = 0.0;
double _consumidor_pll_sin__out;

double _consumidor_meassm_mode_and_dfract__Freq;


double _consumidor_meassm_mode_and_dfract__dFract;
X_Int32 _consumidor_meassm_mode_and_dfract__mode;
X_Int32 _consumidor_meassm_mode_and_dfract__submode;
double _consumidor_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _consumidor_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _consumidor_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _consumidor_extra_output_bus__out[12];

X_Int32 _faltaconsumidor_control_state_machine__in;


X_Int32 _faltaconsumidor_control_state_machine__Ca;
X_Int32 _faltaconsumidor_control_state_machine__Cb;
X_Int32 _faltaconsumidor_control_state_machine__Cc;
X_Int32 _faltaconsumidor_control_state_machine__Cn;
double _rele_pll_sin__out;

double _rele_meassm_mode_and_dfract__Freq;


double _rele_meassm_mode_and_dfract__dFract;
X_Int32 _rele_meassm_mode_and_dfract__mode;
X_Int32 _rele_meassm_mode_and_dfract__submode;
double _rele_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _rele_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _rele_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _rele_extra_output_bus__out[12];

double _consumidor_i_rms_calc_rms__IN1;
double _consumidor_i_rms_calc_rms__IN2;
double _consumidor_i_rms_calc_rms__IN3;
double _consumidor_i_rms_calc_rms__dFract;
X_Int32 _consumidor_i_rms_calc_rms__mode;


double _consumidor_i_rms_calc_rms__RMS1;
double _consumidor_i_rms_calc_rms__RMS2;
double _consumidor_i_rms_calc_rms__RMS3;

double _consumidor_vll_rms_calc_rms__IN1;
double _consumidor_vll_rms_calc_rms__IN2;
double _consumidor_vll_rms_calc_rms__IN3;
double _consumidor_vll_rms_calc_rms__dFract;
X_Int32 _consumidor_vll_rms_calc_rms__mode;


double _consumidor_vll_rms_calc_rms__RMS1;
double _consumidor_vll_rms_calc_rms__RMS2;
double _consumidor_vll_rms_calc_rms__RMS3;

double _consumidor_vln_rms_calc_rms__IN1;
double _consumidor_vln_rms_calc_rms__IN2;
double _consumidor_vln_rms_calc_rms__IN3;
double _consumidor_vln_rms_calc_rms__dFract;
X_Int32 _consumidor_vln_rms_calc_rms__mode;


double _consumidor_vln_rms_calc_rms__RMS1;
double _consumidor_vln_rms_calc_rms__RMS2;
double _consumidor_vln_rms_calc_rms__RMS3;
double _consumidor_pll_abc_to_dq_alpha_beta_to_dq__d;
double _consumidor_pll_abc_to_dq_alpha_beta_to_dq__q;
double _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k2;

double _rele_i_rms_calc_rms__IN1;
double _rele_i_rms_calc_rms__IN2;
double _rele_i_rms_calc_rms__IN3;
double _rele_i_rms_calc_rms__dFract;
X_Int32 _rele_i_rms_calc_rms__mode;


double _rele_i_rms_calc_rms__RMS1;
double _rele_i_rms_calc_rms__RMS2;
double _rele_i_rms_calc_rms__RMS3;

double _rele_vll_rms_calc_rms__IN1;
double _rele_vll_rms_calc_rms__IN2;
double _rele_vll_rms_calc_rms__IN3;
double _rele_vll_rms_calc_rms__dFract;
X_Int32 _rele_vll_rms_calc_rms__mode;


double _rele_vll_rms_calc_rms__RMS1;
double _rele_vll_rms_calc_rms__RMS2;
double _rele_vll_rms_calc_rms__RMS3;

double _rele_vln_rms_calc_rms__IN1;
double _rele_vln_rms_calc_rms__IN2;
double _rele_vln_rms_calc_rms__IN3;
double _rele_vln_rms_calc_rms__dFract;
X_Int32 _rele_vln_rms_calc_rms__mode;


double _rele_vln_rms_calc_rms__RMS1;
double _rele_vln_rms_calc_rms__RMS2;
double _rele_vln_rms_calc_rms__RMS3;
double _rele_pll_abc_to_dq_alpha_beta_to_dq__d;
double _rele_pll_abc_to_dq_alpha_beta_to_dq__q;
double _rele_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _rele_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _consumidor_sumi_rms__out;
double _consumidor_pll_abc_to_dq_lpf_d__out;
double _consumidor_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _consumidor_pll_abc_to_dq_lpf_q__out;
double _consumidor_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _rele_sumi_rms__out;
double _rele_pll_abc_to_dq_lpf_d__out;
double _rele_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _rele_pll_abc_to_dq_lpf_q__out;
double _rele_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _consumidor_gaini_rms__out;
double _consumidor_pll_normalize__in1;
double _consumidor_pll_normalize__in2;


double _consumidor_pll_normalize__in2_pu;
double _consumidor_pll_normalize__pk;
double _rele_gaini_rms__out;
double _rele_pll_normalize__in1;
double _rele_pll_normalize__in2;


double _rele_pll_normalize__in2_pu;
double _rele_pll_normalize__pk;
double _consumidor_output_bus__out[30];
double _consumidor_pll_pid_kd__out;
double _consumidor_pll_pid_ki__out;
double _consumidor_pll_pid_kp__out;
double _rele_output_bus__out[30];
double _rele_pll_pid_kd__out;
double _rele_pll_pid_ki__out;
double _rele_pll_pid_kp__out;
double _consumidor_pll_pid_sum8__out;
double _rele_pll_pid_sum8__out;
double _consumidor_pll_pid_gain1__out;
double _rele_pll_pid_gain1__out;
double _consumidor_pll_pid_sum5__out;
double _rele_pll_pid_sum5__out;
double _consumidor_pll_pid_limit1__out;
double _rele_pll_pid_limit1__out;
double _consumidor_pll_pid_sum6__out;
double _consumidor_pll_rate_limiter1__out;

double _consumidor_pll_integrator__in;


double _consumidor_pll_integrator__out;
double _rele_pll_pid_sum6__out;
double _rele_pll_rate_limiter1__out;

double _rele_pll_integrator__in;


double _rele_pll_integrator__out;
double _consumidor_pll_pid_kb__out;
double _consumidor_pll_lpf_lpf__out;
double _consumidor_pll_lpf_lpf__b_coeff[1] = {0.024674000736159996};
double _consumidor_pll_lpf_lpf__a_coeff[3] = {1.0, -1.7778894456, 0.8025634463361601};
double _consumidor_pll_lpf_lpf__a_sum;
double _consumidor_pll_lpf_lpf__b_sum;
double _consumidor_pll_lpf_lpf__delay_line_in;
double _rele_pll_pid_kb__out;
double _rele_pll_lpf_lpf__out;
double _rele_pll_lpf_lpf__b_coeff[1] = {0.024674000736159996};
double _rele_pll_lpf_lpf__a_coeff[3] = {1.0, -1.7778894456, 0.8025634463361601};
double _rele_pll_lpf_lpf__a_sum;
double _rele_pll_lpf_lpf__b_sum;
double _rele_pll_lpf_lpf__delay_line_in;
double _consumidor_pll_pid_sum7__out;
double _rele_pll_pid_sum7__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _consumidor_pll_pid_integrator1__state;
double _consumidor_pll_pid_integrator2__state;
double _consumidor_pll_unit_delay1__state;
double _rele_pll_pid_integrator1__state;
double _rele_pll_pid_integrator2__state;
double _rele_pll_unit_delay1__state;
double _consumidor_meassm_mode_and_dfract__Tfract;
double _consumidor_meassm_mode_and_dfract__freqAbs;
double _consumidor_meassm_mode_and_dfract__fMax;
X_Int32 _consumidor_meassm_mode_and_dfract__reset;
X_Int32 _consumidor_meassm_mode_and_dfract__cycle_counter;
double _rele_meassm_mode_and_dfract__Tfract;
double _rele_meassm_mode_and_dfract__freqAbs;
double _rele_meassm_mode_and_dfract__fMax;
X_Int32 _rele_meassm_mode_and_dfract__reset;
X_Int32 _rele_meassm_mode_and_dfract__cycle_counter;
double _consumidor_i_rms_calc_rms__rmsSum1;
double _consumidor_i_rms_calc_rms__rmsSum2;
double _consumidor_i_rms_calc_rms__rmsSum3;
double _consumidor_vll_rms_calc_rms__rmsSum1;
double _consumidor_vll_rms_calc_rms__rmsSum2;
double _consumidor_vll_rms_calc_rms__rmsSum3;
double _consumidor_vln_rms_calc_rms__rmsSum1;
double _consumidor_vln_rms_calc_rms__rmsSum2;
double _consumidor_vln_rms_calc_rms__rmsSum3;
double _rele_i_rms_calc_rms__rmsSum1;
double _rele_i_rms_calc_rms__rmsSum2;
double _rele_i_rms_calc_rms__rmsSum3;
double _rele_vll_rms_calc_rms__rmsSum1;
double _rele_vll_rms_calc_rms__rmsSum2;
double _rele_vll_rms_calc_rms__rmsSum3;
double _rele_vln_rms_calc_rms__rmsSum1;
double _rele_vln_rms_calc_rms__rmsSum2;
double _rele_vln_rms_calc_rms__rmsSum3;
double _consumidor_pll_abc_to_dq_lpf_d__filtered_value;
double _consumidor_pll_abc_to_dq_lpf_d__previous_in;
double _consumidor_pll_abc_to_dq_lpf_q__filtered_value;
double _consumidor_pll_abc_to_dq_lpf_q__previous_in;
double _rele_pll_abc_to_dq_lpf_d__filtered_value;
double _rele_pll_abc_to_dq_lpf_d__previous_in;
double _rele_pll_abc_to_dq_lpf_q__filtered_value;
double _rele_pll_abc_to_dq_lpf_q__previous_in;
double _consumidor_pll_rate_limiter1__state;
X_Int32 _consumidor_pll_rate_limiter1__first_step;
double _rele_pll_rate_limiter1__state;
X_Int32 _rele_pll_rate_limiter1__first_step;
double _consumidor_pll_lpf_lpf__states[2];
double _rele_pll_lpf_lpf__states[2];
//@cmp.svar.end

//
// Tunable parameters
//
static struct Tunable_params {
} __attribute__((__packed__)) tunable_params;

void *tunable_params_dev0_cpu0_ptr = &tunable_params;

// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif








// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _consumidor_pll_pid_integrator1__state = 376.99111843;
    _consumidor_pll_pid_integrator2__state = 0.0;
    _consumidor_pll_unit_delay1__state = 0.0;
    _rele_pll_pid_integrator1__state = 376.99111843;
    _rele_pll_pid_integrator2__state = 0.0;
    _rele_pll_unit_delay1__state = 0.0;
    HIL_OutAO(0x4007, 0.0f);
    _consumidor_meassm_mode_and_dfract__dFract = 0;
    _consumidor_meassm_mode_and_dfract__fMax = 1.0 / 0.001;
    _consumidor_meassm_mode_and_dfract__cycle_counter = 0;
    _consumidor_meassm_mode_and_dfract__reset = 1;
    XIo_OutFloat(0x55000158, 0.0f);
    XIo_OutInt32(0x5500015c, 0);
    XIo_OutFloat(0x55000160, 0.0f);
    XIo_OutInt32(0x55000164, 0);
    XIo_OutFloat(0x55000168, 0.0f);
    XIo_OutInt32(0x5500016c, 0);
    XIo_OutFloat(0x55000170, 0.0f);
    XIo_OutInt32(0x55000174, 0);
    XIo_OutFloat(0x55000178, 0.0f);
    XIo_OutInt32(0x5500017c, 0);
    XIo_OutFloat(0x55000180, 0.0f);
    XIo_OutInt32(0x55000184, 0);
    XIo_OutFloat(0x55000188, 0.0f);
    XIo_OutInt32(0x5500018c, 0);
    HIL_OutAO(0x4012, 0.0f);
    _rele_meassm_mode_and_dfract__dFract = 0;
    _rele_meassm_mode_and_dfract__fMax = 1.0 / 0.001;
    _rele_meassm_mode_and_dfract__cycle_counter = 0;
    _rele_meassm_mode_and_dfract__reset = 1;
    _consumidor_i_rms_calc_rms__mode = 1;
    _consumidor_vll_rms_calc_rms__mode = 1;
    _consumidor_vln_rms_calc_rms__mode = 1;
    _rele_i_rms_calc_rms__mode = 1;
    _rele_vll_rms_calc_rms__mode = 1;
    _rele_vln_rms_calc_rms__mode = 1;
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    _consumidor_pll_abc_to_dq_lpf_d__filtered_value = 0x0;
    _consumidor_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _consumidor_pll_abc_to_dq_lpf_q__filtered_value = 0x0;
    _consumidor_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x401b, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x401c, 0.0f);
    _rele_pll_abc_to_dq_lpf_d__filtered_value = 0x0;
    _rele_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _rele_pll_abc_to_dq_lpf_q__filtered_value = 0x0;
    _rele_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    _consumidor_pll_normalize__pk = 0;
    _rele_pll_normalize__pk = 0;
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    _consumidor_pll_rate_limiter1__state = 0;
    _consumidor_pll_rate_limiter1__first_step = 1;
    _consumidor_pll_integrator__out = 0;
    _rele_pll_rate_limiter1__state = 0;
    _rele_pll_rate_limiter1__first_step = 1;
    _rele_pll_integrator__out = 0;
    X_UnInt32 _consumidor_pll_lpf_lpf__i;
    for (_consumidor_pll_lpf_lpf__i = 0; _consumidor_pll_lpf_lpf__i < 2; _consumidor_pll_lpf_lpf__i++) {
        _consumidor_pll_lpf_lpf__states[_consumidor_pll_lpf_lpf__i] = 0;
    }
    X_UnInt32 _rele_pll_lpf_lpf__i;
    for (_rele_pll_lpf_lpf__i = 0; _rele_pll_lpf_lpf__i < 2; _rele_pll_lpf_lpf__i++) {
        _rele_pll_lpf_lpf__states[_rele_pll_lpf_lpf__i] = 0;
    }
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}
// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: Consumidor.zero
    // Generated from the component: Rele.zero
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Consumidor.IA.Ia1
    _consumidor_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x20f));
    // Generated from the component: Consumidor.IB.Ia1
    _consumidor_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x210));
    // Generated from the component: Consumidor.IC.Ia1
    _consumidor_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x211));
    // Generated from the component: Consumidor.PLL.PID.Integrator1
    _consumidor_pll_pid_integrator1__out = _consumidor_pll_pid_integrator1__state;
    // Generated from the component: Consumidor.PLL.PID.Integrator2
    _consumidor_pll_pid_integrator2__out = _consumidor_pll_pid_integrator2__state;
    // Generated from the component: Consumidor.PLL.Unit Delay1
    _consumidor_pll_unit_delay1__out = _consumidor_pll_unit_delay1__state;
    // Generated from the component: Consumidor.PLL.to_Hz
    _consumidor_pll_to_hz__out = 0.15915494309189535 * _consumidor_pll_lpf_lpf__out;
    // Generated from the component: Consumidor.VAB.Va1
    _consumidor_vab_va1__out = (HIL_InFloat(0xc80000 + 0x209));
    // Generated from the component: Consumidor.VAn.Va1
    _consumidor_van_va1__out = (HIL_InFloat(0xc80000 + 0x20a));
    // Generated from the component: Consumidor.VBC.Va1
    _consumidor_vbc_va1__out = (HIL_InFloat(0xc80000 + 0x20b));
    // Generated from the component: Consumidor.VBn.Va1
    _consumidor_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x20c));
    // Generated from the component: Consumidor.VCA.Va1
    _consumidor_vca_va1__out = (HIL_InFloat(0xc80000 + 0x20d));
    // Generated from the component: Consumidor.VCn.Va1
    _consumidor_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x20e));
    // Generated from the component: Consumidor.zero
    // Generated from the component: FaltaConsumidor.Fault select
    _faltaconsumidor_fault_select__out = XIo_InInt32(0x55000154);
    // Generated from the component: FuseLink1.FuseLinkA.cpu_trans.Output
    _fuselink1_fuselinka_cpu_trans_output__out = XIo_InFloat(0x55000100);
    // Generated from the component: FuseLink1.S1.CTC_Wrapper
    _fuselink1_s1_ctc_wrapper__feedback_out = HIL_InInt32(0xf80401);
    // Generated from the component: FuseLink2.FuseLinkA.cpu_trans.Output
    _fuselink2_fuselinka_cpu_trans_output__out = XIo_InFloat(0x55000104);
    // Generated from the component: FuseLink2.S1.CTC_Wrapper
    _fuselink2_s1_ctc_wrapper__feedback_out = HIL_InInt32(0xf80402);
    // Generated from the component: FuseLink3.FuseLinkA.cpu_trans.Output
    _fuselink3_fuselinka_cpu_trans_output__out = XIo_InFloat(0x55000108);
    // Generated from the component: FuseLink3.S1.CTC_Wrapper
    _fuselink3_s1_ctc_wrapper__feedback_out = HIL_InInt32(0xf80403);
    // Generated from the component: FuseLink4.FuseLinkA.cpu_trans.Output
    _fuselink4_fuselinka_cpu_trans_output__out = XIo_InFloat(0x5500010c);
    // Generated from the component: FuseLink4.S1.CTC_Wrapper
    _fuselink4_s1_ctc_wrapper__feedback_out = HIL_InInt32(0xf80404);
    // Generated from the component: FuseLink5.FuseLinkA.cpu_trans.Output
    _fuselink5_fuselinka_cpu_trans_output__out = XIo_InFloat(0x55000110);
    // Generated from the component: FuseLink5.S1.CTC_Wrapper
    _fuselink5_s1_ctc_wrapper__feedback_out = HIL_InInt32(0xf80405);
    // Generated from the component: FuseLink6.FuseLinkA.cpu_trans.Output
    _fuselink6_fuselinka_cpu_trans_output__out = XIo_InFloat(0x55000114);
    // Generated from the component: FuseLink6.S1.CTC_Wrapper
    _fuselink6_s1_ctc_wrapper__feedback_out = HIL_InInt32(0xf80420);
    // Generated from the component: FuseLink7.FuseLinkA.cpu_trans.Output
    _fuselink7_fuselinka_cpu_trans_output__out = XIo_InFloat(0x55000118);
    // Generated from the component: FuseLink7.S1.CTC_Wrapper
    _fuselink7_s1_ctc_wrapper__feedback_out = HIL_InInt32(0xf80421);
    // Generated from the component: Rele.IA.Ia1
    _rele_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x1c));
    // Generated from the component: Rele.IB.Ia1
    _rele_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x1d));
    // Generated from the component: Rele.IC.Ia1
    _rele_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x1e));
    // Generated from the component: Rele.PLL.PID.Integrator1
    _rele_pll_pid_integrator1__out = _rele_pll_pid_integrator1__state;
    // Generated from the component: Rele.PLL.PID.Integrator2
    _rele_pll_pid_integrator2__out = _rele_pll_pid_integrator2__state;
    // Generated from the component: Rele.PLL.Unit Delay1
    _rele_pll_unit_delay1__out = _rele_pll_unit_delay1__state;
    // Generated from the component: Rele.PLL.to_Hz
    _rele_pll_to_hz__out = 0.15915494309189535 * _rele_pll_lpf_lpf__out;
    // Generated from the component: Rele.VAB.Va1
    _rele_vab_va1__out = (HIL_InFloat(0xc80000 + 0xb));
    // Generated from the component: Rele.VAn.Va1
    _rele_van_va1__out = (HIL_InFloat(0xc80000 + 0xc));
    // Generated from the component: Rele.VBC.Va1
    _rele_vbc_va1__out = (HIL_InFloat(0xc80000 + 0xd));
    // Generated from the component: Rele.VBn.Va1
    _rele_vbn_va1__out = (HIL_InFloat(0xc80000 + 0xe));
    // Generated from the component: Rele.VCA.Va1
    _rele_vca_va1__out = (HIL_InFloat(0xc80000 + 0xf));
    // Generated from the component: Rele.VCn.Va1
    _rele_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x10));
    // Generated from the component: Rele.zero
    // Generated from the component: Consumidor.PLL.sin
    _consumidor_pll_sin__out = sin(_consumidor_pll_unit_delay1__out);
    // Generated from the component: Consumidor.TRMwt
    // Generated from the component: Consumidor.Freq
    HIL_OutAO(0x4007, (float)_consumidor_pll_to_hz__out);
    // Generated from the component: Consumidor.measSM.mode_and_dFract
    _consumidor_meassm_mode_and_dfract__Freq = _consumidor_pll_to_hz__out;
    _consumidor_meassm_mode_and_dfract__freqAbs = fabs(_consumidor_meassm_mode_and_dfract__Freq);
    if (_consumidor_meassm_mode_and_dfract__reset == 1) {
        _consumidor_meassm_mode_and_dfract__mode = 1;
        _consumidor_meassm_mode_and_dfract__Tfract = 0.0;
        _consumidor_meassm_mode_and_dfract__cycle_counter = 0;
        _consumidor_meassm_mode_and_dfract__reset = 0;
    }
    else if (_consumidor_meassm_mode_and_dfract__freqAbs < 1.0) {
        _consumidor_meassm_mode_and_dfract__mode = 2;
        if (_consumidor_meassm_mode_and_dfract__Tfract > 0.0) {
            _consumidor_meassm_mode_and_dfract__reset = 1;
        }
    }
    else if ((_consumidor_meassm_mode_and_dfract__Tfract < 1.0) && (_consumidor_meassm_mode_and_dfract__freqAbs < _consumidor_meassm_mode_and_dfract__fMax)) {
        _consumidor_meassm_mode_and_dfract__dFract = 0.001 * _consumidor_meassm_mode_and_dfract__freqAbs;
        _consumidor_meassm_mode_and_dfract__Tfract += _consumidor_meassm_mode_and_dfract__dFract;
        if (_consumidor_meassm_mode_and_dfract__Tfract >= 1.0) {
            _consumidor_meassm_mode_and_dfract__cycle_counter += 1;
            if (_consumidor_meassm_mode_and_dfract__cycle_counter >= 1) {
                _consumidor_meassm_mode_and_dfract__dFract = 1.0 - (_consumidor_meassm_mode_and_dfract__Tfract - _consumidor_meassm_mode_and_dfract__dFract);
            }
            else {
                _consumidor_meassm_mode_and_dfract__Tfract -= 1.0;
            }
        }
        _consumidor_meassm_mode_and_dfract__dFract /= 1;
        _consumidor_meassm_mode_and_dfract__mode = 3;
        if (_consumidor_meassm_mode_and_dfract__Tfract < 0.25) {
            _consumidor_meassm_mode_and_dfract__submode = 1;
        }
        else if (_consumidor_meassm_mode_and_dfract__Tfract < 0.5) {
            _consumidor_meassm_mode_and_dfract__submode = 2;
        }
        else if (_consumidor_meassm_mode_and_dfract__Tfract < 0.75) {
            _consumidor_meassm_mode_and_dfract__submode = 3;
        }
        else {
            _consumidor_meassm_mode_and_dfract__submode = 4;
        }
    }
    else if (_consumidor_meassm_mode_and_dfract__Tfract >= 1.0) {
        _consumidor_meassm_mode_and_dfract__mode = 4;
        _consumidor_meassm_mode_and_dfract__reset = 1;
    }
    else {
        _consumidor_meassm_mode_and_dfract__mode = 5;
        _consumidor_meassm_mode_and_dfract__reset = 1;
    }
    // Generated from the component: Consumidor.PLL.abc to dq.abc to alpha beta
    _consumidor_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _consumidor_van_va1__out - _consumidor_vbn_va1__out - _consumidor_vcn_va1__out) * 0.3333333333333333;
    _consumidor_pll_abc_to_dq_abc_to_alpha_beta__beta = (_consumidor_vbn_va1__out - _consumidor_vcn_va1__out) * 0.5773502691896258;
    _consumidor_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_consumidor_van_va1__out + _consumidor_vbn_va1__out + _consumidor_vcn_va1__out) * 0.3333333333333333;
    // Generated from the component: Consumidor.POWER_P
    // Generated from the component: Consumidor.POWER_PA
    // Generated from the component: Consumidor.POWER_PB
    // Generated from the component: Consumidor.POWER_PC
    // Generated from the component: Consumidor.POWER_PF
    // Generated from the component: Consumidor.POWER_PFA
    // Generated from the component: Consumidor.POWER_PFB
    // Generated from the component: Consumidor.POWER_PFC
    // Generated from the component: Consumidor.POWER_Q
    // Generated from the component: Consumidor.POWER_QA
    // Generated from the component: Consumidor.POWER_QB
    // Generated from the component: Consumidor.POWER_QC
    // Generated from the component: Consumidor.POWER_S
    // Generated from the component: Consumidor.POWER_SA
    // Generated from the component: Consumidor.POWER_SB
    // Generated from the component: Consumidor.POWER_SC
    // Generated from the component: Consumidor.VLL_RMS
    // Generated from the component: Consumidor.VLn_RMS
    // Generated from the component: Consumidor.extra_output_bus
    _consumidor_extra_output_bus__out[0] = _consumidor_zero__out;
    _consumidor_extra_output_bus__out[1] = _consumidor_zero__out;
    _consumidor_extra_output_bus__out[2] = _consumidor_zero__out;
    _consumidor_extra_output_bus__out[3] = _consumidor_zero__out;
    _consumidor_extra_output_bus__out[4] = _consumidor_zero__out;
    _consumidor_extra_output_bus__out[5] = _consumidor_zero__out;
    _consumidor_extra_output_bus__out[6] = _consumidor_zero__out;
    _consumidor_extra_output_bus__out[7] = _consumidor_zero__out;
    _consumidor_extra_output_bus__out[8] = _consumidor_zero__out;
    _consumidor_extra_output_bus__out[9] = _consumidor_zero__out;
    _consumidor_extra_output_bus__out[10] = _consumidor_zero__out;
    _consumidor_extra_output_bus__out[11] = _consumidor_zero__out;
    // Generated from the component: FaltaConsumidor.Control state machine
    _faltaconsumidor_control_state_machine__in = _faltaconsumidor_fault_select__out;
    switch (_faltaconsumidor_control_state_machine__in) {
    case 0:
        _faltaconsumidor_control_state_machine__Ca = 0;
        _faltaconsumidor_control_state_machine__Cb = 0;
        _faltaconsumidor_control_state_machine__Cc = 0;
        _faltaconsumidor_control_state_machine__Cn = 0;
        break ;
    case 1:
        _faltaconsumidor_control_state_machine__Ca = 0;
        _faltaconsumidor_control_state_machine__Cb = 0;
        _faltaconsumidor_control_state_machine__Cc = 1;
        _faltaconsumidor_control_state_machine__Cn = 1;
        break ;
    case 2:
        _faltaconsumidor_control_state_machine__Ca = 0;
        _faltaconsumidor_control_state_machine__Cb = 1;
        _faltaconsumidor_control_state_machine__Cc = 0;
        _faltaconsumidor_control_state_machine__Cn = 1;
        break ;
    case 3:
        _faltaconsumidor_control_state_machine__Ca = 0;
        _faltaconsumidor_control_state_machine__Cb = 1;
        _faltaconsumidor_control_state_machine__Cc = 1;
        _faltaconsumidor_control_state_machine__Cn = 0;
        break ;
    case 4:
        _faltaconsumidor_control_state_machine__Ca = 0;
        _faltaconsumidor_control_state_machine__Cb = 1;
        _faltaconsumidor_control_state_machine__Cc = 1;
        _faltaconsumidor_control_state_machine__Cn = 1;
        break ;
    case 5:
        _faltaconsumidor_control_state_machine__Ca = 1;
        _faltaconsumidor_control_state_machine__Cb = 0;
        _faltaconsumidor_control_state_machine__Cc = 0;
        _faltaconsumidor_control_state_machine__Cn = 1;
        break ;
    case 6:
        _faltaconsumidor_control_state_machine__Ca = 1;
        _faltaconsumidor_control_state_machine__Cb = 0;
        _faltaconsumidor_control_state_machine__Cc = 1;
        _faltaconsumidor_control_state_machine__Cn = 0;
        break ;
    case 7:
        _faltaconsumidor_control_state_machine__Ca = 1;
        _faltaconsumidor_control_state_machine__Cb = 0;
        _faltaconsumidor_control_state_machine__Cc = 1;
        _faltaconsumidor_control_state_machine__Cn = 1;
        break ;
    case 8:
        _faltaconsumidor_control_state_machine__Ca = 1;
        _faltaconsumidor_control_state_machine__Cb = 1;
        _faltaconsumidor_control_state_machine__Cc = 0;
        _faltaconsumidor_control_state_machine__Cn = 0;
        break ;
    case 9:
        _faltaconsumidor_control_state_machine__Ca = 1;
        _faltaconsumidor_control_state_machine__Cb = 1;
        _faltaconsumidor_control_state_machine__Cc = 0;
        _faltaconsumidor_control_state_machine__Cn = 1;
        break ;
    case 10:
        _faltaconsumidor_control_state_machine__Ca = 1;
        _faltaconsumidor_control_state_machine__Cb = 1;
        _faltaconsumidor_control_state_machine__Cc = 1;
        _faltaconsumidor_control_state_machine__Cn = 0;
        break ;
    case 11:
        _faltaconsumidor_control_state_machine__Ca = 1;
        _faltaconsumidor_control_state_machine__Cb = 1;
        _faltaconsumidor_control_state_machine__Cc = 1;
        _faltaconsumidor_control_state_machine__Cn = 1;
        break ;
    default :
        _faltaconsumidor_control_state_machine__Ca = 0;
        _faltaconsumidor_control_state_machine__Cb = 0;
        _faltaconsumidor_control_state_machine__Cc = 0;
        _faltaconsumidor_control_state_machine__Cn = 0;
    }
    // Generated from the component: FuseLink1.Fuse_Link_A1
    XIo_OutFloat(0x55000158, (float)_fuselink1_fuselinka_cpu_trans_output__out);
    // Generated from the component: FuseLink1.S1_feed
    XIo_OutInt32(0x5500015c, _fuselink1_s1_ctc_wrapper__feedback_out);
    // Generated from the component: FuseLink2.Fuse_Link_A1
    XIo_OutFloat(0x55000160, (float)_fuselink2_fuselinka_cpu_trans_output__out);
    // Generated from the component: FuseLink2.S1_feed
    XIo_OutInt32(0x55000164, _fuselink2_s1_ctc_wrapper__feedback_out);
    // Generated from the component: FuseLink3.Fuse_Link_A1
    XIo_OutFloat(0x55000168, (float)_fuselink3_fuselinka_cpu_trans_output__out);
    // Generated from the component: FuseLink3.S1_feed
    XIo_OutInt32(0x5500016c, _fuselink3_s1_ctc_wrapper__feedback_out);
    // Generated from the component: FuseLink4.Fuse_Link_A1
    XIo_OutFloat(0x55000170, (float)_fuselink4_fuselinka_cpu_trans_output__out);
    // Generated from the component: FuseLink4.S1_feed
    XIo_OutInt32(0x55000174, _fuselink4_s1_ctc_wrapper__feedback_out);
    // Generated from the component: FuseLink5.Fuse_Link_A1
    XIo_OutFloat(0x55000178, (float)_fuselink5_fuselinka_cpu_trans_output__out);
    // Generated from the component: FuseLink5.S1_feed
    XIo_OutInt32(0x5500017c, _fuselink5_s1_ctc_wrapper__feedback_out);
    // Generated from the component: FuseLink6.Fuse_Link_A1
    XIo_OutFloat(0x55000180, (float)_fuselink6_fuselinka_cpu_trans_output__out);
    // Generated from the component: FuseLink6.S1_feed
    XIo_OutInt32(0x55000184, _fuselink6_s1_ctc_wrapper__feedback_out);
    // Generated from the component: FuseLink7.Fuse_Link_A1
    XIo_OutFloat(0x55000188, (float)_fuselink7_fuselinka_cpu_trans_output__out);
    // Generated from the component: FuseLink7.S1_feed
    XIo_OutInt32(0x5500018c, _fuselink7_s1_ctc_wrapper__feedback_out);
    // Generated from the component: Rele.PLL.sin
    _rele_pll_sin__out = sin(_rele_pll_unit_delay1__out);
    // Generated from the component: Rele.TRMwt
    // Generated from the component: Rele.Freq
    HIL_OutAO(0x4012, (float)_rele_pll_to_hz__out);
    // Generated from the component: Rele.measSM.mode_and_dFract
    _rele_meassm_mode_and_dfract__Freq = _rele_pll_to_hz__out;
    _rele_meassm_mode_and_dfract__freqAbs = fabs(_rele_meassm_mode_and_dfract__Freq);
    if (_rele_meassm_mode_and_dfract__reset == 1) {
        _rele_meassm_mode_and_dfract__mode = 1;
        _rele_meassm_mode_and_dfract__Tfract = 0.0;
        _rele_meassm_mode_and_dfract__cycle_counter = 0;
        _rele_meassm_mode_and_dfract__reset = 0;
    }
    else if (_rele_meassm_mode_and_dfract__freqAbs < 1.0) {
        _rele_meassm_mode_and_dfract__mode = 2;
        if (_rele_meassm_mode_and_dfract__Tfract > 0.0) {
            _rele_meassm_mode_and_dfract__reset = 1;
        }
    }
    else if ((_rele_meassm_mode_and_dfract__Tfract < 1.0) && (_rele_meassm_mode_and_dfract__freqAbs < _rele_meassm_mode_and_dfract__fMax)) {
        _rele_meassm_mode_and_dfract__dFract = 0.001 * _rele_meassm_mode_and_dfract__freqAbs;
        _rele_meassm_mode_and_dfract__Tfract += _rele_meassm_mode_and_dfract__dFract;
        if (_rele_meassm_mode_and_dfract__Tfract >= 1.0) {
            _rele_meassm_mode_and_dfract__cycle_counter += 1;
            if (_rele_meassm_mode_and_dfract__cycle_counter >= 1) {
                _rele_meassm_mode_and_dfract__dFract = 1.0 - (_rele_meassm_mode_and_dfract__Tfract - _rele_meassm_mode_and_dfract__dFract);
            }
            else {
                _rele_meassm_mode_and_dfract__Tfract -= 1.0;
            }
        }
        _rele_meassm_mode_and_dfract__dFract /= 1;
        _rele_meassm_mode_and_dfract__mode = 3;
        if (_rele_meassm_mode_and_dfract__Tfract < 0.25) {
            _rele_meassm_mode_and_dfract__submode = 1;
        }
        else if (_rele_meassm_mode_and_dfract__Tfract < 0.5) {
            _rele_meassm_mode_and_dfract__submode = 2;
        }
        else if (_rele_meassm_mode_and_dfract__Tfract < 0.75) {
            _rele_meassm_mode_and_dfract__submode = 3;
        }
        else {
            _rele_meassm_mode_and_dfract__submode = 4;
        }
    }
    else if (_rele_meassm_mode_and_dfract__Tfract >= 1.0) {
        _rele_meassm_mode_and_dfract__mode = 4;
        _rele_meassm_mode_and_dfract__reset = 1;
    }
    else {
        _rele_meassm_mode_and_dfract__mode = 5;
        _rele_meassm_mode_and_dfract__reset = 1;
    }
    // Generated from the component: Rele.PLL.abc to dq.abc to alpha beta
    _rele_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _rele_van_va1__out - _rele_vbn_va1__out - _rele_vcn_va1__out) * 0.3333333333333333;
    _rele_pll_abc_to_dq_abc_to_alpha_beta__beta = (_rele_vbn_va1__out - _rele_vcn_va1__out) * 0.5773502691896258;
    _rele_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_rele_van_va1__out + _rele_vbn_va1__out + _rele_vcn_va1__out) * 0.3333333333333333;
    // Generated from the component: Rele.POWER_P
    // Generated from the component: Rele.POWER_PA
    // Generated from the component: Rele.POWER_PB
    // Generated from the component: Rele.POWER_PC
    // Generated from the component: Rele.POWER_PF
    // Generated from the component: Rele.POWER_PFA
    // Generated from the component: Rele.POWER_PFB
    // Generated from the component: Rele.POWER_PFC
    // Generated from the component: Rele.POWER_Q
    // Generated from the component: Rele.POWER_QA
    // Generated from the component: Rele.POWER_QB
    // Generated from the component: Rele.POWER_QC
    // Generated from the component: Rele.POWER_S
    // Generated from the component: Rele.POWER_SA
    // Generated from the component: Rele.POWER_SB
    // Generated from the component: Rele.POWER_SC
    // Generated from the component: Rele.VLL_RMS
    // Generated from the component: Rele.VLn_RMS
    // Generated from the component: Rele.extra_output_bus
    _rele_extra_output_bus__out[0] = _rele_zero__out;
    _rele_extra_output_bus__out[1] = _rele_zero__out;
    _rele_extra_output_bus__out[2] = _rele_zero__out;
    _rele_extra_output_bus__out[3] = _rele_zero__out;
    _rele_extra_output_bus__out[4] = _rele_zero__out;
    _rele_extra_output_bus__out[5] = _rele_zero__out;
    _rele_extra_output_bus__out[6] = _rele_zero__out;
    _rele_extra_output_bus__out[7] = _rele_zero__out;
    _rele_extra_output_bus__out[8] = _rele_zero__out;
    _rele_extra_output_bus__out[9] = _rele_zero__out;
    _rele_extra_output_bus__out[10] = _rele_zero__out;
    _rele_extra_output_bus__out[11] = _rele_zero__out;
    // Generated from the component: Consumidor.TRMsin
    // Generated from the component: Consumidor.I_RMS_calc.RMS
    _consumidor_i_rms_calc_rms__IN1 = _consumidor_ia_ia1__out;
    _consumidor_i_rms_calc_rms__IN2 = _consumidor_ib_ia1__out;
    _consumidor_i_rms_calc_rms__IN3 = _consumidor_ic_ia1__out;
    _consumidor_i_rms_calc_rms__dFract = _consumidor_meassm_mode_and_dfract__dFract;
    _consumidor_i_rms_calc_rms__mode = _consumidor_meassm_mode_and_dfract__mode;
    switch (_consumidor_i_rms_calc_rms__mode) {
    case 1:
        _consumidor_i_rms_calc_rms__rmsSum1 = 0.0;
        _consumidor_i_rms_calc_rms__rmsSum2 = 0.0;
        _consumidor_i_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _consumidor_i_rms_calc_rms__RMS1 = _consumidor_i_rms_calc_rms__IN1;
        _consumidor_i_rms_calc_rms__RMS2 = _consumidor_i_rms_calc_rms__IN2;
        _consumidor_i_rms_calc_rms__RMS3 = _consumidor_i_rms_calc_rms__IN3;
        break ;
    case 3:
        _consumidor_i_rms_calc_rms__rmsSum1 += _consumidor_i_rms_calc_rms__dFract * (_consumidor_i_rms_calc_rms__IN1 * _consumidor_i_rms_calc_rms__IN1);
        _consumidor_i_rms_calc_rms__rmsSum2 += _consumidor_i_rms_calc_rms__dFract * (_consumidor_i_rms_calc_rms__IN2 * _consumidor_i_rms_calc_rms__IN2);
        _consumidor_i_rms_calc_rms__rmsSum3 += _consumidor_i_rms_calc_rms__dFract * (_consumidor_i_rms_calc_rms__IN3 * _consumidor_i_rms_calc_rms__IN3);
        break ;
    case 4:
        _consumidor_i_rms_calc_rms__RMS1 = sqrt(_consumidor_i_rms_calc_rms__rmsSum1);
        _consumidor_i_rms_calc_rms__RMS2 = sqrt(_consumidor_i_rms_calc_rms__rmsSum2);
        _consumidor_i_rms_calc_rms__RMS3 = sqrt(_consumidor_i_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _consumidor_i_rms_calc_rms__RMS1 = fabs(_consumidor_i_rms_calc_rms__IN1);
        _consumidor_i_rms_calc_rms__RMS2 = fabs(_consumidor_i_rms_calc_rms__IN2);
        _consumidor_i_rms_calc_rms__RMS3 = fabs(_consumidor_i_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Consumidor.VLL_RMS_calc.RMS
    _consumidor_vll_rms_calc_rms__IN1 = _consumidor_vab_va1__out;
    _consumidor_vll_rms_calc_rms__IN2 = _consumidor_vbc_va1__out;
    _consumidor_vll_rms_calc_rms__IN3 = _consumidor_vca_va1__out;
    _consumidor_vll_rms_calc_rms__dFract = _consumidor_meassm_mode_and_dfract__dFract;
    _consumidor_vll_rms_calc_rms__mode = _consumidor_meassm_mode_and_dfract__mode;
    switch (_consumidor_vll_rms_calc_rms__mode) {
    case 1:
        _consumidor_vll_rms_calc_rms__rmsSum1 = 0.0;
        _consumidor_vll_rms_calc_rms__rmsSum2 = 0.0;
        _consumidor_vll_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _consumidor_vll_rms_calc_rms__RMS1 = _consumidor_vll_rms_calc_rms__IN1;
        _consumidor_vll_rms_calc_rms__RMS2 = _consumidor_vll_rms_calc_rms__IN2;
        _consumidor_vll_rms_calc_rms__RMS3 = _consumidor_vll_rms_calc_rms__IN3;
        break ;
    case 3:
        _consumidor_vll_rms_calc_rms__rmsSum1 += _consumidor_vll_rms_calc_rms__dFract * (_consumidor_vll_rms_calc_rms__IN1 * _consumidor_vll_rms_calc_rms__IN1);
        _consumidor_vll_rms_calc_rms__rmsSum2 += _consumidor_vll_rms_calc_rms__dFract * (_consumidor_vll_rms_calc_rms__IN2 * _consumidor_vll_rms_calc_rms__IN2);
        _consumidor_vll_rms_calc_rms__rmsSum3 += _consumidor_vll_rms_calc_rms__dFract * (_consumidor_vll_rms_calc_rms__IN3 * _consumidor_vll_rms_calc_rms__IN3);
        break ;
    case 4:
        _consumidor_vll_rms_calc_rms__RMS1 = sqrt(_consumidor_vll_rms_calc_rms__rmsSum1);
        _consumidor_vll_rms_calc_rms__RMS2 = sqrt(_consumidor_vll_rms_calc_rms__rmsSum2);
        _consumidor_vll_rms_calc_rms__RMS3 = sqrt(_consumidor_vll_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _consumidor_vll_rms_calc_rms__RMS1 = fabs(_consumidor_vll_rms_calc_rms__IN1);
        _consumidor_vll_rms_calc_rms__RMS2 = fabs(_consumidor_vll_rms_calc_rms__IN2);
        _consumidor_vll_rms_calc_rms__RMS3 = fabs(_consumidor_vll_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Consumidor.VLn_RMS_calc.RMS
    _consumidor_vln_rms_calc_rms__IN1 = _consumidor_van_va1__out;
    _consumidor_vln_rms_calc_rms__IN2 = _consumidor_vbn_va1__out;
    _consumidor_vln_rms_calc_rms__IN3 = _consumidor_vcn_va1__out;
    _consumidor_vln_rms_calc_rms__dFract = _consumidor_meassm_mode_and_dfract__dFract;
    _consumidor_vln_rms_calc_rms__mode = _consumidor_meassm_mode_and_dfract__mode;
    switch (_consumidor_vln_rms_calc_rms__mode) {
    case 1:
        _consumidor_vln_rms_calc_rms__rmsSum1 = 0.0;
        _consumidor_vln_rms_calc_rms__rmsSum2 = 0.0;
        _consumidor_vln_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _consumidor_vln_rms_calc_rms__RMS1 = _consumidor_vln_rms_calc_rms__IN1;
        _consumidor_vln_rms_calc_rms__RMS2 = _consumidor_vln_rms_calc_rms__IN2;
        _consumidor_vln_rms_calc_rms__RMS3 = _consumidor_vln_rms_calc_rms__IN3;
        break ;
    case 3:
        _consumidor_vln_rms_calc_rms__rmsSum1 += _consumidor_vln_rms_calc_rms__dFract * (_consumidor_vln_rms_calc_rms__IN1 * _consumidor_vln_rms_calc_rms__IN1);
        _consumidor_vln_rms_calc_rms__rmsSum2 += _consumidor_vln_rms_calc_rms__dFract * (_consumidor_vln_rms_calc_rms__IN2 * _consumidor_vln_rms_calc_rms__IN2);
        _consumidor_vln_rms_calc_rms__rmsSum3 += _consumidor_vln_rms_calc_rms__dFract * (_consumidor_vln_rms_calc_rms__IN3 * _consumidor_vln_rms_calc_rms__IN3);
        break ;
    case 4:
        _consumidor_vln_rms_calc_rms__RMS1 = sqrt(_consumidor_vln_rms_calc_rms__rmsSum1);
        _consumidor_vln_rms_calc_rms__RMS2 = sqrt(_consumidor_vln_rms_calc_rms__rmsSum2);
        _consumidor_vln_rms_calc_rms__RMS3 = sqrt(_consumidor_vln_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _consumidor_vln_rms_calc_rms__RMS1 = fabs(_consumidor_vln_rms_calc_rms__IN1);
        _consumidor_vln_rms_calc_rms__RMS2 = fabs(_consumidor_vln_rms_calc_rms__IN2);
        _consumidor_vln_rms_calc_rms__RMS3 = fabs(_consumidor_vln_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Consumidor.termSubMode
    // Generated from the component: Consumidor.PLL.abc to dq.alpha beta to dq
    _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_consumidor_pll_unit_delay1__out);
    _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_consumidor_pll_unit_delay1__out);
    _consumidor_pll_abc_to_dq_alpha_beta_to_dq__d = _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k2 * _consumidor_pll_abc_to_dq_abc_to_alpha_beta__alpha - _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k1 * _consumidor_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _consumidor_pll_abc_to_dq_alpha_beta_to_dq__q = _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k1 * _consumidor_pll_abc_to_dq_abc_to_alpha_beta__alpha + _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k2 * _consumidor_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Consumidor.TRMz
    // Generated from the component: Consumidor.extra_out
    // Generated from the component: FaltaConsumidor.S1.CTC_Wrapper
    if (_faltaconsumidor_control_state_machine__Ca == 0x0) {
        HIL_OutInt32(0x8640480, 0x0);
    }
    else {
        HIL_OutInt32(0x8640480, 0x1);
    }
    // Generated from the component: FaltaConsumidor.S2.CTC_Wrapper
    if (_faltaconsumidor_control_state_machine__Cn == 0x0) {
        HIL_OutInt32(0x8640481, 0x0);
    }
    else {
        HIL_OutInt32(0x8640481, 0x1);
    }
    // Generated from the component: FaltaConsumidor.S3.CTC_Wrapper
    if (_faltaconsumidor_control_state_machine__Cb == 0x0) {
        HIL_OutInt32(0x8640482, 0x0);
    }
    else {
        HIL_OutInt32(0x8640482, 0x1);
    }
    // Generated from the component: FaltaConsumidor.S4.CTC_Wrapper
    if (_faltaconsumidor_control_state_machine__Cc == 0x0) {
        HIL_OutInt32(0x8640483, 0x0);
    }
    else {
        HIL_OutInt32(0x8640483, 0x1);
    }
    // Generated from the component: Rele.TRMsin
    // Generated from the component: Rele.I_RMS_calc.RMS
    _rele_i_rms_calc_rms__IN1 = _rele_ia_ia1__out;
    _rele_i_rms_calc_rms__IN2 = _rele_ib_ia1__out;
    _rele_i_rms_calc_rms__IN3 = _rele_ic_ia1__out;
    _rele_i_rms_calc_rms__dFract = _rele_meassm_mode_and_dfract__dFract;
    _rele_i_rms_calc_rms__mode = _rele_meassm_mode_and_dfract__mode;
    switch (_rele_i_rms_calc_rms__mode) {
    case 1:
        _rele_i_rms_calc_rms__rmsSum1 = 0.0;
        _rele_i_rms_calc_rms__rmsSum2 = 0.0;
        _rele_i_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _rele_i_rms_calc_rms__RMS1 = _rele_i_rms_calc_rms__IN1;
        _rele_i_rms_calc_rms__RMS2 = _rele_i_rms_calc_rms__IN2;
        _rele_i_rms_calc_rms__RMS3 = _rele_i_rms_calc_rms__IN3;
        break ;
    case 3:
        _rele_i_rms_calc_rms__rmsSum1 += _rele_i_rms_calc_rms__dFract * (_rele_i_rms_calc_rms__IN1 * _rele_i_rms_calc_rms__IN1);
        _rele_i_rms_calc_rms__rmsSum2 += _rele_i_rms_calc_rms__dFract * (_rele_i_rms_calc_rms__IN2 * _rele_i_rms_calc_rms__IN2);
        _rele_i_rms_calc_rms__rmsSum3 += _rele_i_rms_calc_rms__dFract * (_rele_i_rms_calc_rms__IN3 * _rele_i_rms_calc_rms__IN3);
        break ;
    case 4:
        _rele_i_rms_calc_rms__RMS1 = sqrt(_rele_i_rms_calc_rms__rmsSum1);
        _rele_i_rms_calc_rms__RMS2 = sqrt(_rele_i_rms_calc_rms__rmsSum2);
        _rele_i_rms_calc_rms__RMS3 = sqrt(_rele_i_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _rele_i_rms_calc_rms__RMS1 = fabs(_rele_i_rms_calc_rms__IN1);
        _rele_i_rms_calc_rms__RMS2 = fabs(_rele_i_rms_calc_rms__IN2);
        _rele_i_rms_calc_rms__RMS3 = fabs(_rele_i_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Rele.VLL_RMS_calc.RMS
    _rele_vll_rms_calc_rms__IN1 = _rele_vab_va1__out;
    _rele_vll_rms_calc_rms__IN2 = _rele_vbc_va1__out;
    _rele_vll_rms_calc_rms__IN3 = _rele_vca_va1__out;
    _rele_vll_rms_calc_rms__dFract = _rele_meassm_mode_and_dfract__dFract;
    _rele_vll_rms_calc_rms__mode = _rele_meassm_mode_and_dfract__mode;
    switch (_rele_vll_rms_calc_rms__mode) {
    case 1:
        _rele_vll_rms_calc_rms__rmsSum1 = 0.0;
        _rele_vll_rms_calc_rms__rmsSum2 = 0.0;
        _rele_vll_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _rele_vll_rms_calc_rms__RMS1 = _rele_vll_rms_calc_rms__IN1;
        _rele_vll_rms_calc_rms__RMS2 = _rele_vll_rms_calc_rms__IN2;
        _rele_vll_rms_calc_rms__RMS3 = _rele_vll_rms_calc_rms__IN3;
        break ;
    case 3:
        _rele_vll_rms_calc_rms__rmsSum1 += _rele_vll_rms_calc_rms__dFract * (_rele_vll_rms_calc_rms__IN1 * _rele_vll_rms_calc_rms__IN1);
        _rele_vll_rms_calc_rms__rmsSum2 += _rele_vll_rms_calc_rms__dFract * (_rele_vll_rms_calc_rms__IN2 * _rele_vll_rms_calc_rms__IN2);
        _rele_vll_rms_calc_rms__rmsSum3 += _rele_vll_rms_calc_rms__dFract * (_rele_vll_rms_calc_rms__IN3 * _rele_vll_rms_calc_rms__IN3);
        break ;
    case 4:
        _rele_vll_rms_calc_rms__RMS1 = sqrt(_rele_vll_rms_calc_rms__rmsSum1);
        _rele_vll_rms_calc_rms__RMS2 = sqrt(_rele_vll_rms_calc_rms__rmsSum2);
        _rele_vll_rms_calc_rms__RMS3 = sqrt(_rele_vll_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _rele_vll_rms_calc_rms__RMS1 = fabs(_rele_vll_rms_calc_rms__IN1);
        _rele_vll_rms_calc_rms__RMS2 = fabs(_rele_vll_rms_calc_rms__IN2);
        _rele_vll_rms_calc_rms__RMS3 = fabs(_rele_vll_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Rele.VLn_RMS_calc.RMS
    _rele_vln_rms_calc_rms__IN1 = _rele_van_va1__out;
    _rele_vln_rms_calc_rms__IN2 = _rele_vbn_va1__out;
    _rele_vln_rms_calc_rms__IN3 = _rele_vcn_va1__out;
    _rele_vln_rms_calc_rms__dFract = _rele_meassm_mode_and_dfract__dFract;
    _rele_vln_rms_calc_rms__mode = _rele_meassm_mode_and_dfract__mode;
    switch (_rele_vln_rms_calc_rms__mode) {
    case 1:
        _rele_vln_rms_calc_rms__rmsSum1 = 0.0;
        _rele_vln_rms_calc_rms__rmsSum2 = 0.0;
        _rele_vln_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _rele_vln_rms_calc_rms__RMS1 = _rele_vln_rms_calc_rms__IN1;
        _rele_vln_rms_calc_rms__RMS2 = _rele_vln_rms_calc_rms__IN2;
        _rele_vln_rms_calc_rms__RMS3 = _rele_vln_rms_calc_rms__IN3;
        break ;
    case 3:
        _rele_vln_rms_calc_rms__rmsSum1 += _rele_vln_rms_calc_rms__dFract * (_rele_vln_rms_calc_rms__IN1 * _rele_vln_rms_calc_rms__IN1);
        _rele_vln_rms_calc_rms__rmsSum2 += _rele_vln_rms_calc_rms__dFract * (_rele_vln_rms_calc_rms__IN2 * _rele_vln_rms_calc_rms__IN2);
        _rele_vln_rms_calc_rms__rmsSum3 += _rele_vln_rms_calc_rms__dFract * (_rele_vln_rms_calc_rms__IN3 * _rele_vln_rms_calc_rms__IN3);
        break ;
    case 4:
        _rele_vln_rms_calc_rms__RMS1 = sqrt(_rele_vln_rms_calc_rms__rmsSum1);
        _rele_vln_rms_calc_rms__RMS2 = sqrt(_rele_vln_rms_calc_rms__rmsSum2);
        _rele_vln_rms_calc_rms__RMS3 = sqrt(_rele_vln_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _rele_vln_rms_calc_rms__RMS1 = fabs(_rele_vln_rms_calc_rms__IN1);
        _rele_vln_rms_calc_rms__RMS2 = fabs(_rele_vln_rms_calc_rms__IN2);
        _rele_vln_rms_calc_rms__RMS3 = fabs(_rele_vln_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Rele.termSubMode
    // Generated from the component: Rele.PLL.abc to dq.alpha beta to dq
    _rele_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_rele_pll_unit_delay1__out);
    _rele_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_rele_pll_unit_delay1__out);
    _rele_pll_abc_to_dq_alpha_beta_to_dq__d = _rele_pll_abc_to_dq_alpha_beta_to_dq__k2 * _rele_pll_abc_to_dq_abc_to_alpha_beta__alpha - _rele_pll_abc_to_dq_alpha_beta_to_dq__k1 * _rele_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _rele_pll_abc_to_dq_alpha_beta_to_dq__q = _rele_pll_abc_to_dq_alpha_beta_to_dq__k1 * _rele_pll_abc_to_dq_abc_to_alpha_beta__alpha + _rele_pll_abc_to_dq_alpha_beta_to_dq__k2 * _rele_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Rele.TRMz
    // Generated from the component: Rele.extra_out
    // Generated from the component: Consumidor.IA_RMS
    HIL_OutAO(0x4008, (float)_consumidor_i_rms_calc_rms__RMS1);
    // Generated from the component: Consumidor.IB_RMS
    HIL_OutAO(0x4009, (float)_consumidor_i_rms_calc_rms__RMS2);
    // Generated from the component: Consumidor.IC_RMS
    HIL_OutAO(0x400a, (float)_consumidor_i_rms_calc_rms__RMS3);
    // Generated from the component: Consumidor.sumI_RMS
    _consumidor_sumi_rms__out = _consumidor_i_rms_calc_rms__RMS1 + _consumidor_i_rms_calc_rms__RMS2 + _consumidor_i_rms_calc_rms__RMS3;
    // Generated from the component: Consumidor.VAB_RMS
    HIL_OutAO(0x400c, (float)_consumidor_vll_rms_calc_rms__RMS1);
    // Generated from the component: Consumidor.VBC_RMS
    HIL_OutAO(0x400e, (float)_consumidor_vll_rms_calc_rms__RMS2);
    // Generated from the component: Consumidor.VCA_RMS
    HIL_OutAO(0x4010, (float)_consumidor_vll_rms_calc_rms__RMS3);
    // Generated from the component: Consumidor.VAn_RMS
    HIL_OutAO(0x400d, (float)_consumidor_vln_rms_calc_rms__RMS1);
    // Generated from the component: Consumidor.VBn_RMS
    HIL_OutAO(0x400f, (float)_consumidor_vln_rms_calc_rms__RMS2);
    // Generated from the component: Consumidor.VCn_RMS
    HIL_OutAO(0x4011, (float)_consumidor_vln_rms_calc_rms__RMS3);
    // Generated from the component: Consumidor.PLL.abc to dq.LPF_d
    _consumidor_pll_abc_to_dq_lpf_d__previous_filtered_value = _consumidor_pll_abc_to_dq_lpf_d__filtered_value;
    _consumidor_pll_abc_to_dq_lpf_d__filtered_value = _consumidor_pll_abc_to_dq_lpf_d__previous_in * (1.0 * 62.83185307 * 0.001) + _consumidor_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.001 );
    _consumidor_pll_abc_to_dq_lpf_d__out = _consumidor_pll_abc_to_dq_lpf_d__filtered_value;
    _consumidor_pll_abc_to_dq_lpf_d__previous_in = _consumidor_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Consumidor.PLL.abc to dq.LPF_q
    _consumidor_pll_abc_to_dq_lpf_q__previous_filtered_value = _consumidor_pll_abc_to_dq_lpf_q__filtered_value;
    _consumidor_pll_abc_to_dq_lpf_q__filtered_value = _consumidor_pll_abc_to_dq_lpf_q__previous_in * (1.0 * 62.83185307 * 0.001) + _consumidor_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.001 );
    _consumidor_pll_abc_to_dq_lpf_q__out = _consumidor_pll_abc_to_dq_lpf_q__filtered_value;
    _consumidor_pll_abc_to_dq_lpf_q__previous_in = _consumidor_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Rele.IA_RMS
    HIL_OutAO(0x4013, (float)_rele_i_rms_calc_rms__RMS1);
    // Generated from the component: Rele.IB_RMS
    HIL_OutAO(0x4014, (float)_rele_i_rms_calc_rms__RMS2);
    // Generated from the component: Rele.IC_RMS
    HIL_OutAO(0x4015, (float)_rele_i_rms_calc_rms__RMS3);
    // Generated from the component: Rele.sumI_RMS
    _rele_sumi_rms__out = _rele_i_rms_calc_rms__RMS1 + _rele_i_rms_calc_rms__RMS2 + _rele_i_rms_calc_rms__RMS3;
    // Generated from the component: Rele.VAB_RMS
    HIL_OutAO(0x4017, (float)_rele_vll_rms_calc_rms__RMS1);
    // Generated from the component: Rele.VBC_RMS
    HIL_OutAO(0x4019, (float)_rele_vll_rms_calc_rms__RMS2);
    // Generated from the component: Rele.VCA_RMS
    HIL_OutAO(0x401b, (float)_rele_vll_rms_calc_rms__RMS3);
    // Generated from the component: Rele.VAn_RMS
    HIL_OutAO(0x4018, (float)_rele_vln_rms_calc_rms__RMS1);
    // Generated from the component: Rele.VBn_RMS
    HIL_OutAO(0x401a, (float)_rele_vln_rms_calc_rms__RMS2);
    // Generated from the component: Rele.VCn_RMS
    HIL_OutAO(0x401c, (float)_rele_vln_rms_calc_rms__RMS3);
    // Generated from the component: Rele.PLL.abc to dq.LPF_d
    _rele_pll_abc_to_dq_lpf_d__previous_filtered_value = _rele_pll_abc_to_dq_lpf_d__filtered_value;
    _rele_pll_abc_to_dq_lpf_d__filtered_value = _rele_pll_abc_to_dq_lpf_d__previous_in * (1.0 * 62.83185307 * 0.001) + _rele_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.001 );
    _rele_pll_abc_to_dq_lpf_d__out = _rele_pll_abc_to_dq_lpf_d__filtered_value;
    _rele_pll_abc_to_dq_lpf_d__previous_in = _rele_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Rele.PLL.abc to dq.LPF_q
    _rele_pll_abc_to_dq_lpf_q__previous_filtered_value = _rele_pll_abc_to_dq_lpf_q__filtered_value;
    _rele_pll_abc_to_dq_lpf_q__filtered_value = _rele_pll_abc_to_dq_lpf_q__previous_in * (1.0 * 62.83185307 * 0.001) + _rele_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.001 );
    _rele_pll_abc_to_dq_lpf_q__out = _rele_pll_abc_to_dq_lpf_q__filtered_value;
    _rele_pll_abc_to_dq_lpf_q__previous_in = _rele_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Consumidor.gainI_RMS
    _consumidor_gaini_rms__out = 0.3333333333333333 * _consumidor_sumi_rms__out;
    // Generated from the component: Consumidor.TRMd
    // Generated from the component: Consumidor.PLL.normalize
    _consumidor_pll_normalize__in1 = _consumidor_pll_abc_to_dq_lpf_d__out;
    _consumidor_pll_normalize__in2 = _consumidor_pll_abc_to_dq_lpf_q__out;
    _consumidor_pll_normalize__pk = (powf(_consumidor_pll_normalize__in1, 2.0) + powf(_consumidor_pll_normalize__in2, 2.0));
    _consumidor_pll_normalize__pk = sqrt(_consumidor_pll_normalize__pk);
    if (_consumidor_pll_normalize__pk < 0.1) {
        _consumidor_pll_normalize__in2_pu = _consumidor_pll_normalize__in2 / 0.1;
    }
    else {
        _consumidor_pll_normalize__in2_pu = _consumidor_pll_normalize__in2 / _consumidor_pll_normalize__pk;
    }
    // Generated from the component: Consumidor.TRMq
    // Generated from the component: Rele.gainI_RMS
    _rele_gaini_rms__out = 0.3333333333333333 * _rele_sumi_rms__out;
    // Generated from the component: Rele.TRMd
    // Generated from the component: Rele.PLL.normalize
    _rele_pll_normalize__in1 = _rele_pll_abc_to_dq_lpf_d__out;
    _rele_pll_normalize__in2 = _rele_pll_abc_to_dq_lpf_q__out;
    _rele_pll_normalize__pk = (powf(_rele_pll_normalize__in1, 2.0) + powf(_rele_pll_normalize__in2, 2.0));
    _rele_pll_normalize__pk = sqrt(_rele_pll_normalize__pk);
    if (_rele_pll_normalize__pk < 0.1) {
        _rele_pll_normalize__in2_pu = _rele_pll_normalize__in2 / 0.1;
    }
    else {
        _rele_pll_normalize__in2_pu = _rele_pll_normalize__in2 / _rele_pll_normalize__pk;
    }
    // Generated from the component: Rele.TRMq
    // Generated from the component: Consumidor.I_RMS
    HIL_OutAO(0x400b, (float)_consumidor_gaini_rms__out);
    // Generated from the component: Consumidor.output_bus
    _consumidor_output_bus__out[0] = _consumidor_van_va1__out;
    _consumidor_output_bus__out[1] = _consumidor_vbn_va1__out;
    _consumidor_output_bus__out[2] = _consumidor_vcn_va1__out;
    _consumidor_output_bus__out[3] = _consumidor_vab_va1__out;
    _consumidor_output_bus__out[4] = _consumidor_vbc_va1__out;
    _consumidor_output_bus__out[5] = _consumidor_vca_va1__out;
    _consumidor_output_bus__out[6] = _consumidor_ia_ia1__out;
    _consumidor_output_bus__out[7] = _consumidor_ib_ia1__out;
    _consumidor_output_bus__out[8] = _consumidor_ic_ia1__out;
    _consumidor_output_bus__out[9] = _consumidor_pll_to_hz__out;
    _consumidor_output_bus__out[10] = _consumidor_vln_rms_calc_rms__RMS1;
    _consumidor_output_bus__out[11] = _consumidor_vln_rms_calc_rms__RMS2;
    _consumidor_output_bus__out[12] = _consumidor_vln_rms_calc_rms__RMS3;
    _consumidor_output_bus__out[13] = _consumidor_zero__out;
    _consumidor_output_bus__out[14] = _consumidor_vll_rms_calc_rms__RMS1;
    _consumidor_output_bus__out[15] = _consumidor_vll_rms_calc_rms__RMS2;
    _consumidor_output_bus__out[16] = _consumidor_vll_rms_calc_rms__RMS3;
    _consumidor_output_bus__out[17] = _consumidor_zero__out;
    _consumidor_output_bus__out[18] = _consumidor_i_rms_calc_rms__RMS1;
    _consumidor_output_bus__out[19] = _consumidor_i_rms_calc_rms__RMS2;
    _consumidor_output_bus__out[20] = _consumidor_i_rms_calc_rms__RMS3;
    _consumidor_output_bus__out[21] = _consumidor_gaini_rms__out;
    _consumidor_output_bus__out[22] = _consumidor_zero__out;
    _consumidor_output_bus__out[23] = _consumidor_zero__out;
    _consumidor_output_bus__out[24] = _consumidor_zero__out;
    _consumidor_output_bus__out[25] = _consumidor_zero__out;
    _consumidor_output_bus__out[26] = _consumidor_zero__out;
    _consumidor_output_bus__out[27] = _consumidor_zero__out;
    _consumidor_output_bus__out[28] = _consumidor_zero__out;
    _consumidor_output_bus__out[29] = _consumidor_zero__out;
    // Generated from the component: Consumidor.PLL.PID.Kd
    _consumidor_pll_pid_kd__out = 1.0 * _consumidor_pll_normalize__in2_pu;
    // Generated from the component: Consumidor.PLL.PID.Ki
    _consumidor_pll_pid_ki__out = 3200.0 * _consumidor_pll_normalize__in2_pu;
    // Generated from the component: Consumidor.PLL.PID.Kp
    _consumidor_pll_pid_kp__out = 100.0 * _consumidor_pll_normalize__in2_pu;
    // Generated from the component: Consumidor.PLL.term_pk
    // Generated from the component: Rele.I_RMS
    HIL_OutAO(0x4016, (float)_rele_gaini_rms__out);
    // Generated from the component: Rele.output_bus
    _rele_output_bus__out[0] = _rele_van_va1__out;
    _rele_output_bus__out[1] = _rele_vbn_va1__out;
    _rele_output_bus__out[2] = _rele_vcn_va1__out;
    _rele_output_bus__out[3] = _rele_vab_va1__out;
    _rele_output_bus__out[4] = _rele_vbc_va1__out;
    _rele_output_bus__out[5] = _rele_vca_va1__out;
    _rele_output_bus__out[6] = _rele_ia_ia1__out;
    _rele_output_bus__out[7] = _rele_ib_ia1__out;
    _rele_output_bus__out[8] = _rele_ic_ia1__out;
    _rele_output_bus__out[9] = _rele_pll_to_hz__out;
    _rele_output_bus__out[10] = _rele_vln_rms_calc_rms__RMS1;
    _rele_output_bus__out[11] = _rele_vln_rms_calc_rms__RMS2;
    _rele_output_bus__out[12] = _rele_vln_rms_calc_rms__RMS3;
    _rele_output_bus__out[13] = _rele_zero__out;
    _rele_output_bus__out[14] = _rele_vll_rms_calc_rms__RMS1;
    _rele_output_bus__out[15] = _rele_vll_rms_calc_rms__RMS2;
    _rele_output_bus__out[16] = _rele_vll_rms_calc_rms__RMS3;
    _rele_output_bus__out[17] = _rele_zero__out;
    _rele_output_bus__out[18] = _rele_i_rms_calc_rms__RMS1;
    _rele_output_bus__out[19] = _rele_i_rms_calc_rms__RMS2;
    _rele_output_bus__out[20] = _rele_i_rms_calc_rms__RMS3;
    _rele_output_bus__out[21] = _rele_gaini_rms__out;
    _rele_output_bus__out[22] = _rele_zero__out;
    _rele_output_bus__out[23] = _rele_zero__out;
    _rele_output_bus__out[24] = _rele_zero__out;
    _rele_output_bus__out[25] = _rele_zero__out;
    _rele_output_bus__out[26] = _rele_zero__out;
    _rele_output_bus__out[27] = _rele_zero__out;
    _rele_output_bus__out[28] = _rele_zero__out;
    _rele_output_bus__out[29] = _rele_zero__out;
    // Generated from the component: Rele.PLL.PID.Kd
    _rele_pll_pid_kd__out = 1.0 * _rele_pll_normalize__in2_pu;
    // Generated from the component: Rele.PLL.PID.Ki
    _rele_pll_pid_ki__out = 3200.0 * _rele_pll_normalize__in2_pu;
    // Generated from the component: Rele.PLL.PID.Kp
    _rele_pll_pid_kp__out = 100.0 * _rele_pll_normalize__in2_pu;
    // Generated from the component: Rele.PLL.term_pk
    // Generated from the component: Consumidor.Out
    // Generated from the component: Consumidor.PLL.PID.Sum8
    _consumidor_pll_pid_sum8__out = _consumidor_pll_pid_kd__out - _consumidor_pll_pid_integrator2__out;
    // Generated from the component: Rele.Out
    // Generated from the component: Rele.PLL.PID.Sum8
    _rele_pll_pid_sum8__out = _rele_pll_pid_kd__out - _rele_pll_pid_integrator2__out;
    // Generated from the component: Consumidor.PLL.PID.Gain1
    _consumidor_pll_pid_gain1__out = 714.2857 * _consumidor_pll_pid_sum8__out;
    // Generated from the component: Rele.PLL.PID.Gain1
    _rele_pll_pid_gain1__out = 714.2857 * _rele_pll_pid_sum8__out;
    // Generated from the component: Consumidor.PLL.PID.Sum5
    _consumidor_pll_pid_sum5__out = _consumidor_pll_pid_kp__out + _consumidor_pll_pid_gain1__out + _consumidor_pll_pid_integrator1__out;
    // Generated from the component: Rele.PLL.PID.Sum5
    _rele_pll_pid_sum5__out = _rele_pll_pid_kp__out + _rele_pll_pid_gain1__out + _rele_pll_pid_integrator1__out;
    // Generated from the component: Consumidor.PLL.PID.Limit1
    _consumidor_pll_pid_limit1__out = MIN(MAX(_consumidor_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Rele.PLL.PID.Limit1
    _rele_pll_pid_limit1__out = MIN(MAX(_rele_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Consumidor.PLL.PID.Sum6
    _consumidor_pll_pid_sum6__out =  - _consumidor_pll_pid_sum5__out + _consumidor_pll_pid_limit1__out;
    // Generated from the component: Consumidor.PLL.Rate Limiter1
    if (_consumidor_pll_rate_limiter1__first_step) {
        _consumidor_pll_rate_limiter1__out = _consumidor_pll_pid_limit1__out;
        _consumidor_pll_rate_limiter1__state = _consumidor_pll_pid_limit1__out;
    } else {
        _consumidor_pll_rate_limiter1__out = _consumidor_pll_pid_limit1__out;
        if (_consumidor_pll_pid_limit1__out - _consumidor_pll_rate_limiter1__state > 0.07539822368615504)
            _consumidor_pll_rate_limiter1__out = _consumidor_pll_rate_limiter1__state + (0.07539822368615504);
        if (_consumidor_pll_pid_limit1__out - _consumidor_pll_rate_limiter1__state < -0.07539822368615504)
            _consumidor_pll_rate_limiter1__out = _consumidor_pll_rate_limiter1__state + (-0.07539822368615504);
    }
    // Generated from the component: Consumidor.PLL.integrator
    _consumidor_pll_integrator__in = _consumidor_pll_pid_limit1__out;
    _consumidor_pll_integrator__out += 0.001 * _consumidor_pll_integrator__in;
    if (_consumidor_pll_integrator__in >= 0.0) {
        if (_consumidor_pll_integrator__out >= 6.283185307179586) {
            _consumidor_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_consumidor_pll_integrator__out <= -6.283185307179586) {
            _consumidor_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: Rele.PLL.PID.Sum6
    _rele_pll_pid_sum6__out =  - _rele_pll_pid_sum5__out + _rele_pll_pid_limit1__out;
    // Generated from the component: Rele.PLL.Rate Limiter1
    if (_rele_pll_rate_limiter1__first_step) {
        _rele_pll_rate_limiter1__out = _rele_pll_pid_limit1__out;
        _rele_pll_rate_limiter1__state = _rele_pll_pid_limit1__out;
    } else {
        _rele_pll_rate_limiter1__out = _rele_pll_pid_limit1__out;
        if (_rele_pll_pid_limit1__out - _rele_pll_rate_limiter1__state > 0.07539822368615504)
            _rele_pll_rate_limiter1__out = _rele_pll_rate_limiter1__state + (0.07539822368615504);
        if (_rele_pll_pid_limit1__out - _rele_pll_rate_limiter1__state < -0.07539822368615504)
            _rele_pll_rate_limiter1__out = _rele_pll_rate_limiter1__state + (-0.07539822368615504);
    }
    // Generated from the component: Rele.PLL.integrator
    _rele_pll_integrator__in = _rele_pll_pid_limit1__out;
    _rele_pll_integrator__out += 0.001 * _rele_pll_integrator__in;
    if (_rele_pll_integrator__in >= 0.0) {
        if (_rele_pll_integrator__out >= 6.283185307179586) {
            _rele_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_rele_pll_integrator__out <= -6.283185307179586) {
            _rele_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: Consumidor.PLL.PID.Kb
    _consumidor_pll_pid_kb__out = 1.0 * _consumidor_pll_pid_sum6__out;
    // Generated from the component: Consumidor.PLL.LPF.LPF
    X_UnInt32 _consumidor_pll_lpf_lpf__i;
    _consumidor_pll_lpf_lpf__a_sum = 0.0f;
    _consumidor_pll_lpf_lpf__b_sum = 0.0f;
    _consumidor_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_consumidor_pll_lpf_lpf__i = 0; _consumidor_pll_lpf_lpf__i < 1; _consumidor_pll_lpf_lpf__i++) {
        _consumidor_pll_lpf_lpf__b_sum += _consumidor_pll_lpf_lpf__b_coeff[_consumidor_pll_lpf_lpf__i] * _consumidor_pll_lpf_lpf__states[_consumidor_pll_lpf_lpf__i + 1];
    }
    for (_consumidor_pll_lpf_lpf__i = 1; _consumidor_pll_lpf_lpf__i > 0; _consumidor_pll_lpf_lpf__i--) {
        _consumidor_pll_lpf_lpf__a_sum += _consumidor_pll_lpf_lpf__a_coeff[_consumidor_pll_lpf_lpf__i + 1] * _consumidor_pll_lpf_lpf__states[_consumidor_pll_lpf_lpf__i];
    }
    _consumidor_pll_lpf_lpf__a_sum += _consumidor_pll_lpf_lpf__states[0] * _consumidor_pll_lpf_lpf__a_coeff[1];
    _consumidor_pll_lpf_lpf__delay_line_in = _consumidor_pll_rate_limiter1__out - _consumidor_pll_lpf_lpf__a_sum;
    _consumidor_pll_lpf_lpf__out = _consumidor_pll_lpf_lpf__b_sum;
    // Generated from the component: Rele.PLL.PID.Kb
    _rele_pll_pid_kb__out = 1.0 * _rele_pll_pid_sum6__out;
    // Generated from the component: Rele.PLL.LPF.LPF
    X_UnInt32 _rele_pll_lpf_lpf__i;
    _rele_pll_lpf_lpf__a_sum = 0.0f;
    _rele_pll_lpf_lpf__b_sum = 0.0f;
    _rele_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_rele_pll_lpf_lpf__i = 0; _rele_pll_lpf_lpf__i < 1; _rele_pll_lpf_lpf__i++) {
        _rele_pll_lpf_lpf__b_sum += _rele_pll_lpf_lpf__b_coeff[_rele_pll_lpf_lpf__i] * _rele_pll_lpf_lpf__states[_rele_pll_lpf_lpf__i + 1];
    }
    for (_rele_pll_lpf_lpf__i = 1; _rele_pll_lpf_lpf__i > 0; _rele_pll_lpf_lpf__i--) {
        _rele_pll_lpf_lpf__a_sum += _rele_pll_lpf_lpf__a_coeff[_rele_pll_lpf_lpf__i + 1] * _rele_pll_lpf_lpf__states[_rele_pll_lpf_lpf__i];
    }
    _rele_pll_lpf_lpf__a_sum += _rele_pll_lpf_lpf__states[0] * _rele_pll_lpf_lpf__a_coeff[1];
    _rele_pll_lpf_lpf__delay_line_in = _rele_pll_rate_limiter1__out - _rele_pll_lpf_lpf__a_sum;
    _rele_pll_lpf_lpf__out = _rele_pll_lpf_lpf__b_sum;
    // Generated from the component: Consumidor.PLL.PID.Sum7
    _consumidor_pll_pid_sum7__out = _consumidor_pll_pid_ki__out + _consumidor_pll_pid_kb__out;
    // Generated from the component: Rele.PLL.PID.Sum7
    _rele_pll_pid_sum7__out = _rele_pll_pid_ki__out + _rele_pll_pid_kb__out;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Consumidor.PLL.PID.Integrator1
    _consumidor_pll_pid_integrator1__state += _consumidor_pll_pid_sum7__out * 0.001;
    // Generated from the component: Consumidor.PLL.PID.Integrator2
    _consumidor_pll_pid_integrator2__state += _consumidor_pll_pid_gain1__out * 0.001;
    // Generated from the component: Consumidor.PLL.Unit Delay1
    _consumidor_pll_unit_delay1__state = _consumidor_pll_integrator__out;
    // Generated from the component: Rele.PLL.PID.Integrator1
    _rele_pll_pid_integrator1__state += _rele_pll_pid_sum7__out * 0.001;
    // Generated from the component: Rele.PLL.PID.Integrator2
    _rele_pll_pid_integrator2__state += _rele_pll_pid_gain1__out * 0.001;
    // Generated from the component: Rele.PLL.Unit Delay1
    _rele_pll_unit_delay1__state = _rele_pll_integrator__out;
    // Generated from the component: Consumidor.measSM.mode_and_dFract
    // Generated from the component: FaltaConsumidor.Control state machine
    // Generated from the component: Rele.measSM.mode_and_dFract
    // Generated from the component: Consumidor.I_RMS_calc.RMS
    // Generated from the component: Consumidor.VLL_RMS_calc.RMS
    // Generated from the component: Consumidor.VLn_RMS_calc.RMS
    // Generated from the component: Rele.I_RMS_calc.RMS
    // Generated from the component: Rele.VLL_RMS_calc.RMS
    // Generated from the component: Rele.VLn_RMS_calc.RMS
    // Generated from the component: Consumidor.PLL.normalize
    // Generated from the component: Rele.PLL.normalize
    // Generated from the component: Consumidor.PLL.Rate Limiter1
    if (_consumidor_pll_pid_limit1__out - _consumidor_pll_rate_limiter1__state > 0.07539822368615504)
        _consumidor_pll_rate_limiter1__state += (0.07539822368615504);
    else  if (_consumidor_pll_pid_limit1__out - _consumidor_pll_rate_limiter1__state < -0.07539822368615504)
        _consumidor_pll_rate_limiter1__state += (-0.07539822368615504);
    else
        _consumidor_pll_rate_limiter1__state = _consumidor_pll_pid_limit1__out;
    _consumidor_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Consumidor.PLL.integrator
    // Generated from the component: Rele.PLL.Rate Limiter1
    if (_rele_pll_pid_limit1__out - _rele_pll_rate_limiter1__state > 0.07539822368615504)
        _rele_pll_rate_limiter1__state += (0.07539822368615504);
    else  if (_rele_pll_pid_limit1__out - _rele_pll_rate_limiter1__state < -0.07539822368615504)
        _rele_pll_rate_limiter1__state += (-0.07539822368615504);
    else
        _rele_pll_rate_limiter1__state = _rele_pll_pid_limit1__out;
    _rele_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Rele.PLL.integrator
    // Generated from the component: Consumidor.PLL.LPF.LPF
    for (_consumidor_pll_lpf_lpf__i = 1; _consumidor_pll_lpf_lpf__i > 0; _consumidor_pll_lpf_lpf__i--) {
        _consumidor_pll_lpf_lpf__states[_consumidor_pll_lpf_lpf__i] = _consumidor_pll_lpf_lpf__states[_consumidor_pll_lpf_lpf__i - 1];
    }
    _consumidor_pll_lpf_lpf__states[0] = _consumidor_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Rele.PLL.LPF.LPF
    for (_rele_pll_lpf_lpf__i = 1; _rele_pll_lpf_lpf__i > 0; _rele_pll_lpf_lpf__i--) {
        _rele_pll_lpf_lpf__states[_rele_pll_lpf_lpf__i] = _rele_pll_lpf_lpf__states[_rele_pll_lpf_lpf__i - 1];
    }
    _rele_pll_lpf_lpf__states[0] = _rele_pll_lpf_lpf__delay_line_in;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------