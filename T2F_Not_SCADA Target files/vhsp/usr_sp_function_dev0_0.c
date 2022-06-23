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

// ----------------------------------------------------------------------------------------
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

































#define SQRT_2OVER3 0.8164965809277260327324280249019f
#define SQRT3_OVER_2 0.8660254037844386467637231707529f
#define ONE_DIV_BY_SQRT_3 0.57735026918962576450914878f



















#define SQRT_2OVER3 0.8164965809277260327324280249019f
#define SQRT3_OVER_2 0.8660254037844386467637231707529f
#define ONE_DIV_BY_SQRT_3 0.57735026918962576450914878f




















































































































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
double _linha_ia_ia1__out;
double _linha_ib_ia1__out;
double _linha_ic_ia1__out;
double _linha_pll_pid_integrator1__out;
double _linha_pll_pid_integrator2__out;
double _linha_pll_unit_delay1__out;
double _linha_pll_to_hz__out;
double _linha_vab_va1__out;
double _linha_van_va1__out;
double _linha_vbc_va1__out;
double _linha_vbn_va1__out;
double _linha_vca_va1__out;
double _linha_vcn_va1__out;
double _linha_zero__out = 0.0;
double _consumidor_pll_sin__out;

double _consumidor_meassm_mode_and_dfract__Freq;


double _consumidor_meassm_mode_and_dfract__dFract;
X_Int32 _consumidor_meassm_mode_and_dfract__mode;
X_Int32 _consumidor_meassm_mode_and_dfract__submode;
double _consumidor_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _consumidor_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _consumidor_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _consumidor_power_meter__Pdc;
double _consumidor_power_meter__Qdc;
double _consumidor_power_meter__P0dc;
double _consumidor_power_meter__Pac;
double _consumidor_power_meter__Qac;
double _consumidor_power_meter__P0ac;
double _consumidor_power_meter__apparent;
double _consumidor_power_meter__k_factor;
double _consumidor_power_meter__v_alpha;
double _consumidor_power_meter__v_beta;
double _consumidor_power_meter__i_alpha;
double _consumidor_power_meter__i_beta;
double _consumidor_power_meter__v_zero;
double _consumidor_power_meter__i_zero;
double _consumidor_power_meter__filter_1_output;
double _consumidor_power_meter__filter_1_outputQ;
double _consumidor_power_meter__filter_1_outputP0;
double _consumidor_power_meter__filter_2_output;
double _consumidor_power_meter__filter_2_outputQ;
double _consumidor_power_meter__filter_2_outputP0;
double _consumidor_extra_output_bus__out[12];
double _linha_pll_sin__out;

double _linha_meassm_mode_and_dfract__Freq;


double _linha_meassm_mode_and_dfract__dFract;
X_Int32 _linha_meassm_mode_and_dfract__mode;
X_Int32 _linha_meassm_mode_and_dfract__submode;
double _linha_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _linha_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _linha_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _linha_power_meter__Pdc;
double _linha_power_meter__Qdc;
double _linha_power_meter__P0dc;
double _linha_power_meter__Pac;
double _linha_power_meter__Qac;
double _linha_power_meter__P0ac;
double _linha_power_meter__apparent;
double _linha_power_meter__k_factor;
double _linha_power_meter__v_alpha;
double _linha_power_meter__v_beta;
double _linha_power_meter__i_alpha;
double _linha_power_meter__i_beta;
double _linha_power_meter__v_zero;
double _linha_power_meter__i_zero;
double _linha_power_meter__filter_1_output;
double _linha_power_meter__filter_1_outputQ;
double _linha_power_meter__filter_1_outputP0;
double _linha_power_meter__filter_2_output;
double _linha_power_meter__filter_2_outputQ;
double _linha_power_meter__filter_2_outputP0;
double _linha_extra_output_bus__out[12];

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

double _linha_i_rms_calc_rms__IN1;
double _linha_i_rms_calc_rms__IN2;
double _linha_i_rms_calc_rms__IN3;
double _linha_i_rms_calc_rms__dFract;
X_Int32 _linha_i_rms_calc_rms__mode;


double _linha_i_rms_calc_rms__RMS1;
double _linha_i_rms_calc_rms__RMS2;
double _linha_i_rms_calc_rms__RMS3;

double _linha_vll_rms_calc_rms__IN1;
double _linha_vll_rms_calc_rms__IN2;
double _linha_vll_rms_calc_rms__IN3;
double _linha_vll_rms_calc_rms__dFract;
X_Int32 _linha_vll_rms_calc_rms__mode;


double _linha_vll_rms_calc_rms__RMS1;
double _linha_vll_rms_calc_rms__RMS2;
double _linha_vll_rms_calc_rms__RMS3;

double _linha_vln_rms_calc_rms__IN1;
double _linha_vln_rms_calc_rms__IN2;
double _linha_vln_rms_calc_rms__IN3;
double _linha_vln_rms_calc_rms__dFract;
X_Int32 _linha_vln_rms_calc_rms__mode;


double _linha_vln_rms_calc_rms__RMS1;
double _linha_vln_rms_calc_rms__RMS2;
double _linha_vln_rms_calc_rms__RMS3;
double _linha_pll_abc_to_dq_alpha_beta_to_dq__d;
double _linha_pll_abc_to_dq_alpha_beta_to_dq__q;
double _linha_pll_abc_to_dq_alpha_beta_to_dq__k1;
double _linha_pll_abc_to_dq_alpha_beta_to_dq__k2;
double _consumidor_sumi_rms__out;
double _consumidor_sumvll_rms__out;
double _consumidor_sumvln_rms__out;
double _consumidor_pll_abc_to_dq_lpf_d__out;
double _consumidor_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _consumidor_pll_abc_to_dq_lpf_q__out;
double _consumidor_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _linha_sumi_rms__out;
double _linha_sumvll_rms__out;
double _linha_sumvln_rms__out;
double _linha_pll_abc_to_dq_lpf_d__out;
double _linha_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _linha_pll_abc_to_dq_lpf_q__out;
double _linha_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _consumidor_gaini_rms__out;
double _consumidor_gainvll_rms__out;
double _consumidor_gainvln_rms__out;
double _consumidor_pll_normalize__in1;
double _consumidor_pll_normalize__in2;


double _consumidor_pll_normalize__in2_pu;
double _consumidor_pll_normalize__pk;
double _linha_gaini_rms__out;
double _linha_gainvll_rms__out;
double _linha_gainvln_rms__out;
double _linha_pll_normalize__in1;
double _linha_pll_normalize__in2;


double _linha_pll_normalize__in2_pu;
double _linha_pll_normalize__pk;
double _consumidor_output_bus__out[30];
double _consumidor_pll_pid_kd__out;
double _consumidor_pll_pid_ki__out;
double _consumidor_pll_pid_kp__out;
double _linha_output_bus__out[30];
double _linha_pll_pid_kd__out;
double _linha_pll_pid_ki__out;
double _linha_pll_pid_kp__out;
double _consumidor_pll_pid_sum8__out;
double _linha_pll_pid_sum8__out;
double _consumidor_pll_pid_gain1__out;
double _linha_pll_pid_gain1__out;
double _consumidor_pll_pid_sum5__out;
double _linha_pll_pid_sum5__out;
double _consumidor_pll_pid_limit1__out;
double _linha_pll_pid_limit1__out;
double _consumidor_pll_pid_sum6__out;
double _consumidor_pll_rate_limiter1__out;

double _consumidor_pll_integrator__in;


double _consumidor_pll_integrator__out;
double _linha_pll_pid_sum6__out;
double _linha_pll_rate_limiter1__out;

double _linha_pll_integrator__in;


double _linha_pll_integrator__out;
double _consumidor_pll_pid_kb__out;
double _consumidor_pll_lpf_lpf__out;
double _consumidor_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 2.467400050942814e-08};
double _consumidor_pll_lpf_lpf__a_coeff[3] = {1.0, -1.9997778894456002, 0.9997779141196009};
double _consumidor_pll_lpf_lpf__a_sum;
double _consumidor_pll_lpf_lpf__b_sum;
double _consumidor_pll_lpf_lpf__delay_line_in;
double _linha_pll_pid_kb__out;
double _linha_pll_lpf_lpf__out;
double _linha_pll_lpf_lpf__b_coeff[2] = {2.220446049250313e-16, 2.467400050942814e-08};
double _linha_pll_lpf_lpf__a_coeff[3] = {1.0, -1.9997778894456002, 0.9997779141196009};
double _linha_pll_lpf_lpf__a_sum;
double _linha_pll_lpf_lpf__b_sum;
double _linha_pll_lpf_lpf__delay_line_in;
double _consumidor_pll_pid_sum7__out;
double _linha_pll_pid_sum7__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _consumidor_pll_pid_integrator1__state;
double _consumidor_pll_pid_integrator2__state;
double _consumidor_pll_unit_delay1__state;
double _linha_pll_pid_integrator1__state;
double _linha_pll_pid_integrator2__state;
double _linha_pll_unit_delay1__state;
double _consumidor_meassm_mode_and_dfract__Tfract;
double _consumidor_meassm_mode_and_dfract__freqAbs;
double _consumidor_meassm_mode_and_dfract__fMax;
X_Int32 _consumidor_meassm_mode_and_dfract__reset;
X_Int32 _consumidor_meassm_mode_and_dfract__cycle_counter;
double _consumidor_power_meter__filter_1_output_k_minus_1;
double _consumidor_power_meter__filter_1_input_k_minus_1;
double _consumidor_power_meter__filter_1_output_k_minus_1Q;
double _consumidor_power_meter__filter_1_input_k_minus_1Q;
double _consumidor_power_meter__filter_1_output_k_minus_1P0;
double _consumidor_power_meter__filter_1_input_k_minus_1P0;
double _consumidor_power_meter__filter_2_output_k_minus_1;
double _consumidor_power_meter__filter_2_input_k_minus_1;
double _consumidor_power_meter__filter_2_output_k_minus_1Q;
double _consumidor_power_meter__filter_2_input_k_minus_1Q;
double _consumidor_power_meter__filter_2_output_k_minus_1P0;
double _consumidor_power_meter__filter_2_input_k_minus_1P0;
double _linha_meassm_mode_and_dfract__Tfract;
double _linha_meassm_mode_and_dfract__freqAbs;
double _linha_meassm_mode_and_dfract__fMax;
X_Int32 _linha_meassm_mode_and_dfract__reset;
X_Int32 _linha_meassm_mode_and_dfract__cycle_counter;
double _linha_power_meter__filter_1_output_k_minus_1;
double _linha_power_meter__filter_1_input_k_minus_1;
double _linha_power_meter__filter_1_output_k_minus_1Q;
double _linha_power_meter__filter_1_input_k_minus_1Q;
double _linha_power_meter__filter_1_output_k_minus_1P0;
double _linha_power_meter__filter_1_input_k_minus_1P0;
double _linha_power_meter__filter_2_output_k_minus_1;
double _linha_power_meter__filter_2_input_k_minus_1;
double _linha_power_meter__filter_2_output_k_minus_1Q;
double _linha_power_meter__filter_2_input_k_minus_1Q;
double _linha_power_meter__filter_2_output_k_minus_1P0;
double _linha_power_meter__filter_2_input_k_minus_1P0;
double _consumidor_i_rms_calc_rms__rmsSum1;
double _consumidor_i_rms_calc_rms__rmsSum2;
double _consumidor_i_rms_calc_rms__rmsSum3;
double _consumidor_vll_rms_calc_rms__rmsSum1;
double _consumidor_vll_rms_calc_rms__rmsSum2;
double _consumidor_vll_rms_calc_rms__rmsSum3;
double _consumidor_vln_rms_calc_rms__rmsSum1;
double _consumidor_vln_rms_calc_rms__rmsSum2;
double _consumidor_vln_rms_calc_rms__rmsSum3;
double _linha_i_rms_calc_rms__rmsSum1;
double _linha_i_rms_calc_rms__rmsSum2;
double _linha_i_rms_calc_rms__rmsSum3;
double _linha_vll_rms_calc_rms__rmsSum1;
double _linha_vll_rms_calc_rms__rmsSum2;
double _linha_vll_rms_calc_rms__rmsSum3;
double _linha_vln_rms_calc_rms__rmsSum1;
double _linha_vln_rms_calc_rms__rmsSum2;
double _linha_vln_rms_calc_rms__rmsSum3;
double _consumidor_pll_abc_to_dq_lpf_d__filtered_value;
double _consumidor_pll_abc_to_dq_lpf_d__previous_in;
double _consumidor_pll_abc_to_dq_lpf_q__filtered_value;
double _consumidor_pll_abc_to_dq_lpf_q__previous_in;
double _linha_pll_abc_to_dq_lpf_d__filtered_value;
double _linha_pll_abc_to_dq_lpf_d__previous_in;
double _linha_pll_abc_to_dq_lpf_q__filtered_value;
double _linha_pll_abc_to_dq_lpf_q__previous_in;
double _consumidor_pll_rate_limiter1__state;
X_Int32 _consumidor_pll_rate_limiter1__first_step;
double _linha_pll_rate_limiter1__state;
X_Int32 _linha_pll_rate_limiter1__first_step;
double _consumidor_pll_lpf_lpf__states[2];
double _linha_pll_lpf_lpf__states[2];
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
    _linha_pll_pid_integrator1__state = 376.99111843;
    _linha_pll_pid_integrator2__state = 0.0;
    _linha_pll_unit_delay1__state = 0.0;
    HIL_OutAO(0x4000, 0.0f);
    _consumidor_meassm_mode_and_dfract__dFract = 0;
    _consumidor_meassm_mode_and_dfract__fMax = 1.0 / 1e-06;
    _consumidor_meassm_mode_and_dfract__cycle_counter = 0;
    _consumidor_meassm_mode_and_dfract__reset = 1;
    _consumidor_power_meter__filter_1_output_k_minus_1 = 0.0;
    _consumidor_power_meter__filter_1_input_k_minus_1 = 0.0;
    _consumidor_power_meter__filter_1_output_k_minus_1Q = 0.0;
    _consumidor_power_meter__filter_1_input_k_minus_1Q = 0.0;
    _consumidor_power_meter__filter_1_output_k_minus_1P0 = 0.0;
    _consumidor_power_meter__filter_1_input_k_minus_1P0 = 0.0;
    HIL_OutAO(0x4011, 0.0f);
    _linha_meassm_mode_and_dfract__dFract = 0;
    _linha_meassm_mode_and_dfract__fMax = 1.0 / 1e-06;
    _linha_meassm_mode_and_dfract__cycle_counter = 0;
    _linha_meassm_mode_and_dfract__reset = 1;
    _linha_power_meter__filter_1_output_k_minus_1 = 0.0;
    _linha_power_meter__filter_1_input_k_minus_1 = 0.0;
    _linha_power_meter__filter_1_output_k_minus_1Q = 0.0;
    _linha_power_meter__filter_1_input_k_minus_1Q = 0.0;
    _linha_power_meter__filter_1_output_k_minus_1P0 = 0.0;
    _linha_power_meter__filter_1_input_k_minus_1P0 = 0.0;
    _consumidor_i_rms_calc_rms__mode = 1;
    _consumidor_vll_rms_calc_rms__mode = 1;
    _consumidor_vln_rms_calc_rms__mode = 1;
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    _linha_i_rms_calc_rms__mode = 1;
    _linha_vll_rms_calc_rms__mode = 1;
    _linha_vln_rms_calc_rms__mode = 1;
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    _consumidor_pll_abc_to_dq_lpf_d__filtered_value = 0x0;
    _consumidor_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _consumidor_pll_abc_to_dq_lpf_q__filtered_value = 0x0;
    _consumidor_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x401c, 0.0f);
    HIL_OutAO(0x401e, 0.0f);
    HIL_OutAO(0x401b, 0.0f);
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    _linha_pll_abc_to_dq_lpf_d__filtered_value = 0x0;
    _linha_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _linha_pll_abc_to_dq_lpf_q__filtered_value = 0x0;
    _linha_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    _consumidor_pll_normalize__pk = 0;
    _linha_pll_normalize__pk = 0;
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4020, 0.0f);
    HIL_OutAO(0x4021, 0.0f);
    _consumidor_pll_rate_limiter1__state = 0;
    _consumidor_pll_rate_limiter1__first_step = 1;
    _consumidor_pll_integrator__out = 0;
    _linha_pll_rate_limiter1__state = 0;
    _linha_pll_rate_limiter1__first_step = 1;
    _linha_pll_integrator__out = 0;
    X_UnInt32 _consumidor_pll_lpf_lpf__i;
    for (_consumidor_pll_lpf_lpf__i = 0; _consumidor_pll_lpf_lpf__i < 2; _consumidor_pll_lpf_lpf__i++) {
        _consumidor_pll_lpf_lpf__states[_consumidor_pll_lpf_lpf__i] = 0;
    }
    X_UnInt32 _linha_pll_lpf_lpf__i;
    for (_linha_pll_lpf_lpf__i = 0; _linha_pll_lpf_lpf__i < 2; _linha_pll_lpf_lpf__i++) {
        _linha_pll_lpf_lpf__states[_linha_pll_lpf_lpf__i] = 0;
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
}              // generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

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
    // Generated from the component: Linha.zero
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Consumidor.IA.Ia1
    _consumidor_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x1e));
    // Generated from the component: Consumidor.IB.Ia1
    _consumidor_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x1f));
    // Generated from the component: Consumidor.IC.Ia1
    _consumidor_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x20));
    // Generated from the component: Consumidor.PLL.PID.Integrator1
    _consumidor_pll_pid_integrator1__out = _consumidor_pll_pid_integrator1__state;
    // Generated from the component: Consumidor.PLL.PID.Integrator2
    _consumidor_pll_pid_integrator2__out = _consumidor_pll_pid_integrator2__state;
    // Generated from the component: Consumidor.PLL.Unit Delay1
    _consumidor_pll_unit_delay1__out = _consumidor_pll_unit_delay1__state;
    // Generated from the component: Consumidor.PLL.to_Hz
    _consumidor_pll_to_hz__out = 0.15915494309189535 * _consumidor_pll_lpf_lpf__out;
    // Generated from the component: Consumidor.VAB.Va1
    _consumidor_vab_va1__out = (HIL_InFloat(0xc80000 + 0x12));
    // Generated from the component: Consumidor.VAn.Va1
    _consumidor_van_va1__out = (HIL_InFloat(0xc80000 + 0x13));
    // Generated from the component: Consumidor.VBC.Va1
    _consumidor_vbc_va1__out = (HIL_InFloat(0xc80000 + 0x14));
    // Generated from the component: Consumidor.VBn.Va1
    _consumidor_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x15));
    // Generated from the component: Consumidor.VCA.Va1
    _consumidor_vca_va1__out = (HIL_InFloat(0xc80000 + 0x16));
    // Generated from the component: Consumidor.VCn.Va1
    _consumidor_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x17));
    // Generated from the component: Consumidor.zero
    // Generated from the component: Linha.IA.Ia1
    _linha_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x21));
    // Generated from the component: Linha.IB.Ia1
    _linha_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x22));
    // Generated from the component: Linha.IC.Ia1
    _linha_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x23));
    // Generated from the component: Linha.PLL.PID.Integrator1
    _linha_pll_pid_integrator1__out = _linha_pll_pid_integrator1__state;
    // Generated from the component: Linha.PLL.PID.Integrator2
    _linha_pll_pid_integrator2__out = _linha_pll_pid_integrator2__state;
    // Generated from the component: Linha.PLL.Unit Delay1
    _linha_pll_unit_delay1__out = _linha_pll_unit_delay1__state;
    // Generated from the component: Linha.PLL.to_Hz
    _linha_pll_to_hz__out = 0.15915494309189535 * _linha_pll_lpf_lpf__out;
    // Generated from the component: Linha.VAB.Va1
    _linha_vab_va1__out = (HIL_InFloat(0xc80000 + 0x18));
    // Generated from the component: Linha.VAn.Va1
    _linha_van_va1__out = (HIL_InFloat(0xc80000 + 0x19));
    // Generated from the component: Linha.VBC.Va1
    _linha_vbc_va1__out = (HIL_InFloat(0xc80000 + 0x1a));
    // Generated from the component: Linha.VBn.Va1
    _linha_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x1b));
    // Generated from the component: Linha.VCA.Va1
    _linha_vca_va1__out = (HIL_InFloat(0xc80000 + 0x1c));
    // Generated from the component: Linha.VCn.Va1
    _linha_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x1d));
    // Generated from the component: Linha.zero
    // Generated from the component: Consumidor.PLL.sin
    _consumidor_pll_sin__out = sin(_consumidor_pll_unit_delay1__out);
    // Generated from the component: Consumidor.TRMwt
    // Generated from the component: Consumidor.Freq
    HIL_OutAO(0x4000, (float)_consumidor_pll_to_hz__out);
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
        _consumidor_meassm_mode_and_dfract__dFract = 1e-06 * _consumidor_meassm_mode_and_dfract__freqAbs;
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
    // Generated from the component: Consumidor.Power Meter
    _consumidor_power_meter__v_alpha = SQRT_2OVER3 * ( _consumidor_van_va1__out - 0.5f * _consumidor_vbn_va1__out - 0.5f * _consumidor_vcn_va1__out);
    _consumidor_power_meter__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _consumidor_vbn_va1__out - SQRT3_OVER_2 * _consumidor_vcn_va1__out);
    _consumidor_power_meter__i_alpha = SQRT_2OVER3 * ( _consumidor_ia_ia1__out - 0.5f * _consumidor_ib_ia1__out - 0.5f * _consumidor_ic_ia1__out);
    _consumidor_power_meter__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _consumidor_ib_ia1__out - SQRT3_OVER_2 * _consumidor_ic_ia1__out);
    _consumidor_power_meter__v_zero = ONE_DIV_BY_SQRT_3 * (_consumidor_van_va1__out + _consumidor_vbn_va1__out + _consumidor_vcn_va1__out);
    _consumidor_power_meter__i_zero = ONE_DIV_BY_SQRT_3 * (_consumidor_ia_ia1__out + _consumidor_ib_ia1__out + _consumidor_ic_ia1__out);
    _consumidor_power_meter__Pac = _consumidor_power_meter__v_alpha * _consumidor_power_meter__i_alpha + _consumidor_power_meter__v_beta * _consumidor_power_meter__i_beta;
    _consumidor_power_meter__Qac = _consumidor_power_meter__v_beta * _consumidor_power_meter__i_alpha - _consumidor_power_meter__v_alpha * _consumidor_power_meter__i_beta;
    _consumidor_power_meter__P0ac = _consumidor_power_meter__v_zero * _consumidor_power_meter__i_zero;
    _consumidor_power_meter__filter_1_output = 9.423889780082336e-05 * (_consumidor_power_meter__Pac + _consumidor_power_meter__filter_1_input_k_minus_1) - (-0.9998115222043984) * _consumidor_power_meter__filter_1_output_k_minus_1;
    _consumidor_power_meter__filter_1_outputQ = 9.423889780082336e-05 * (_consumidor_power_meter__Qac + _consumidor_power_meter__filter_1_input_k_minus_1Q) - (-0.9998115222043984) * _consumidor_power_meter__filter_1_output_k_minus_1Q;
    _consumidor_power_meter__filter_1_outputP0 = 9.423889780082336e-05 * (_consumidor_power_meter__P0ac + _consumidor_power_meter__filter_1_input_k_minus_1P0) - (-0.9998115222043984) * _consumidor_power_meter__filter_1_output_k_minus_1P0;
    _consumidor_power_meter__filter_1_input_k_minus_1 = _consumidor_power_meter__Pac;
    _consumidor_power_meter__filter_1_output_k_minus_1 = _consumidor_power_meter__filter_1_output;
    _consumidor_power_meter__filter_1_input_k_minus_1Q = _consumidor_power_meter__Qac;;
    _consumidor_power_meter__filter_1_output_k_minus_1Q = _consumidor_power_meter__filter_1_outputQ;
    _consumidor_power_meter__filter_1_input_k_minus_1P0 = _consumidor_power_meter__P0ac;
    _consumidor_power_meter__filter_1_output_k_minus_1P0 = _consumidor_power_meter__filter_1_outputP0;
    _consumidor_power_meter__filter_2_output = 9.423889780082336e-05 * (_consumidor_power_meter__filter_1_output + _consumidor_power_meter__filter_2_input_k_minus_1) - (-0.9998115222043984) * _consumidor_power_meter__filter_2_output_k_minus_1;
    _consumidor_power_meter__filter_2_outputQ = 9.423889780082336e-05 * (_consumidor_power_meter__Qac + _consumidor_power_meter__filter_2_input_k_minus_1Q) - (-0.9998115222043984) * _consumidor_power_meter__filter_2_output_k_minus_1Q;
    _consumidor_power_meter__filter_2_outputP0 = 9.423889780082336e-05 * (_consumidor_power_meter__filter_1_outputP0 + _consumidor_power_meter__filter_2_input_k_minus_1P0) - (-0.9998115222043984) * _consumidor_power_meter__filter_2_output_k_minus_1P0;
    _consumidor_power_meter__filter_2_input_k_minus_1 = _consumidor_power_meter__filter_1_output;
    _consumidor_power_meter__filter_2_output_k_minus_1 = _consumidor_power_meter__filter_2_output;
    _consumidor_power_meter__filter_2_input_k_minus_1Q = _consumidor_power_meter__Qac;
    _consumidor_power_meter__filter_2_output_k_minus_1Q = _consumidor_power_meter__filter_2_outputQ;
    _consumidor_power_meter__filter_2_input_k_minus_1P0 = _consumidor_power_meter__filter_1_outputP0;
    _consumidor_power_meter__filter_2_output_k_minus_1P0 = _consumidor_power_meter__filter_2_outputP0;
    _consumidor_power_meter__Pdc = _consumidor_power_meter__filter_2_output;
    _consumidor_power_meter__Qdc = _consumidor_power_meter__filter_2_outputQ;
    _consumidor_power_meter__P0dc = _consumidor_power_meter__filter_2_outputP0;
    _consumidor_power_meter__apparent = sqrt(pow(_consumidor_power_meter__Pdc, 2) + pow(_consumidor_power_meter__Qdc, 2));
    if (_consumidor_power_meter__apparent > 0)
        _consumidor_power_meter__k_factor = _consumidor_power_meter__Pdc / _consumidor_power_meter__apparent;
    else
        _consumidor_power_meter__k_factor = 0;
    // Generated from the component: Consumidor.POWER_PA
    // Generated from the component: Consumidor.POWER_PB
    // Generated from the component: Consumidor.POWER_PC
    // Generated from the component: Consumidor.POWER_PFA
    // Generated from the component: Consumidor.POWER_PFB
    // Generated from the component: Consumidor.POWER_PFC
    // Generated from the component: Consumidor.POWER_QA
    // Generated from the component: Consumidor.POWER_QB
    // Generated from the component: Consumidor.POWER_QC
    // Generated from the component: Consumidor.POWER_SA
    // Generated from the component: Consumidor.POWER_SB
    // Generated from the component: Consumidor.POWER_SC
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
    // Generated from the component: Linha.PLL.sin
    _linha_pll_sin__out = sin(_linha_pll_unit_delay1__out);
    // Generated from the component: Linha.TRMwt
    // Generated from the component: Linha.Freq
    HIL_OutAO(0x4011, (float)_linha_pll_to_hz__out);
    // Generated from the component: Linha.measSM.mode_and_dFract
    _linha_meassm_mode_and_dfract__Freq = _linha_pll_to_hz__out;
    _linha_meassm_mode_and_dfract__freqAbs = fabs(_linha_meassm_mode_and_dfract__Freq);
    if (_linha_meassm_mode_and_dfract__reset == 1) {
        _linha_meassm_mode_and_dfract__mode = 1;
        _linha_meassm_mode_and_dfract__Tfract = 0.0;
        _linha_meassm_mode_and_dfract__cycle_counter = 0;
        _linha_meassm_mode_and_dfract__reset = 0;
    }
    else if (_linha_meassm_mode_and_dfract__freqAbs < 1.0) {
        _linha_meassm_mode_and_dfract__mode = 2;
        if (_linha_meassm_mode_and_dfract__Tfract > 0.0) {
            _linha_meassm_mode_and_dfract__reset = 1;
        }
    }
    else if ((_linha_meassm_mode_and_dfract__Tfract < 1.0) && (_linha_meassm_mode_and_dfract__freqAbs < _linha_meassm_mode_and_dfract__fMax)) {
        _linha_meassm_mode_and_dfract__dFract = 1e-06 * _linha_meassm_mode_and_dfract__freqAbs;
        _linha_meassm_mode_and_dfract__Tfract += _linha_meassm_mode_and_dfract__dFract;
        if (_linha_meassm_mode_and_dfract__Tfract >= 1.0) {
            _linha_meassm_mode_and_dfract__cycle_counter += 1;
            if (_linha_meassm_mode_and_dfract__cycle_counter >= 3) {
                _linha_meassm_mode_and_dfract__dFract = 1.0 - (_linha_meassm_mode_and_dfract__Tfract - _linha_meassm_mode_and_dfract__dFract);
            }
            else {
                _linha_meassm_mode_and_dfract__Tfract -= 1.0;
            }
        }
        _linha_meassm_mode_and_dfract__dFract /= 3;
        _linha_meassm_mode_and_dfract__mode = 3;
        if (_linha_meassm_mode_and_dfract__Tfract < 0.25) {
            _linha_meassm_mode_and_dfract__submode = 1;
        }
        else if (_linha_meassm_mode_and_dfract__Tfract < 0.5) {
            _linha_meassm_mode_and_dfract__submode = 2;
        }
        else if (_linha_meassm_mode_and_dfract__Tfract < 0.75) {
            _linha_meassm_mode_and_dfract__submode = 3;
        }
        else {
            _linha_meassm_mode_and_dfract__submode = 4;
        }
    }
    else if (_linha_meassm_mode_and_dfract__Tfract >= 1.0) {
        _linha_meassm_mode_and_dfract__mode = 4;
        _linha_meassm_mode_and_dfract__reset = 1;
    }
    else {
        _linha_meassm_mode_and_dfract__mode = 5;
        _linha_meassm_mode_and_dfract__reset = 1;
    }
    // Generated from the component: Linha.PLL.abc to dq.abc to alpha beta
    _linha_pll_abc_to_dq_abc_to_alpha_beta__alpha = (2.0 * _linha_van_va1__out - _linha_vbn_va1__out - _linha_vcn_va1__out) * 0.3333333333333333;
    _linha_pll_abc_to_dq_abc_to_alpha_beta__beta = (_linha_vbn_va1__out - _linha_vcn_va1__out) * 0.5773502691896258;
    _linha_pll_abc_to_dq_abc_to_alpha_beta__gamma = (_linha_van_va1__out + _linha_vbn_va1__out + _linha_vcn_va1__out) * 0.3333333333333333;
    // Generated from the component: Linha.Power Meter
    _linha_power_meter__v_alpha = SQRT_2OVER3 * ( _linha_van_va1__out - 0.5f * _linha_vbn_va1__out - 0.5f * _linha_vcn_va1__out);
    _linha_power_meter__v_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _linha_vbn_va1__out - SQRT3_OVER_2 * _linha_vcn_va1__out);
    _linha_power_meter__i_alpha = SQRT_2OVER3 * ( _linha_ia_ia1__out - 0.5f * _linha_ib_ia1__out - 0.5f * _linha_ic_ia1__out);
    _linha_power_meter__i_beta = SQRT_2OVER3 * (SQRT3_OVER_2 * _linha_ib_ia1__out - SQRT3_OVER_2 * _linha_ic_ia1__out);
    _linha_power_meter__v_zero = ONE_DIV_BY_SQRT_3 * (_linha_van_va1__out + _linha_vbn_va1__out + _linha_vcn_va1__out);
    _linha_power_meter__i_zero = ONE_DIV_BY_SQRT_3 * (_linha_ia_ia1__out + _linha_ib_ia1__out + _linha_ic_ia1__out);
    _linha_power_meter__Pac = _linha_power_meter__v_alpha * _linha_power_meter__i_alpha + _linha_power_meter__v_beta * _linha_power_meter__i_beta;
    _linha_power_meter__Qac = _linha_power_meter__v_beta * _linha_power_meter__i_alpha - _linha_power_meter__v_alpha * _linha_power_meter__i_beta;
    _linha_power_meter__P0ac = _linha_power_meter__v_zero * _linha_power_meter__i_zero;
    _linha_power_meter__filter_1_output = 9.423889780082336e-05 * (_linha_power_meter__Pac + _linha_power_meter__filter_1_input_k_minus_1) - (-0.9998115222043984) * _linha_power_meter__filter_1_output_k_minus_1;
    _linha_power_meter__filter_1_outputQ = 9.423889780082336e-05 * (_linha_power_meter__Qac + _linha_power_meter__filter_1_input_k_minus_1Q) - (-0.9998115222043984) * _linha_power_meter__filter_1_output_k_minus_1Q;
    _linha_power_meter__filter_1_outputP0 = 9.423889780082336e-05 * (_linha_power_meter__P0ac + _linha_power_meter__filter_1_input_k_minus_1P0) - (-0.9998115222043984) * _linha_power_meter__filter_1_output_k_minus_1P0;
    _linha_power_meter__filter_1_input_k_minus_1 = _linha_power_meter__Pac;
    _linha_power_meter__filter_1_output_k_minus_1 = _linha_power_meter__filter_1_output;
    _linha_power_meter__filter_1_input_k_minus_1Q = _linha_power_meter__Qac;;
    _linha_power_meter__filter_1_output_k_minus_1Q = _linha_power_meter__filter_1_outputQ;
    _linha_power_meter__filter_1_input_k_minus_1P0 = _linha_power_meter__P0ac;
    _linha_power_meter__filter_1_output_k_minus_1P0 = _linha_power_meter__filter_1_outputP0;
    _linha_power_meter__filter_2_output = 9.423889780082336e-05 * (_linha_power_meter__filter_1_output + _linha_power_meter__filter_2_input_k_minus_1) - (-0.9998115222043984) * _linha_power_meter__filter_2_output_k_minus_1;
    _linha_power_meter__filter_2_outputQ = 9.423889780082336e-05 * (_linha_power_meter__Qac + _linha_power_meter__filter_2_input_k_minus_1Q) - (-0.9998115222043984) * _linha_power_meter__filter_2_output_k_minus_1Q;
    _linha_power_meter__filter_2_outputP0 = 9.423889780082336e-05 * (_linha_power_meter__filter_1_outputP0 + _linha_power_meter__filter_2_input_k_minus_1P0) - (-0.9998115222043984) * _linha_power_meter__filter_2_output_k_minus_1P0;
    _linha_power_meter__filter_2_input_k_minus_1 = _linha_power_meter__filter_1_output;
    _linha_power_meter__filter_2_output_k_minus_1 = _linha_power_meter__filter_2_output;
    _linha_power_meter__filter_2_input_k_minus_1Q = _linha_power_meter__Qac;
    _linha_power_meter__filter_2_output_k_minus_1Q = _linha_power_meter__filter_2_outputQ;
    _linha_power_meter__filter_2_input_k_minus_1P0 = _linha_power_meter__filter_1_outputP0;
    _linha_power_meter__filter_2_output_k_minus_1P0 = _linha_power_meter__filter_2_outputP0;
    _linha_power_meter__Pdc = _linha_power_meter__filter_2_output;
    _linha_power_meter__Qdc = _linha_power_meter__filter_2_outputQ;
    _linha_power_meter__P0dc = _linha_power_meter__filter_2_outputP0;
    _linha_power_meter__apparent = sqrt(pow(_linha_power_meter__Pdc, 2) + pow(_linha_power_meter__Qdc, 2));
    if (_linha_power_meter__apparent > 0)
        _linha_power_meter__k_factor = _linha_power_meter__Pdc / _linha_power_meter__apparent;
    else
        _linha_power_meter__k_factor = 0;
    // Generated from the component: Linha.POWER_PA
    // Generated from the component: Linha.POWER_PB
    // Generated from the component: Linha.POWER_PC
    // Generated from the component: Linha.POWER_PFA
    // Generated from the component: Linha.POWER_PFB
    // Generated from the component: Linha.POWER_PFC
    // Generated from the component: Linha.POWER_QA
    // Generated from the component: Linha.POWER_QB
    // Generated from the component: Linha.POWER_QC
    // Generated from the component: Linha.POWER_SA
    // Generated from the component: Linha.POWER_SB
    // Generated from the component: Linha.POWER_SC
    // Generated from the component: Linha.extra_output_bus
    _linha_extra_output_bus__out[0] = _linha_zero__out;
    _linha_extra_output_bus__out[1] = _linha_zero__out;
    _linha_extra_output_bus__out[2] = _linha_zero__out;
    _linha_extra_output_bus__out[3] = _linha_zero__out;
    _linha_extra_output_bus__out[4] = _linha_zero__out;
    _linha_extra_output_bus__out[5] = _linha_zero__out;
    _linha_extra_output_bus__out[6] = _linha_zero__out;
    _linha_extra_output_bus__out[7] = _linha_zero__out;
    _linha_extra_output_bus__out[8] = _linha_zero__out;
    _linha_extra_output_bus__out[9] = _linha_zero__out;
    _linha_extra_output_bus__out[10] = _linha_zero__out;
    _linha_extra_output_bus__out[11] = _linha_zero__out;
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
    // Generated from the component: Consumidor.POWER_P
    HIL_OutAO(0x4005, (float)_consumidor_power_meter__Pdc);
    // Generated from the component: Consumidor.POWER_PF
    HIL_OutAO(0x4006, (float)_consumidor_power_meter__k_factor);
    // Generated from the component: Consumidor.POWER_Q
    HIL_OutAO(0x4007, (float)_consumidor_power_meter__Qdc);
    // Generated from the component: Consumidor.POWER_S
    HIL_OutAO(0x4008, (float)_consumidor_power_meter__apparent);
    // Generated from the component: Consumidor.extra_out
    // Generated from the component: Linha.TRMsin
    // Generated from the component: Linha.I_RMS_calc.RMS
    _linha_i_rms_calc_rms__IN1 = _linha_ia_ia1__out;
    _linha_i_rms_calc_rms__IN2 = _linha_ib_ia1__out;
    _linha_i_rms_calc_rms__IN3 = _linha_ic_ia1__out;
    _linha_i_rms_calc_rms__dFract = _linha_meassm_mode_and_dfract__dFract;
    _linha_i_rms_calc_rms__mode = _linha_meassm_mode_and_dfract__mode;
    switch (_linha_i_rms_calc_rms__mode) {
    case 1:
        _linha_i_rms_calc_rms__rmsSum1 = 0.0;
        _linha_i_rms_calc_rms__rmsSum2 = 0.0;
        _linha_i_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _linha_i_rms_calc_rms__RMS1 = _linha_i_rms_calc_rms__IN1;
        _linha_i_rms_calc_rms__RMS2 = _linha_i_rms_calc_rms__IN2;
        _linha_i_rms_calc_rms__RMS3 = _linha_i_rms_calc_rms__IN3;
        break ;
    case 3:
        _linha_i_rms_calc_rms__rmsSum1 += _linha_i_rms_calc_rms__dFract * (_linha_i_rms_calc_rms__IN1 * _linha_i_rms_calc_rms__IN1);
        _linha_i_rms_calc_rms__rmsSum2 += _linha_i_rms_calc_rms__dFract * (_linha_i_rms_calc_rms__IN2 * _linha_i_rms_calc_rms__IN2);
        _linha_i_rms_calc_rms__rmsSum3 += _linha_i_rms_calc_rms__dFract * (_linha_i_rms_calc_rms__IN3 * _linha_i_rms_calc_rms__IN3);
        break ;
    case 4:
        _linha_i_rms_calc_rms__RMS1 = sqrt(_linha_i_rms_calc_rms__rmsSum1);
        _linha_i_rms_calc_rms__RMS2 = sqrt(_linha_i_rms_calc_rms__rmsSum2);
        _linha_i_rms_calc_rms__RMS3 = sqrt(_linha_i_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _linha_i_rms_calc_rms__RMS1 = fabs(_linha_i_rms_calc_rms__IN1);
        _linha_i_rms_calc_rms__RMS2 = fabs(_linha_i_rms_calc_rms__IN2);
        _linha_i_rms_calc_rms__RMS3 = fabs(_linha_i_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Linha.VLL_RMS_calc.RMS
    _linha_vll_rms_calc_rms__IN1 = _linha_vab_va1__out;
    _linha_vll_rms_calc_rms__IN2 = _linha_vbc_va1__out;
    _linha_vll_rms_calc_rms__IN3 = _linha_vca_va1__out;
    _linha_vll_rms_calc_rms__dFract = _linha_meassm_mode_and_dfract__dFract;
    _linha_vll_rms_calc_rms__mode = _linha_meassm_mode_and_dfract__mode;
    switch (_linha_vll_rms_calc_rms__mode) {
    case 1:
        _linha_vll_rms_calc_rms__rmsSum1 = 0.0;
        _linha_vll_rms_calc_rms__rmsSum2 = 0.0;
        _linha_vll_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _linha_vll_rms_calc_rms__RMS1 = _linha_vll_rms_calc_rms__IN1;
        _linha_vll_rms_calc_rms__RMS2 = _linha_vll_rms_calc_rms__IN2;
        _linha_vll_rms_calc_rms__RMS3 = _linha_vll_rms_calc_rms__IN3;
        break ;
    case 3:
        _linha_vll_rms_calc_rms__rmsSum1 += _linha_vll_rms_calc_rms__dFract * (_linha_vll_rms_calc_rms__IN1 * _linha_vll_rms_calc_rms__IN1);
        _linha_vll_rms_calc_rms__rmsSum2 += _linha_vll_rms_calc_rms__dFract * (_linha_vll_rms_calc_rms__IN2 * _linha_vll_rms_calc_rms__IN2);
        _linha_vll_rms_calc_rms__rmsSum3 += _linha_vll_rms_calc_rms__dFract * (_linha_vll_rms_calc_rms__IN3 * _linha_vll_rms_calc_rms__IN3);
        break ;
    case 4:
        _linha_vll_rms_calc_rms__RMS1 = sqrt(_linha_vll_rms_calc_rms__rmsSum1);
        _linha_vll_rms_calc_rms__RMS2 = sqrt(_linha_vll_rms_calc_rms__rmsSum2);
        _linha_vll_rms_calc_rms__RMS3 = sqrt(_linha_vll_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _linha_vll_rms_calc_rms__RMS1 = fabs(_linha_vll_rms_calc_rms__IN1);
        _linha_vll_rms_calc_rms__RMS2 = fabs(_linha_vll_rms_calc_rms__IN2);
        _linha_vll_rms_calc_rms__RMS3 = fabs(_linha_vll_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Linha.VLn_RMS_calc.RMS
    _linha_vln_rms_calc_rms__IN1 = _linha_van_va1__out;
    _linha_vln_rms_calc_rms__IN2 = _linha_vbn_va1__out;
    _linha_vln_rms_calc_rms__IN3 = _linha_vcn_va1__out;
    _linha_vln_rms_calc_rms__dFract = _linha_meassm_mode_and_dfract__dFract;
    _linha_vln_rms_calc_rms__mode = _linha_meassm_mode_and_dfract__mode;
    switch (_linha_vln_rms_calc_rms__mode) {
    case 1:
        _linha_vln_rms_calc_rms__rmsSum1 = 0.0;
        _linha_vln_rms_calc_rms__rmsSum2 = 0.0;
        _linha_vln_rms_calc_rms__rmsSum3 = 0.0;
        break ;
    case 2:
        _linha_vln_rms_calc_rms__RMS1 = _linha_vln_rms_calc_rms__IN1;
        _linha_vln_rms_calc_rms__RMS2 = _linha_vln_rms_calc_rms__IN2;
        _linha_vln_rms_calc_rms__RMS3 = _linha_vln_rms_calc_rms__IN3;
        break ;
    case 3:
        _linha_vln_rms_calc_rms__rmsSum1 += _linha_vln_rms_calc_rms__dFract * (_linha_vln_rms_calc_rms__IN1 * _linha_vln_rms_calc_rms__IN1);
        _linha_vln_rms_calc_rms__rmsSum2 += _linha_vln_rms_calc_rms__dFract * (_linha_vln_rms_calc_rms__IN2 * _linha_vln_rms_calc_rms__IN2);
        _linha_vln_rms_calc_rms__rmsSum3 += _linha_vln_rms_calc_rms__dFract * (_linha_vln_rms_calc_rms__IN3 * _linha_vln_rms_calc_rms__IN3);
        break ;
    case 4:
        _linha_vln_rms_calc_rms__RMS1 = sqrt(_linha_vln_rms_calc_rms__rmsSum1);
        _linha_vln_rms_calc_rms__RMS2 = sqrt(_linha_vln_rms_calc_rms__rmsSum2);
        _linha_vln_rms_calc_rms__RMS3 = sqrt(_linha_vln_rms_calc_rms__rmsSum3);
        break ;
    case 5:
        _linha_vln_rms_calc_rms__RMS1 = fabs(_linha_vln_rms_calc_rms__IN1);
        _linha_vln_rms_calc_rms__RMS2 = fabs(_linha_vln_rms_calc_rms__IN2);
        _linha_vln_rms_calc_rms__RMS3 = fabs(_linha_vln_rms_calc_rms__IN3);
        break ;
    }
    // Generated from the component: Linha.termSubMode
    // Generated from the component: Linha.PLL.abc to dq.alpha beta to dq
    _linha_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_linha_pll_unit_delay1__out);
    _linha_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_linha_pll_unit_delay1__out);
    _linha_pll_abc_to_dq_alpha_beta_to_dq__d = _linha_pll_abc_to_dq_alpha_beta_to_dq__k2 * _linha_pll_abc_to_dq_abc_to_alpha_beta__alpha - _linha_pll_abc_to_dq_alpha_beta_to_dq__k1 * _linha_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _linha_pll_abc_to_dq_alpha_beta_to_dq__q = _linha_pll_abc_to_dq_alpha_beta_to_dq__k1 * _linha_pll_abc_to_dq_abc_to_alpha_beta__alpha + _linha_pll_abc_to_dq_alpha_beta_to_dq__k2 * _linha_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Linha.TRMz
    // Generated from the component: Linha.POWER_P
    HIL_OutAO(0x4016, (float)_linha_power_meter__Pdc);
    // Generated from the component: Linha.POWER_PF
    HIL_OutAO(0x4017, (float)_linha_power_meter__k_factor);
    // Generated from the component: Linha.POWER_Q
    HIL_OutAO(0x4018, (float)_linha_power_meter__Qdc);
    // Generated from the component: Linha.POWER_S
    HIL_OutAO(0x4019, (float)_linha_power_meter__apparent);
    // Generated from the component: Linha.extra_out
    // Generated from the component: Consumidor.IA_RMS
    HIL_OutAO(0x4001, (float)_consumidor_i_rms_calc_rms__RMS1);
    // Generated from the component: Consumidor.IB_RMS
    HIL_OutAO(0x4002, (float)_consumidor_i_rms_calc_rms__RMS2);
    // Generated from the component: Consumidor.IC_RMS
    HIL_OutAO(0x4003, (float)_consumidor_i_rms_calc_rms__RMS3);
    // Generated from the component: Consumidor.sumI_RMS
    _consumidor_sumi_rms__out = _consumidor_i_rms_calc_rms__RMS1 + _consumidor_i_rms_calc_rms__RMS2 + _consumidor_i_rms_calc_rms__RMS3;
    // Generated from the component: Consumidor.VAB_RMS
    HIL_OutAO(0x4009, (float)_consumidor_vll_rms_calc_rms__RMS1);
    // Generated from the component: Consumidor.VBC_RMS
    HIL_OutAO(0x400b, (float)_consumidor_vll_rms_calc_rms__RMS2);
    // Generated from the component: Consumidor.VCA_RMS
    HIL_OutAO(0x400d, (float)_consumidor_vll_rms_calc_rms__RMS3);
    // Generated from the component: Consumidor.sumVLL_RMS
    _consumidor_sumvll_rms__out = _consumidor_vll_rms_calc_rms__RMS1 + _consumidor_vll_rms_calc_rms__RMS2 + _consumidor_vll_rms_calc_rms__RMS3;
    // Generated from the component: Consumidor.VAn_RMS
    HIL_OutAO(0x400a, (float)_consumidor_vln_rms_calc_rms__RMS1);
    // Generated from the component: Consumidor.VBn_RMS
    HIL_OutAO(0x400c, (float)_consumidor_vln_rms_calc_rms__RMS2);
    // Generated from the component: Consumidor.VCn_RMS
    HIL_OutAO(0x400e, (float)_consumidor_vln_rms_calc_rms__RMS3);
    // Generated from the component: Consumidor.sumVLn_RMS
    _consumidor_sumvln_rms__out = _consumidor_vln_rms_calc_rms__RMS1 + _consumidor_vln_rms_calc_rms__RMS2 + _consumidor_vln_rms_calc_rms__RMS3;
    // Generated from the component: Consumidor.PLL.abc to dq.LPF_d
    _consumidor_pll_abc_to_dq_lpf_d__previous_filtered_value = _consumidor_pll_abc_to_dq_lpf_d__filtered_value;
    _consumidor_pll_abc_to_dq_lpf_d__filtered_value = _consumidor_pll_abc_to_dq_lpf_d__previous_in * (1.0 * 62.83185307 * 1e-06) + _consumidor_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1.0 * 62.83185307 * 1e-06 );
    _consumidor_pll_abc_to_dq_lpf_d__out = _consumidor_pll_abc_to_dq_lpf_d__filtered_value;
    _consumidor_pll_abc_to_dq_lpf_d__previous_in = _consumidor_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Consumidor.PLL.abc to dq.LPF_q
    _consumidor_pll_abc_to_dq_lpf_q__previous_filtered_value = _consumidor_pll_abc_to_dq_lpf_q__filtered_value;
    _consumidor_pll_abc_to_dq_lpf_q__filtered_value = _consumidor_pll_abc_to_dq_lpf_q__previous_in * (1.0 * 62.83185307 * 1e-06) + _consumidor_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1.0 * 62.83185307 * 1e-06 );
    _consumidor_pll_abc_to_dq_lpf_q__out = _consumidor_pll_abc_to_dq_lpf_q__filtered_value;
    _consumidor_pll_abc_to_dq_lpf_q__previous_in = _consumidor_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Linha.IA_RMS
    HIL_OutAO(0x4012, (float)_linha_i_rms_calc_rms__RMS1);
    // Generated from the component: Linha.IB_RMS
    HIL_OutAO(0x4013, (float)_linha_i_rms_calc_rms__RMS2);
    // Generated from the component: Linha.IC_RMS
    HIL_OutAO(0x4014, (float)_linha_i_rms_calc_rms__RMS3);
    // Generated from the component: Linha.sumI_RMS
    _linha_sumi_rms__out = _linha_i_rms_calc_rms__RMS1 + _linha_i_rms_calc_rms__RMS2 + _linha_i_rms_calc_rms__RMS3;
    // Generated from the component: Linha.VAB_RMS
    HIL_OutAO(0x401a, (float)_linha_vll_rms_calc_rms__RMS1);
    // Generated from the component: Linha.VBC_RMS
    HIL_OutAO(0x401c, (float)_linha_vll_rms_calc_rms__RMS2);
    // Generated from the component: Linha.VCA_RMS
    HIL_OutAO(0x401e, (float)_linha_vll_rms_calc_rms__RMS3);
    // Generated from the component: Linha.sumVLL_RMS
    _linha_sumvll_rms__out = _linha_vll_rms_calc_rms__RMS1 + _linha_vll_rms_calc_rms__RMS2 + _linha_vll_rms_calc_rms__RMS3;
    // Generated from the component: Linha.VAn_RMS
    HIL_OutAO(0x401b, (float)_linha_vln_rms_calc_rms__RMS1);
    // Generated from the component: Linha.VBn_RMS
    HIL_OutAO(0x401d, (float)_linha_vln_rms_calc_rms__RMS2);
    // Generated from the component: Linha.VCn_RMS
    HIL_OutAO(0x401f, (float)_linha_vln_rms_calc_rms__RMS3);
    // Generated from the component: Linha.sumVLn_RMS
    _linha_sumvln_rms__out = _linha_vln_rms_calc_rms__RMS1 + _linha_vln_rms_calc_rms__RMS2 + _linha_vln_rms_calc_rms__RMS3;
    // Generated from the component: Linha.PLL.abc to dq.LPF_d
    _linha_pll_abc_to_dq_lpf_d__previous_filtered_value = _linha_pll_abc_to_dq_lpf_d__filtered_value;
    _linha_pll_abc_to_dq_lpf_d__filtered_value = _linha_pll_abc_to_dq_lpf_d__previous_in * (1.0 * 62.83185307 * 1e-06) + _linha_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1.0 * 62.83185307 * 1e-06 );
    _linha_pll_abc_to_dq_lpf_d__out = _linha_pll_abc_to_dq_lpf_d__filtered_value;
    _linha_pll_abc_to_dq_lpf_d__previous_in = _linha_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Linha.PLL.abc to dq.LPF_q
    _linha_pll_abc_to_dq_lpf_q__previous_filtered_value = _linha_pll_abc_to_dq_lpf_q__filtered_value;
    _linha_pll_abc_to_dq_lpf_q__filtered_value = _linha_pll_abc_to_dq_lpf_q__previous_in * (1.0 * 62.83185307 * 1e-06) + _linha_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1.0 * 62.83185307 * 1e-06 );
    _linha_pll_abc_to_dq_lpf_q__out = _linha_pll_abc_to_dq_lpf_q__filtered_value;
    _linha_pll_abc_to_dq_lpf_q__previous_in = _linha_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Consumidor.gainI_RMS
    _consumidor_gaini_rms__out = 0.3333333333333333 * _consumidor_sumi_rms__out;
    // Generated from the component: Consumidor.gainVLL_RMS
    _consumidor_gainvll_rms__out = 0.3333333333333333 * _consumidor_sumvll_rms__out;
    // Generated from the component: Consumidor.gainVLn_RMS
    _consumidor_gainvln_rms__out = 0.3333333333333333 * _consumidor_sumvln_rms__out;
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
    // Generated from the component: Linha.gainI_RMS
    _linha_gaini_rms__out = 0.3333333333333333 * _linha_sumi_rms__out;
    // Generated from the component: Linha.gainVLL_RMS
    _linha_gainvll_rms__out = 0.3333333333333333 * _linha_sumvll_rms__out;
    // Generated from the component: Linha.gainVLn_RMS
    _linha_gainvln_rms__out = 0.3333333333333333 * _linha_sumvln_rms__out;
    // Generated from the component: Linha.TRMd
    // Generated from the component: Linha.PLL.normalize
    _linha_pll_normalize__in1 = _linha_pll_abc_to_dq_lpf_d__out;
    _linha_pll_normalize__in2 = _linha_pll_abc_to_dq_lpf_q__out;
    _linha_pll_normalize__pk = (powf(_linha_pll_normalize__in1, 2.0) + powf(_linha_pll_normalize__in2, 2.0));
    _linha_pll_normalize__pk = sqrt(_linha_pll_normalize__pk);
    if (_linha_pll_normalize__pk < 0.1) {
        _linha_pll_normalize__in2_pu = _linha_pll_normalize__in2 / 0.1;
    }
    else {
        _linha_pll_normalize__in2_pu = _linha_pll_normalize__in2 / _linha_pll_normalize__pk;
    }
    // Generated from the component: Linha.TRMq
    // Generated from the component: Consumidor.I_RMS
    HIL_OutAO(0x4004, (float)_consumidor_gaini_rms__out);
    // Generated from the component: Consumidor.VLL_RMS
    HIL_OutAO(0x400f, (float)_consumidor_gainvll_rms__out);
    // Generated from the component: Consumidor.VLn_RMS
    HIL_OutAO(0x4010, (float)_consumidor_gainvln_rms__out);
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
    _consumidor_output_bus__out[13] = _consumidor_gainvln_rms__out;
    _consumidor_output_bus__out[14] = _consumidor_vll_rms_calc_rms__RMS1;
    _consumidor_output_bus__out[15] = _consumidor_vll_rms_calc_rms__RMS2;
    _consumidor_output_bus__out[16] = _consumidor_vll_rms_calc_rms__RMS3;
    _consumidor_output_bus__out[17] = _consumidor_gainvll_rms__out;
    _consumidor_output_bus__out[18] = _consumidor_i_rms_calc_rms__RMS1;
    _consumidor_output_bus__out[19] = _consumidor_i_rms_calc_rms__RMS2;
    _consumidor_output_bus__out[20] = _consumidor_i_rms_calc_rms__RMS3;
    _consumidor_output_bus__out[21] = _consumidor_gaini_rms__out;
    _consumidor_output_bus__out[22] = _consumidor_power_meter__Pdc;
    _consumidor_output_bus__out[23] = _consumidor_power_meter__Qdc;
    _consumidor_output_bus__out[24] = _consumidor_power_meter__apparent;
    _consumidor_output_bus__out[25] = _consumidor_power_meter__k_factor;
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
    // Generated from the component: Linha.I_RMS
    HIL_OutAO(0x4015, (float)_linha_gaini_rms__out);
    // Generated from the component: Linha.VLL_RMS
    HIL_OutAO(0x4020, (float)_linha_gainvll_rms__out);
    // Generated from the component: Linha.VLn_RMS
    HIL_OutAO(0x4021, (float)_linha_gainvln_rms__out);
    // Generated from the component: Linha.output_bus
    _linha_output_bus__out[0] = _linha_van_va1__out;
    _linha_output_bus__out[1] = _linha_vbn_va1__out;
    _linha_output_bus__out[2] = _linha_vcn_va1__out;
    _linha_output_bus__out[3] = _linha_vab_va1__out;
    _linha_output_bus__out[4] = _linha_vbc_va1__out;
    _linha_output_bus__out[5] = _linha_vca_va1__out;
    _linha_output_bus__out[6] = _linha_ia_ia1__out;
    _linha_output_bus__out[7] = _linha_ib_ia1__out;
    _linha_output_bus__out[8] = _linha_ic_ia1__out;
    _linha_output_bus__out[9] = _linha_pll_to_hz__out;
    _linha_output_bus__out[10] = _linha_vln_rms_calc_rms__RMS1;
    _linha_output_bus__out[11] = _linha_vln_rms_calc_rms__RMS2;
    _linha_output_bus__out[12] = _linha_vln_rms_calc_rms__RMS3;
    _linha_output_bus__out[13] = _linha_gainvln_rms__out;
    _linha_output_bus__out[14] = _linha_vll_rms_calc_rms__RMS1;
    _linha_output_bus__out[15] = _linha_vll_rms_calc_rms__RMS2;
    _linha_output_bus__out[16] = _linha_vll_rms_calc_rms__RMS3;
    _linha_output_bus__out[17] = _linha_gainvll_rms__out;
    _linha_output_bus__out[18] = _linha_i_rms_calc_rms__RMS1;
    _linha_output_bus__out[19] = _linha_i_rms_calc_rms__RMS2;
    _linha_output_bus__out[20] = _linha_i_rms_calc_rms__RMS3;
    _linha_output_bus__out[21] = _linha_gaini_rms__out;
    _linha_output_bus__out[22] = _linha_power_meter__Pdc;
    _linha_output_bus__out[23] = _linha_power_meter__Qdc;
    _linha_output_bus__out[24] = _linha_power_meter__apparent;
    _linha_output_bus__out[25] = _linha_power_meter__k_factor;
    _linha_output_bus__out[26] = _linha_zero__out;
    _linha_output_bus__out[27] = _linha_zero__out;
    _linha_output_bus__out[28] = _linha_zero__out;
    _linha_output_bus__out[29] = _linha_zero__out;
    // Generated from the component: Linha.PLL.PID.Kd
    _linha_pll_pid_kd__out = 1.0 * _linha_pll_normalize__in2_pu;
    // Generated from the component: Linha.PLL.PID.Ki
    _linha_pll_pid_ki__out = 3200.0 * _linha_pll_normalize__in2_pu;
    // Generated from the component: Linha.PLL.PID.Kp
    _linha_pll_pid_kp__out = 100.0 * _linha_pll_normalize__in2_pu;
    // Generated from the component: Linha.PLL.term_pk
    // Generated from the component: Consumidor.Out
    // Generated from the component: Consumidor.PLL.PID.Sum8
    _consumidor_pll_pid_sum8__out = _consumidor_pll_pid_kd__out - _consumidor_pll_pid_integrator2__out;
    // Generated from the component: Linha.Out
    // Generated from the component: Linha.PLL.PID.Sum8
    _linha_pll_pid_sum8__out = _linha_pll_pid_kd__out - _linha_pll_pid_integrator2__out;
    // Generated from the component: Consumidor.PLL.PID.Gain1
    _consumidor_pll_pid_gain1__out = 714.2857 * _consumidor_pll_pid_sum8__out;
    // Generated from the component: Linha.PLL.PID.Gain1
    _linha_pll_pid_gain1__out = 714.2857 * _linha_pll_pid_sum8__out;
    // Generated from the component: Consumidor.PLL.PID.Sum5
    _consumidor_pll_pid_sum5__out = _consumidor_pll_pid_kp__out + _consumidor_pll_pid_gain1__out + _consumidor_pll_pid_integrator1__out;
    // Generated from the component: Linha.PLL.PID.Sum5
    _linha_pll_pid_sum5__out = _linha_pll_pid_kp__out + _linha_pll_pid_gain1__out + _linha_pll_pid_integrator1__out;
    // Generated from the component: Consumidor.PLL.PID.Limit1
    _consumidor_pll_pid_limit1__out = MIN(MAX(_consumidor_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Linha.PLL.PID.Limit1
    _linha_pll_pid_limit1__out = MIN(MAX(_linha_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Consumidor.PLL.PID.Sum6
    _consumidor_pll_pid_sum6__out =  - _consumidor_pll_pid_sum5__out + _consumidor_pll_pid_limit1__out;
    // Generated from the component: Consumidor.PLL.Rate Limiter1
    if (_consumidor_pll_rate_limiter1__first_step) {
        _consumidor_pll_rate_limiter1__out = _consumidor_pll_pid_limit1__out;
        _consumidor_pll_rate_limiter1__state = _consumidor_pll_pid_limit1__out;
    } else {
        _consumidor_pll_rate_limiter1__out = _consumidor_pll_pid_limit1__out;
        if (_consumidor_pll_pid_limit1__out - _consumidor_pll_rate_limiter1__state > 7.539822368615503e-05)
            _consumidor_pll_rate_limiter1__out = _consumidor_pll_rate_limiter1__state + (7.539822368615503e-05);
        if (_consumidor_pll_pid_limit1__out - _consumidor_pll_rate_limiter1__state < -7.539822368615503e-05)
            _consumidor_pll_rate_limiter1__out = _consumidor_pll_rate_limiter1__state + (-7.539822368615503e-05);
    }
    // Generated from the component: Consumidor.PLL.integrator
    _consumidor_pll_integrator__in = _consumidor_pll_pid_limit1__out;
    _consumidor_pll_integrator__out += 1e-06 * _consumidor_pll_integrator__in;
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
    // Generated from the component: Linha.PLL.PID.Sum6
    _linha_pll_pid_sum6__out =  - _linha_pll_pid_sum5__out + _linha_pll_pid_limit1__out;
    // Generated from the component: Linha.PLL.Rate Limiter1
    if (_linha_pll_rate_limiter1__first_step) {
        _linha_pll_rate_limiter1__out = _linha_pll_pid_limit1__out;
        _linha_pll_rate_limiter1__state = _linha_pll_pid_limit1__out;
    } else {
        _linha_pll_rate_limiter1__out = _linha_pll_pid_limit1__out;
        if (_linha_pll_pid_limit1__out - _linha_pll_rate_limiter1__state > 7.539822368615503e-05)
            _linha_pll_rate_limiter1__out = _linha_pll_rate_limiter1__state + (7.539822368615503e-05);
        if (_linha_pll_pid_limit1__out - _linha_pll_rate_limiter1__state < -7.539822368615503e-05)
            _linha_pll_rate_limiter1__out = _linha_pll_rate_limiter1__state + (-7.539822368615503e-05);
    }
    // Generated from the component: Linha.PLL.integrator
    _linha_pll_integrator__in = _linha_pll_pid_limit1__out;
    _linha_pll_integrator__out += 1e-06 * _linha_pll_integrator__in;
    if (_linha_pll_integrator__in >= 0.0) {
        if (_linha_pll_integrator__out >= 6.283185307179586) {
            _linha_pll_integrator__out -= 6.283185307179586;
        }
    }
    else {
        if (_linha_pll_integrator__out <= -6.283185307179586) {
            _linha_pll_integrator__out += 6.283185307179586;
        }
    }
    // Generated from the component: Consumidor.PLL.PID.Kb
    _consumidor_pll_pid_kb__out = 1.0 * _consumidor_pll_pid_sum6__out;
    // Generated from the component: Consumidor.PLL.LPF.LPF
    X_UnInt32 _consumidor_pll_lpf_lpf__i;
    _consumidor_pll_lpf_lpf__a_sum = 0.0f;
    _consumidor_pll_lpf_lpf__b_sum = 0.0f;
    _consumidor_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_consumidor_pll_lpf_lpf__i = 0; _consumidor_pll_lpf_lpf__i < 2; _consumidor_pll_lpf_lpf__i++) {
        _consumidor_pll_lpf_lpf__b_sum += _consumidor_pll_lpf_lpf__b_coeff[_consumidor_pll_lpf_lpf__i] * _consumidor_pll_lpf_lpf__states[_consumidor_pll_lpf_lpf__i + 0];
    }
    for (_consumidor_pll_lpf_lpf__i = 1; _consumidor_pll_lpf_lpf__i > 0; _consumidor_pll_lpf_lpf__i--) {
        _consumidor_pll_lpf_lpf__a_sum += _consumidor_pll_lpf_lpf__a_coeff[_consumidor_pll_lpf_lpf__i + 1] * _consumidor_pll_lpf_lpf__states[_consumidor_pll_lpf_lpf__i];
    }
    _consumidor_pll_lpf_lpf__a_sum += _consumidor_pll_lpf_lpf__states[0] * _consumidor_pll_lpf_lpf__a_coeff[1];
    _consumidor_pll_lpf_lpf__delay_line_in = _consumidor_pll_rate_limiter1__out - _consumidor_pll_lpf_lpf__a_sum;
    _consumidor_pll_lpf_lpf__out = _consumidor_pll_lpf_lpf__b_sum;
    // Generated from the component: Linha.PLL.PID.Kb
    _linha_pll_pid_kb__out = 1.0 * _linha_pll_pid_sum6__out;
    // Generated from the component: Linha.PLL.LPF.LPF
    X_UnInt32 _linha_pll_lpf_lpf__i;
    _linha_pll_lpf_lpf__a_sum = 0.0f;
    _linha_pll_lpf_lpf__b_sum = 0.0f;
    _linha_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_linha_pll_lpf_lpf__i = 0; _linha_pll_lpf_lpf__i < 2; _linha_pll_lpf_lpf__i++) {
        _linha_pll_lpf_lpf__b_sum += _linha_pll_lpf_lpf__b_coeff[_linha_pll_lpf_lpf__i] * _linha_pll_lpf_lpf__states[_linha_pll_lpf_lpf__i + 0];
    }
    for (_linha_pll_lpf_lpf__i = 1; _linha_pll_lpf_lpf__i > 0; _linha_pll_lpf_lpf__i--) {
        _linha_pll_lpf_lpf__a_sum += _linha_pll_lpf_lpf__a_coeff[_linha_pll_lpf_lpf__i + 1] * _linha_pll_lpf_lpf__states[_linha_pll_lpf_lpf__i];
    }
    _linha_pll_lpf_lpf__a_sum += _linha_pll_lpf_lpf__states[0] * _linha_pll_lpf_lpf__a_coeff[1];
    _linha_pll_lpf_lpf__delay_line_in = _linha_pll_rate_limiter1__out - _linha_pll_lpf_lpf__a_sum;
    _linha_pll_lpf_lpf__out = _linha_pll_lpf_lpf__b_sum;
    // Generated from the component: Consumidor.PLL.PID.Sum7
    _consumidor_pll_pid_sum7__out = _consumidor_pll_pid_ki__out + _consumidor_pll_pid_kb__out;
    // Generated from the component: Linha.PLL.PID.Sum7
    _linha_pll_pid_sum7__out = _linha_pll_pid_ki__out + _linha_pll_pid_kb__out;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Consumidor.PLL.PID.Integrator1
    _consumidor_pll_pid_integrator1__state += _consumidor_pll_pid_sum7__out * 1e-06;
    // Generated from the component: Consumidor.PLL.PID.Integrator2
    _consumidor_pll_pid_integrator2__state += _consumidor_pll_pid_gain1__out * 1e-06;
    // Generated from the component: Consumidor.PLL.Unit Delay1
    _consumidor_pll_unit_delay1__state = _consumidor_pll_integrator__out;
    // Generated from the component: Linha.PLL.PID.Integrator1
    _linha_pll_pid_integrator1__state += _linha_pll_pid_sum7__out * 1e-06;
    // Generated from the component: Linha.PLL.PID.Integrator2
    _linha_pll_pid_integrator2__state += _linha_pll_pid_gain1__out * 1e-06;
    // Generated from the component: Linha.PLL.Unit Delay1
    _linha_pll_unit_delay1__state = _linha_pll_integrator__out;
    // Generated from the component: Consumidor.measSM.mode_and_dFract
    // Generated from the component: Linha.measSM.mode_and_dFract
    // Generated from the component: Consumidor.I_RMS_calc.RMS
    // Generated from the component: Consumidor.VLL_RMS_calc.RMS
    // Generated from the component: Consumidor.VLn_RMS_calc.RMS
    // Generated from the component: Linha.I_RMS_calc.RMS
    // Generated from the component: Linha.VLL_RMS_calc.RMS
    // Generated from the component: Linha.VLn_RMS_calc.RMS
    // Generated from the component: Consumidor.PLL.normalize
    // Generated from the component: Linha.PLL.normalize
    // Generated from the component: Consumidor.PLL.Rate Limiter1
    if (_consumidor_pll_pid_limit1__out - _consumidor_pll_rate_limiter1__state > 7.539822368615503e-05)
        _consumidor_pll_rate_limiter1__state += (7.539822368615503e-05);
    else  if (_consumidor_pll_pid_limit1__out - _consumidor_pll_rate_limiter1__state < -7.539822368615503e-05)
        _consumidor_pll_rate_limiter1__state += (-7.539822368615503e-05);
    else
        _consumidor_pll_rate_limiter1__state = _consumidor_pll_pid_limit1__out;
    _consumidor_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Consumidor.PLL.integrator
    // Generated from the component: Linha.PLL.Rate Limiter1
    if (_linha_pll_pid_limit1__out - _linha_pll_rate_limiter1__state > 7.539822368615503e-05)
        _linha_pll_rate_limiter1__state += (7.539822368615503e-05);
    else  if (_linha_pll_pid_limit1__out - _linha_pll_rate_limiter1__state < -7.539822368615503e-05)
        _linha_pll_rate_limiter1__state += (-7.539822368615503e-05);
    else
        _linha_pll_rate_limiter1__state = _linha_pll_pid_limit1__out;
    _linha_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Linha.PLL.integrator
    // Generated from the component: Consumidor.PLL.LPF.LPF
    for (_consumidor_pll_lpf_lpf__i = 1; _consumidor_pll_lpf_lpf__i > 0; _consumidor_pll_lpf_lpf__i--) {
        _consumidor_pll_lpf_lpf__states[_consumidor_pll_lpf_lpf__i] = _consumidor_pll_lpf_lpf__states[_consumidor_pll_lpf_lpf__i - 1];
    }
    _consumidor_pll_lpf_lpf__states[0] = _consumidor_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Linha.PLL.LPF.LPF
    for (_linha_pll_lpf_lpf__i = 1; _linha_pll_lpf_lpf__i > 0; _linha_pll_lpf_lpf__i--) {
        _linha_pll_lpf_lpf__states[_linha_pll_lpf_lpf__i] = _linha_pll_lpf_lpf__states[_linha_pll_lpf_lpf__i - 1];
    }
    _linha_pll_lpf_lpf__states[0] = _linha_pll_lpf_lpf__delay_line_in;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------