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
float __50__instantaneous_overcurrent1_block__out = 0.0;
float __50__instantaneous_overcurrent1_in__out = 3.0;
float __50__instantaneous_overcurrent1_mem_en_rst__out = 1.0;
float __50__instantaneous_overcurrent1_oc_threshold_pu__out = 10.0;
float __50__instantaneous_overcurrent1_trip_memory_sr1__out;
float __50__instantaneous_overcurrent1_trip_memory_sr1__out_n;
float __51__ac_inverse_time_overcurrent1_block__out = 0.0;
float __51__ac_inverse_time_overcurrent1_in__out = 3.0;
float __51__ac_inverse_time_overcurrent1_mem_en_rst__out = 1.0;
float __51__ac_inverse_time_overcurrent1_oc_threshold_pu__out = 3.0;
float __51__ac_inverse_time_overcurrent1_time_dial_pu__out = 0.8;
float __51__ac_inverse_time_overcurrent1_trip_memory_sr1__out;
float __51__ac_inverse_time_overcurrent1_trip_memory_sr1__out_n;
float __51__ac_inverse_time_overcurrent1_reset_mode__out = 0.0;
float _consumidor_ia_ia1__out;
float _consumidor_ib_ia1__out;
float _consumidor_ic_ia1__out;
float _consumidor_pll_pid_integrator1__out;
float _consumidor_pll_pid_integrator2__out;
float _consumidor_pll_unit_delay1__out;
float _consumidor_pll_to_hz__out;
float _consumidor_vab_va1__out;
float _consumidor_van_va1__out;
float _consumidor_vbc_va1__out;
float _consumidor_vbn_va1__out;
float _consumidor_vca_va1__out;
float _consumidor_vcn_va1__out;
float _consumidor_zero__out = 0.0;
X_Int32 _falta_fault_select__out;
X_Int32 _faltaconsumidor_fault_select__out;
float _fuselinka_cpu_trans_output__out;
float _fuselinka1_cpu_trans_output__out;
float _fuselinka3_cpu_trans_output__out;
float _fuselinkb_cpu_trans_output__out;
float _fuselinkb1_cpu_trans_output__out;
float _fuselinkb2_cpu_trans_output__out;
float _fuselinkb5_cpu_trans_output__out;
float _linha_ia_ia1__out;
float _linha_ib_ia1__out;
float _linha_ic_ia1__out;
float _linha_pll_pid_integrator1__out;
float _linha_pll_pid_integrator2__out;
float _linha_pll_unit_delay1__out;
float _linha_pll_to_hz__out;
float _linha_vab_va1__out;
float _linha_van_va1__out;
float _linha_vbc_va1__out;
float _linha_vbn_va1__out;
float _linha_vca_va1__out;
float _linha_vcn_va1__out;
float _linha_zero__out = 0.0;
X_Int32 _memoria50__out;
X_Int32 _memoria51__out;
float _rele_ia_ia1__out;
float _rele_ib_ia1__out;
float _rele_ic_ia1__out;
float _rele_pll_pid_integrator1__out;
float _rele_pll_pid_integrator2__out;
float _rele_pll_unit_delay1__out;
float _rele_pll_to_hz__out;
float _rele_vab_va1__out;
float _rele_van_va1__out;
float _rele_vbc_va1__out;
float _rele_vbn_va1__out;
float _rele_vca_va1__out;
float _rele_vcn_va1__out;
float _rele_zero__out = 0.0;
X_Int32 _s1_ctc_wrapper__feedback_out = 0;
X_Int32 _s2_ctc_wrapper__feedback_out = 0;
X_Int32 _s3_ctc_wrapper__feedback_out = 0;
X_Int32 _s4_ctc_wrapper__feedback_out = 0;
X_Int32 _s5_ctc_wrapper__feedback_out = 0;
X_Int32 _s6_ctc_wrapper__feedback_out = 0;
X_Int32 _s7_ctc_wrapper__feedback_out = 0;
float __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator2__out;
float __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out;
float __50__instantaneous_overcurrent1_trip_mem__tmp;
float __51__ac_inverse_time_overcurrent1_trip_mem__tmp;
float _consumidor_pll_sin__out;

float _consumidor_meassm_mode_and_dfract__Freq;


float _consumidor_meassm_mode_and_dfract__dFract;
X_Int32 _consumidor_meassm_mode_and_dfract__mode;
X_Int32 _consumidor_meassm_mode_and_dfract__submode;
float _consumidor_pll_abc_to_dq_abc_to_alpha_beta__alpha;
float _consumidor_pll_abc_to_dq_abc_to_alpha_beta__beta;
float _consumidor_pll_abc_to_dq_abc_to_alpha_beta__gamma;
float _consumidor_extra_output_bus__out[12];

X_Int32 _falta_control_state_machine__in;


X_Int32 _falta_control_state_machine__Ca;
X_Int32 _falta_control_state_machine__Cb;
X_Int32 _falta_control_state_machine__Cc;
X_Int32 _falta_control_state_machine__Cn;

X_Int32 _faltaconsumidor_control_state_machine__in;


X_Int32 _faltaconsumidor_control_state_machine__Ca;
X_Int32 _faltaconsumidor_control_state_machine__Cb;
X_Int32 _faltaconsumidor_control_state_machine__Cc;
X_Int32 _faltaconsumidor_control_state_machine__Cn;
float _linha_pll_sin__out;

float _linha_meassm_mode_and_dfract__Freq;


float _linha_meassm_mode_and_dfract__dFract;
X_Int32 _linha_meassm_mode_and_dfract__mode;
X_Int32 _linha_meassm_mode_and_dfract__submode;
float _linha_pll_abc_to_dq_abc_to_alpha_beta__alpha;
float _linha_pll_abc_to_dq_abc_to_alpha_beta__beta;
float _linha_pll_abc_to_dq_abc_to_alpha_beta__gamma;
float _linha_extra_output_bus__out[12];
X_Int32 _logical_operator3__out;
float _rele_pll_sin__out;

float _rele_meassm_mode_and_dfract__Freq;


float _rele_meassm_mode_and_dfract__dFract;
X_Int32 _rele_meassm_mode_and_dfract__mode;
X_Int32 _rele_meassm_mode_and_dfract__submode;
float _rele_pll_abc_to_dq_abc_to_alpha_beta__alpha;
float _rele_pll_abc_to_dq_abc_to_alpha_beta__beta;
float _rele_pll_abc_to_dq_abc_to_alpha_beta__gamma;
float _rele_extra_output_bus__out[12];

float _consumidor_i_rms_calc_rms__IN1;
float _consumidor_i_rms_calc_rms__IN2;
float _consumidor_i_rms_calc_rms__IN3;
float _consumidor_i_rms_calc_rms__dFract;
X_Int32 _consumidor_i_rms_calc_rms__mode;


float _consumidor_i_rms_calc_rms__RMS1;
float _consumidor_i_rms_calc_rms__RMS2;
float _consumidor_i_rms_calc_rms__RMS3;

float _consumidor_vll_rms_calc_rms__IN1;
float _consumidor_vll_rms_calc_rms__IN2;
float _consumidor_vll_rms_calc_rms__IN3;
float _consumidor_vll_rms_calc_rms__dFract;
X_Int32 _consumidor_vll_rms_calc_rms__mode;


float _consumidor_vll_rms_calc_rms__RMS1;
float _consumidor_vll_rms_calc_rms__RMS2;
float _consumidor_vll_rms_calc_rms__RMS3;

float _consumidor_vln_rms_calc_rms__IN1;
float _consumidor_vln_rms_calc_rms__IN2;
float _consumidor_vln_rms_calc_rms__IN3;
float _consumidor_vln_rms_calc_rms__dFract;
X_Int32 _consumidor_vln_rms_calc_rms__mode;


float _consumidor_vln_rms_calc_rms__RMS1;
float _consumidor_vln_rms_calc_rms__RMS2;
float _consumidor_vln_rms_calc_rms__RMS3;
float _consumidor_pll_abc_to_dq_alpha_beta_to_dq__d;
float _consumidor_pll_abc_to_dq_alpha_beta_to_dq__q;
float _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k1;
float _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k2;

float _linha_i_rms_calc_rms__IN1;
float _linha_i_rms_calc_rms__IN2;
float _linha_i_rms_calc_rms__IN3;
float _linha_i_rms_calc_rms__dFract;
X_Int32 _linha_i_rms_calc_rms__mode;


float _linha_i_rms_calc_rms__RMS1;
float _linha_i_rms_calc_rms__RMS2;
float _linha_i_rms_calc_rms__RMS3;

float _linha_vll_rms_calc_rms__IN1;
float _linha_vll_rms_calc_rms__IN2;
float _linha_vll_rms_calc_rms__IN3;
float _linha_vll_rms_calc_rms__dFract;
X_Int32 _linha_vll_rms_calc_rms__mode;


float _linha_vll_rms_calc_rms__RMS1;
float _linha_vll_rms_calc_rms__RMS2;
float _linha_vll_rms_calc_rms__RMS3;

float _linha_vln_rms_calc_rms__IN1;
float _linha_vln_rms_calc_rms__IN2;
float _linha_vln_rms_calc_rms__IN3;
float _linha_vln_rms_calc_rms__dFract;
X_Int32 _linha_vln_rms_calc_rms__mode;


float _linha_vln_rms_calc_rms__RMS1;
float _linha_vln_rms_calc_rms__RMS2;
float _linha_vln_rms_calc_rms__RMS3;
float _linha_pll_abc_to_dq_alpha_beta_to_dq__d;
float _linha_pll_abc_to_dq_alpha_beta_to_dq__q;
float _linha_pll_abc_to_dq_alpha_beta_to_dq__k1;
float _linha_pll_abc_to_dq_alpha_beta_to_dq__k2;

float _rele_i_rms_calc_rms__IN1;
float _rele_i_rms_calc_rms__IN2;
float _rele_i_rms_calc_rms__IN3;
float _rele_i_rms_calc_rms__dFract;
X_Int32 _rele_i_rms_calc_rms__mode;


float _rele_i_rms_calc_rms__RMS1;
float _rele_i_rms_calc_rms__RMS2;
float _rele_i_rms_calc_rms__RMS3;

float _rele_vll_rms_calc_rms__IN1;
float _rele_vll_rms_calc_rms__IN2;
float _rele_vll_rms_calc_rms__IN3;
float _rele_vll_rms_calc_rms__dFract;
X_Int32 _rele_vll_rms_calc_rms__mode;


float _rele_vll_rms_calc_rms__RMS1;
float _rele_vll_rms_calc_rms__RMS2;
float _rele_vll_rms_calc_rms__RMS3;

float _rele_vln_rms_calc_rms__IN1;
float _rele_vln_rms_calc_rms__IN2;
float _rele_vln_rms_calc_rms__IN3;
float _rele_vln_rms_calc_rms__dFract;
X_Int32 _rele_vln_rms_calc_rms__mode;


float _rele_vln_rms_calc_rms__RMS1;
float _rele_vln_rms_calc_rms__RMS2;
float _rele_vln_rms_calc_rms__RMS3;
float _rele_pll_abc_to_dq_alpha_beta_to_dq__d;
float _rele_pll_abc_to_dq_alpha_beta_to_dq__q;
float _rele_pll_abc_to_dq_alpha_beta_to_dq__k1;
float _rele_pll_abc_to_dq_alpha_beta_to_dq__k2;
float _consumidor_sumi_rms__out;
float _consumidor_pll_abc_to_dq_lpf_d__out;
float _consumidor_pll_abc_to_dq_lpf_d__previous_filtered_value;
float _consumidor_pll_abc_to_dq_lpf_q__out;
float _consumidor_pll_abc_to_dq_lpf_q__previous_filtered_value;
float _linha_sumi_rms__out;
float _linha_pll_abc_to_dq_lpf_d__out;
float _linha_pll_abc_to_dq_lpf_d__previous_filtered_value;
float _linha_pll_abc_to_dq_lpf_q__out;
float _linha_pll_abc_to_dq_lpf_q__previous_filtered_value;
float _rele_sumi_rms__out;
float _rele_pll_abc_to_dq_lpf_d__out;
float _rele_pll_abc_to_dq_lpf_d__previous_filtered_value;
float _rele_pll_abc_to_dq_lpf_q__out;
float _rele_pll_abc_to_dq_lpf_q__previous_filtered_value;
float _consumidor_gaini_rms__out;
float _consumidor_pll_normalize__in1;
float _consumidor_pll_normalize__in2;


float _consumidor_pll_normalize__in2_pu;
float _consumidor_pll_normalize__pk;
float _linha_gaini_rms__out;
float _linha_pll_normalize__in1;
float _linha_pll_normalize__in2;


float _linha_pll_normalize__in2_pu;
float _linha_pll_normalize__pk;
float _rele_gaini_rms__out;
float _rele_pll_normalize__in1;
float _rele_pll_normalize__in2;


float _rele_pll_normalize__in2_pu;
float _rele_pll_normalize__pk;
float _consumidor_output_bus__out[30];
float _consumidor_pll_pid_kd__out;
float _consumidor_pll_pid_ki__out;
float _consumidor_pll_pid_kp__out;
float _linha_output_bus__out[30];
float _linha_pll_pid_kd__out;
float _linha_pll_pid_ki__out;
float _linha_pll_pid_kp__out;
float _rele_output_bus__out[30];
float _rele_pll_pid_kd__out;
float _rele_pll_pid_ki__out;
float _rele_pll_pid_kp__out;
float _meter_split2_input_bus__out;
float _meter_split2_input_bus__out1;
float _meter_split2_input_bus__out2;
float _meter_split2_input_bus__out3;
float _meter_split2_input_bus__out4;
float _meter_split2_input_bus__out5;
float _meter_split2_input_bus__out6;
float _meter_split2_input_bus__out7;
float _meter_split2_input_bus__out8;
float _meter_split2_input_bus__out9;
float _meter_split2_input_bus__out10;
float _meter_split2_input_bus__out11;
float _meter_split2_input_bus__out12;
float _meter_split2_input_bus__out13;
float _meter_split2_input_bus__out14;
float _meter_split2_input_bus__out15;
float _meter_split2_input_bus__out16;
float _meter_split2_input_bus__out17;
float _meter_split2_input_bus__out18;
float _meter_split2_input_bus__out19;
float _meter_split2_input_bus__out20;
float _meter_split2_input_bus__out21;
float _meter_split2_input_bus__out22;
float _meter_split2_input_bus__out23;
float _meter_split2_input_bus__out24;
float _meter_split2_input_bus__out25;
float _meter_split2_input_bus__out26;
float _meter_split2_input_bus__out27;
float _meter_split2_input_bus__out28;
float _meter_split2_input_bus__out29;
float _consumidor_pll_pid_sum8__out;
float _meter_split3_input_bus__out;
float _meter_split3_input_bus__out1;
float _meter_split3_input_bus__out2;
float _meter_split3_input_bus__out3;
float _meter_split3_input_bus__out4;
float _meter_split3_input_bus__out5;
float _meter_split3_input_bus__out6;
float _meter_split3_input_bus__out7;
float _meter_split3_input_bus__out8;
float _meter_split3_input_bus__out9;
float _meter_split3_input_bus__out10;
float _meter_split3_input_bus__out11;
float _meter_split3_input_bus__out12;
float _meter_split3_input_bus__out13;
float _meter_split3_input_bus__out14;
float _meter_split3_input_bus__out15;
float _meter_split3_input_bus__out16;
float _meter_split3_input_bus__out17;
float _meter_split3_input_bus__out18;
float _meter_split3_input_bus__out19;
float _meter_split3_input_bus__out20;
float _meter_split3_input_bus__out21;
float _meter_split3_input_bus__out22;
float _meter_split3_input_bus__out23;
float _meter_split3_input_bus__out24;
float _meter_split3_input_bus__out25;
float _meter_split3_input_bus__out26;
float _meter_split3_input_bus__out27;
float _meter_split3_input_bus__out28;
float _meter_split3_input_bus__out29;
float _linha_pll_pid_sum8__out;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out1;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out2;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out3;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out4;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out5;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out6;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out7;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out8;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out9;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out10;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out11;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out12;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out13;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out14;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out15;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out16;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out17;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out18;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out19;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out20;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out21;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out22;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out23;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out24;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out25;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out26;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out27;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out28;
float __50__instantaneous_overcurrent1_meter_split_input_bus__out29;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out1;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out2;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out3;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out4;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out5;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out6;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out7;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out8;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out9;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out10;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out11;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out12;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out13;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out14;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out15;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out16;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out17;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out18;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out19;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out20;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out21;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out22;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out23;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out24;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out25;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out26;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out27;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out28;
float __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29;
float _meter_split4_input_bus__out;
float _meter_split4_input_bus__out1;
float _meter_split4_input_bus__out2;
float _meter_split4_input_bus__out3;
float _meter_split4_input_bus__out4;
float _meter_split4_input_bus__out5;
float _meter_split4_input_bus__out6;
float _meter_split4_input_bus__out7;
float _meter_split4_input_bus__out8;
float _meter_split4_input_bus__out9;
float _meter_split4_input_bus__out10;
float _meter_split4_input_bus__out11;
float _meter_split4_input_bus__out12;
float _meter_split4_input_bus__out13;
float _meter_split4_input_bus__out14;
float _meter_split4_input_bus__out15;
float _meter_split4_input_bus__out16;
float _meter_split4_input_bus__out17;
float _meter_split4_input_bus__out18;
float _meter_split4_input_bus__out19;
float _meter_split4_input_bus__out20;
float _meter_split4_input_bus__out21;
float _meter_split4_input_bus__out22;
float _meter_split4_input_bus__out23;
float _meter_split4_input_bus__out24;
float _meter_split4_input_bus__out25;
float _meter_split4_input_bus__out26;
float _meter_split4_input_bus__out27;
float _meter_split4_input_bus__out28;
float _meter_split4_input_bus__out29;
float _rele_pll_pid_sum8__out;
float _meter_split2_gain__out[12];
float _three_phase_phasor3__phase1;
float _three_phase_phasor3__out1;
float _three_phase_phasor3__correction1;
float _three_phase_phasor3__phase2;
float _three_phase_phasor3__out2;
float _three_phase_phasor3__correction2;
float _three_phase_phasor3__phase3;
float _three_phase_phasor3__out3;
float _three_phase_phasor3__correction3;
float _three_phase_phasor3__correction_ref;
float _consumidor_pll_pid_gain1__out;
float _meter_split3_gain__out[12];
float _three_phase_phasor4__phase1;
float _three_phase_phasor4__out1;
float _three_phase_phasor4__correction1;
float _three_phase_phasor4__phase2;
float _three_phase_phasor4__out2;
float _three_phase_phasor4__correction2;
float _three_phase_phasor4__phase3;
float _three_phase_phasor4__out3;
float _three_phase_phasor4__correction3;
float _three_phase_phasor4__correction_ref;
float _linha_pll_pid_gain1__out;
float __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp1__out;
float __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp2__out;
float __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp3__out;
float __50__instantaneous_overcurrent1_meter_split_gain__out[12];
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Arms;
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Block;
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Brms;
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Crms;
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__EmReset;
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Level;
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Scale;
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__TimeDial;


float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosA;
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosB;
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosC;
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Reset;
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Tripped;
float __51__ac_inverse_time_overcurrent1_meter_split_gain__out[12];
float _meter_split4_gain__out[12];
float _rele_pll_pid_gain1__out;
float _meter_split2_extra_input_bus__out;
float _meter_split2_extra_input_bus__out1;
float _meter_split2_extra_input_bus__out2;
float _meter_split2_extra_input_bus__out3;
float _meter_split2_extra_input_bus__out4;
float _meter_split2_extra_input_bus__out5;
float _meter_split2_extra_input_bus__out6;
float _meter_split2_extra_input_bus__out7;
float _meter_split2_extra_input_bus__out8;
float _meter_split2_extra_input_bus__out9;
float _meter_split2_extra_input_bus__out10;
float _meter_split2_extra_input_bus__out11;
float _consumidor_pll_pid_sum5__out;
float _meter_split3_extra_input_bus__out;
float _meter_split3_extra_input_bus__out1;
float _meter_split3_extra_input_bus__out2;
float _meter_split3_extra_input_bus__out3;
float _meter_split3_extra_input_bus__out4;
float _meter_split3_extra_input_bus__out5;
float _meter_split3_extra_input_bus__out6;
float _meter_split3_extra_input_bus__out7;
float _meter_split3_extra_input_bus__out8;
float _meter_split3_extra_input_bus__out9;
float _meter_split3_extra_input_bus__out10;
float _meter_split3_extra_input_bus__out11;
float _linha_pll_pid_sum5__out;
float __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator1__out;
float __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator3__out;
float __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator4__out;
float __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out;
float __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out1;
float __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out2;
float __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out3;
float __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out4;
float __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out5;
float __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out6;
float __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out7;
float __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out8;
float __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out9;
float __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out10;
float __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out11;
float __51__ac_inverse_time_overcurrent1_reset__tmp;
float __51__ac_inverse_time_overcurrent1_trip__tmp;
float __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out;
float __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out1;
float __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out2;
float __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out3;
float __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out4;
float __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out5;
float __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out6;
float __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out7;
float __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out8;
float __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out9;
float __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out10;
float __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out11;
float _meter_split4_extra_input_bus__out;
float _meter_split4_extra_input_bus__out1;
float _meter_split4_extra_input_bus__out2;
float _meter_split4_extra_input_bus__out3;
float _meter_split4_extra_input_bus__out4;
float _meter_split4_extra_input_bus__out5;
float _meter_split4_extra_input_bus__out6;
float _meter_split4_extra_input_bus__out7;
float _meter_split4_extra_input_bus__out8;
float _meter_split4_extra_input_bus__out9;
float _meter_split4_extra_input_bus__out10;
float _meter_split4_extra_input_bus__out11;
float _rele_pll_pid_sum5__out;
float _consumidor_pll_pid_limit1__out;
float _linha_pll_pid_limit1__out;
float __50__instantaneous_overcurrent1_3_phase_over_threshold_lg1__out;
float _rele_pll_pid_limit1__out;
float _consumidor_pll_pid_sum6__out;
float _consumidor_pll_rate_limiter1__out;

float _consumidor_pll_integrator__in;


float _consumidor_pll_integrator__out;
float _linha_pll_pid_sum6__out;
float _linha_pll_rate_limiter1__out;

float _linha_pll_integrator__in;


float _linha_pll_integrator__out;
float __50__instantaneous_overcurrent1_trip_inst__tmp;
float _rele_pll_pid_sum6__out;
float _rele_pll_rate_limiter1__out;

float _rele_pll_integrator__in;


float _rele_pll_integrator__out;
float _consumidor_pll_pid_kb__out;
float _consumidor_pll_lpf_lpf__out;
float _consumidor_pll_lpf_lpf__b_coeff[1] = {0.024674000736159996};
float _consumidor_pll_lpf_lpf__a_coeff[3] = {1.0, -1.7778894456, 0.8025634463361601};
float _consumidor_pll_lpf_lpf__a_sum;
float _consumidor_pll_lpf_lpf__b_sum;
float _consumidor_pll_lpf_lpf__delay_line_in;
float _linha_pll_pid_kb__out;
float _linha_pll_lpf_lpf__out;
float _linha_pll_lpf_lpf__b_coeff[1] = {0.024674000736159996};
float _linha_pll_lpf_lpf__a_coeff[3] = {1.0, -1.7778894456, 0.8025634463361601};
float _linha_pll_lpf_lpf__a_sum;
float _linha_pll_lpf_lpf__b_sum;
float _linha_pll_lpf_lpf__delay_line_in;
float _rele_pll_pid_kb__out;
float _rele_pll_lpf_lpf__out;
float _rele_pll_lpf_lpf__b_coeff[1] = {0.024674000736159996};
float _rele_pll_lpf_lpf__a_coeff[3] = {1.0, -1.7778894456, 0.8025634463361601};
float _rele_pll_lpf_lpf__a_sum;
float _rele_pll_lpf_lpf__b_sum;
float _rele_pll_lpf_lpf__delay_line_in;
float _consumidor_pll_pid_sum7__out;
float _linha_pll_pid_sum7__out;
float _rele_pll_pid_sum7__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
float __50__instantaneous_overcurrent1_trip_memory_sr1__state;
float __51__ac_inverse_time_overcurrent1_trip_memory_sr1__state;
float _consumidor_pll_pid_integrator1__state;
float _consumidor_pll_pid_integrator2__state;
float _consumidor_pll_unit_delay1__state;
float _linha_pll_pid_integrator1__state;
float _linha_pll_pid_integrator2__state;
float _linha_pll_unit_delay1__state;
float _rele_pll_pid_integrator1__state;
float _rele_pll_pid_integrator2__state;
float _rele_pll_unit_delay1__state;
float _consumidor_meassm_mode_and_dfract__Tfract;
float _consumidor_meassm_mode_and_dfract__freqAbs;
float _consumidor_meassm_mode_and_dfract__fMax;
X_Int32 _consumidor_meassm_mode_and_dfract__reset;
X_Int32 _consumidor_meassm_mode_and_dfract__cycle_counter;
float _linha_meassm_mode_and_dfract__Tfract;
float _linha_meassm_mode_and_dfract__freqAbs;
float _linha_meassm_mode_and_dfract__fMax;
X_Int32 _linha_meassm_mode_and_dfract__reset;
X_Int32 _linha_meassm_mode_and_dfract__cycle_counter;
float _rele_meassm_mode_and_dfract__Tfract;
float _rele_meassm_mode_and_dfract__freqAbs;
float _rele_meassm_mode_and_dfract__fMax;
X_Int32 _rele_meassm_mode_and_dfract__reset;
X_Int32 _rele_meassm_mode_and_dfract__cycle_counter;
float _consumidor_i_rms_calc_rms__rmsSum1;
float _consumidor_i_rms_calc_rms__rmsSum2;
float _consumidor_i_rms_calc_rms__rmsSum3;
float _consumidor_vll_rms_calc_rms__rmsSum1;
float _consumidor_vll_rms_calc_rms__rmsSum2;
float _consumidor_vll_rms_calc_rms__rmsSum3;
float _consumidor_vln_rms_calc_rms__rmsSum1;
float _consumidor_vln_rms_calc_rms__rmsSum2;
float _consumidor_vln_rms_calc_rms__rmsSum3;
float _linha_i_rms_calc_rms__rmsSum1;
float _linha_i_rms_calc_rms__rmsSum2;
float _linha_i_rms_calc_rms__rmsSum3;
float _linha_vll_rms_calc_rms__rmsSum1;
float _linha_vll_rms_calc_rms__rmsSum2;
float _linha_vll_rms_calc_rms__rmsSum3;
float _linha_vln_rms_calc_rms__rmsSum1;
float _linha_vln_rms_calc_rms__rmsSum2;
float _linha_vln_rms_calc_rms__rmsSum3;
float _rele_i_rms_calc_rms__rmsSum1;
float _rele_i_rms_calc_rms__rmsSum2;
float _rele_i_rms_calc_rms__rmsSum3;
float _rele_vll_rms_calc_rms__rmsSum1;
float _rele_vll_rms_calc_rms__rmsSum2;
float _rele_vll_rms_calc_rms__rmsSum3;
float _rele_vln_rms_calc_rms__rmsSum1;
float _rele_vln_rms_calc_rms__rmsSum2;
float _rele_vln_rms_calc_rms__rmsSum3;
float _consumidor_pll_abc_to_dq_lpf_d__filtered_value;
float _consumidor_pll_abc_to_dq_lpf_d__previous_in;
float _consumidor_pll_abc_to_dq_lpf_q__filtered_value;
float _consumidor_pll_abc_to_dq_lpf_q__previous_in;
float _linha_pll_abc_to_dq_lpf_d__filtered_value;
float _linha_pll_abc_to_dq_lpf_d__previous_in;
float _linha_pll_abc_to_dq_lpf_q__filtered_value;
float _linha_pll_abc_to_dq_lpf_q__previous_in;
float _rele_pll_abc_to_dq_lpf_d__filtered_value;
float _rele_pll_abc_to_dq_lpf_d__previous_in;
float _rele_pll_abc_to_dq_lpf_q__filtered_value;
float _rele_pll_abc_to_dq_lpf_q__previous_in;
float _three_phase_phasor3__phase1_state;
float _three_phase_phasor3__magnitude1_state;
X_UnInt32 _three_phase_phasor3__zc1;
float _three_phase_phasor3__previous_value1;
float _three_phase_phasor3__previous_correction1;
float _three_phase_phasor3__sample_cnt1;
float _three_phase_phasor3__signal1_square_sum;
float _three_phase_phasor3__previous_filtered_value1;
float _three_phase_phasor3__filtered_value1;
float _three_phase_phasor3__phase2_state;
float _three_phase_phasor3__magnitude2_state;
X_UnInt32 _three_phase_phasor3__zc2;
float _three_phase_phasor3__previous_value2;
float _three_phase_phasor3__previous_correction2;
float _three_phase_phasor3__sample_cnt2;
float _three_phase_phasor3__signal2_square_sum;
float _three_phase_phasor3__previous_filtered_value2;
float _three_phase_phasor3__filtered_value2;
float _three_phase_phasor3__phase3_state;
float _three_phase_phasor3__magnitude3_state;
X_UnInt32 _three_phase_phasor3__zc3;
float _three_phase_phasor3__previous_value3;
float _three_phase_phasor3__previous_correction3;
float _three_phase_phasor3__sample_cnt3;
float _three_phase_phasor3__signal3_square_sum;
float _three_phase_phasor3__previous_filtered_value3;
float _three_phase_phasor3__filtered_value3;
X_UnInt32 _three_phase_phasor3__zc_ref;
float _three_phase_phasor3__previous_value_ref;
float _three_phase_phasor3__previous_correction_ref;
float _three_phase_phasor3__sample_cnt_ref;
float _three_phase_phasor3__previous_filtered_value_ref;
float _three_phase_phasor3__filtered_value_ref;
float _three_phase_phasor4__phase1_state;
float _three_phase_phasor4__magnitude1_state;
X_UnInt32 _three_phase_phasor4__zc1;
float _three_phase_phasor4__previous_value1;
float _three_phase_phasor4__previous_correction1;
float _three_phase_phasor4__sample_cnt1;
float _three_phase_phasor4__signal1_square_sum;
float _three_phase_phasor4__previous_filtered_value1;
float _three_phase_phasor4__filtered_value1;
float _three_phase_phasor4__phase2_state;
float _three_phase_phasor4__magnitude2_state;
X_UnInt32 _three_phase_phasor4__zc2;
float _three_phase_phasor4__previous_value2;
float _three_phase_phasor4__previous_correction2;
float _three_phase_phasor4__sample_cnt2;
float _three_phase_phasor4__signal2_square_sum;
float _three_phase_phasor4__previous_filtered_value2;
float _three_phase_phasor4__filtered_value2;
float _three_phase_phasor4__phase3_state;
float _three_phase_phasor4__magnitude3_state;
X_UnInt32 _three_phase_phasor4__zc3;
float _three_phase_phasor4__previous_value3;
float _three_phase_phasor4__previous_correction3;
float _three_phase_phasor4__sample_cnt3;
float _three_phase_phasor4__signal3_square_sum;
float _three_phase_phasor4__previous_filtered_value3;
float _three_phase_phasor4__filtered_value3;
X_UnInt32 _three_phase_phasor4__zc_ref;
float _three_phase_phasor4__previous_value_ref;
float _three_phase_phasor4__previous_correction_ref;
float _three_phase_phasor4__sample_cnt_ref;
float _three_phase_phasor4__previous_filtered_value_ref;
float _three_phase_phasor4__filtered_value_ref;
float __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp1__state;
float __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp2__state;
float __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp3__state;
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[3];
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__PickUp;
float __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__M[3];
X_Int32 __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx;
float _consumidor_pll_rate_limiter1__state;
X_Int32 _consumidor_pll_rate_limiter1__first_step;
float _linha_pll_rate_limiter1__state;
X_Int32 _linha_pll_rate_limiter1__first_step;
float _rele_pll_rate_limiter1__state;
X_Int32 _rele_pll_rate_limiter1__first_step;
float _consumidor_pll_lpf_lpf__states[2];
float _linha_pll_lpf_lpf__states[2];
float _rele_pll_lpf_lpf__states[2];
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
    __50__instantaneous_overcurrent1_trip_memory_sr1__state =  0;
    __51__ac_inverse_time_overcurrent1_trip_memory_sr1__state =  0;
    _consumidor_pll_pid_integrator1__state = 376.99111843;
    _consumidor_pll_pid_integrator2__state = 0.0;
    _consumidor_pll_unit_delay1__state = 0.0;
    _linha_pll_pid_integrator1__state = 376.99111843;
    _linha_pll_pid_integrator2__state = 0.0;
    _linha_pll_unit_delay1__state = 0.0;
    _rele_pll_pid_integrator1__state = 376.99111843;
    _rele_pll_pid_integrator2__state = 0.0;
    _rele_pll_unit_delay1__state = 0.0;
    HIL_OutAO(0x400a, 0.0f);
    _consumidor_meassm_mode_and_dfract__dFract = 0;
    _consumidor_meassm_mode_and_dfract__fMax = 1.0 / 0.001;
    _consumidor_meassm_mode_and_dfract__cycle_counter = 0;
    _consumidor_meassm_mode_and_dfract__reset = 1;
    XIo_OutFloat(0x5500017c, 0.0f);
    XIo_OutFloat(0x55000178, 0.0f);
    XIo_OutFloat(0x55000180, 0.0f);
    XIo_OutFloat(0x55000188, 0.0f);
    XIo_OutFloat(0x55000184, 0.0f);
    XIo_OutFloat(0x55000190, 0.0f);
    XIo_OutFloat(0x5500018c, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    _linha_meassm_mode_and_dfract__dFract = 0;
    _linha_meassm_mode_and_dfract__fMax = 1.0 / 0.001;
    _linha_meassm_mode_and_dfract__cycle_counter = 0;
    _linha_meassm_mode_and_dfract__reset = 1;
    XIo_OutInt32(0x55000170, 0);
    XIo_OutInt32(0x55000174, 0);
    HIL_OutAO(0x4020, 0.0f);
    _rele_meassm_mode_and_dfract__dFract = 0;
    _rele_meassm_mode_and_dfract__fMax = 1.0 / 0.001;
    _rele_meassm_mode_and_dfract__cycle_counter = 0;
    _rele_meassm_mode_and_dfract__reset = 1;
    XIo_OutInt32(0x550001d4, 0);
    XIo_OutInt32(0x550001d8, 0);
    XIo_OutInt32(0x550001dc, 0);
    XIo_OutInt32(0x550001e0, 0);
    XIo_OutInt32(0x550001e4, 0);
    XIo_OutInt32(0x550001e8, 0);
    XIo_OutInt32(0x550001ec, 0);
    _consumidor_i_rms_calc_rms__mode = 1;
    _consumidor_vll_rms_calc_rms__mode = 1;
    _consumidor_vln_rms_calc_rms__mode = 1;
    _linha_i_rms_calc_rms__mode = 1;
    _linha_vll_rms_calc_rms__mode = 1;
    _linha_vln_rms_calc_rms__mode = 1;
    _rele_i_rms_calc_rms__mode = 1;
    _rele_vll_rms_calc_rms__mode = 1;
    _rele_vln_rms_calc_rms__mode = 1;
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    _consumidor_pll_abc_to_dq_lpf_d__filtered_value = 0x0;
    _consumidor_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _consumidor_pll_abc_to_dq_lpf_q__filtered_value = 0x0;
    _consumidor_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
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
    HIL_OutAO(0x4021, 0.0f);
    HIL_OutAO(0x4022, 0.0f);
    HIL_OutAO(0x4023, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    HIL_OutAO(0x4027, 0.0f);
    HIL_OutAO(0x4029, 0.0f);
    HIL_OutAO(0x4026, 0.0f);
    HIL_OutAO(0x4028, 0.0f);
    HIL_OutAO(0x402a, 0.0f);
    _rele_pll_abc_to_dq_lpf_d__filtered_value = 0x0;
    _rele_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _rele_pll_abc_to_dq_lpf_q__filtered_value = 0x0;
    _rele_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    _consumidor_pll_normalize__pk = 0;
    _linha_pll_normalize__pk = 0;
    _rele_pll_normalize__pk = 0;
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x4024, 0.0f);
    _three_phase_phasor3__phase1_state = 0x0;
    _three_phase_phasor3__magnitude1_state = 0x0;
    _three_phase_phasor3__zc1 = 0x0;
    _three_phase_phasor3__previous_value1 = 0x0;
    _three_phase_phasor3__previous_correction1 = 0x0;
    _three_phase_phasor3__sample_cnt1 = 0x0;
    _three_phase_phasor3__signal1_square_sum = 0x0;
    _three_phase_phasor3__previous_filtered_value1 = 0x0;
    _three_phase_phasor3__filtered_value1 = 0x0;
    _three_phase_phasor3__phase2_state = 0x0;
    _three_phase_phasor3__magnitude2_state = 0x0;
    _three_phase_phasor3__zc2 = 0x0;
    _three_phase_phasor3__previous_value2 = 0x0;
    _three_phase_phasor3__previous_correction2 = 0x0;
    _three_phase_phasor3__sample_cnt2 = 0x0;
    _three_phase_phasor3__signal2_square_sum = 0x0;
    _three_phase_phasor3__previous_filtered_value2 = 0x0;
    _three_phase_phasor3__filtered_value2 = 0x0;
    _three_phase_phasor3__phase3_state = 0x0;
    _three_phase_phasor3__magnitude3_state = 0x0;
    _three_phase_phasor3__zc3 = 0x0;
    _three_phase_phasor3__previous_value3 = 0x0;
    _three_phase_phasor3__previous_correction3 = 0x0;
    _three_phase_phasor3__sample_cnt3 = 0x0;
    _three_phase_phasor3__signal3_square_sum = 0x0;
    _three_phase_phasor3__previous_filtered_value3 = 0x0;
    _three_phase_phasor3__filtered_value3 = 0x0;
    _three_phase_phasor3__zc_ref = 0x0;
    _three_phase_phasor3__previous_value_ref = 0x0;
    _three_phase_phasor3__previous_correction_ref = 0x0;
    _three_phase_phasor3__sample_cnt_ref = 0x0;
    _three_phase_phasor3__previous_filtered_value_ref = 0x0;
    _three_phase_phasor3__filtered_value_ref = 0x0;
    _three_phase_phasor4__phase1_state = 0x0;
    _three_phase_phasor4__magnitude1_state = 0x0;
    _three_phase_phasor4__zc1 = 0x0;
    _three_phase_phasor4__previous_value1 = 0x0;
    _three_phase_phasor4__previous_correction1 = 0x0;
    _three_phase_phasor4__sample_cnt1 = 0x0;
    _three_phase_phasor4__signal1_square_sum = 0x0;
    _three_phase_phasor4__previous_filtered_value1 = 0x0;
    _three_phase_phasor4__filtered_value1 = 0x0;
    _three_phase_phasor4__phase2_state = 0x0;
    _three_phase_phasor4__magnitude2_state = 0x0;
    _three_phase_phasor4__zc2 = 0x0;
    _three_phase_phasor4__previous_value2 = 0x0;
    _three_phase_phasor4__previous_correction2 = 0x0;
    _three_phase_phasor4__sample_cnt2 = 0x0;
    _three_phase_phasor4__signal2_square_sum = 0x0;
    _three_phase_phasor4__previous_filtered_value2 = 0x0;
    _three_phase_phasor4__filtered_value2 = 0x0;
    _three_phase_phasor4__phase3_state = 0x0;
    _three_phase_phasor4__magnitude3_state = 0x0;
    _three_phase_phasor4__zc3 = 0x0;
    _three_phase_phasor4__previous_value3 = 0x0;
    _three_phase_phasor4__previous_correction3 = 0x0;
    _three_phase_phasor4__sample_cnt3 = 0x0;
    _three_phase_phasor4__signal3_square_sum = 0x0;
    _three_phase_phasor4__previous_filtered_value3 = 0x0;
    _three_phase_phasor4__filtered_value3 = 0x0;
    _three_phase_phasor4__zc_ref = 0x0;
    _three_phase_phasor4__previous_value_ref = 0x0;
    _three_phase_phasor4__previous_correction_ref = 0x0;
    _three_phase_phasor4__sample_cnt_ref = 0x0;
    _three_phase_phasor4__previous_filtered_value_ref = 0x0;
    _three_phase_phasor4__filtered_value_ref = 0x0;
    __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp1__state = 0.0f;
    __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp2__state = 0.0f;
    __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp3__state = 0.0f;
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[0] = 0;
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[1] = 0;
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[2] = 0;
    XIo_OutFloat(0x550001c4, 0.0f);
    XIo_OutFloat(0x550001c8, 0.0f);
    XIo_OutFloat(0x550001cc, 0.0f);
    XIo_OutFloat(0x550001d0, 0.0f);
    XIo_OutFloat(0x55000198, 0.0f);
    XIo_OutFloat(0x550001a0, 0.0f);
    XIo_OutFloat(0x550001a8, 0.0f);
    XIo_OutFloat(0x550001b0, 0.0f);
    XIo_OutFloat(0x550001b8, 0.0f);
    XIo_OutFloat(0x550001c0, 0.0f);
    XIo_OutFloat(0x55000194, 0.0f);
    XIo_OutFloat(0x5500019c, 0.0f);
    XIo_OutFloat(0x550001a4, 0.0f);
    XIo_OutFloat(0x550001ac, 0.0f);
    XIo_OutFloat(0x550001b4, 0.0f);
    XIo_OutFloat(0x550001bc, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    XIo_OutFloat(0x55000164, 0.0f);
    XIo_OutFloat(0x5500016c, 0.0f);
    _consumidor_pll_rate_limiter1__state = 0;
    _consumidor_pll_rate_limiter1__first_step = 1;
    _consumidor_pll_integrator__out = 0;
    _linha_pll_rate_limiter1__state = 0;
    _linha_pll_rate_limiter1__first_step = 1;
    _linha_pll_integrator__out = 0;
    XIo_OutFloat(0x55000168, 0.0f);
    _rele_pll_rate_limiter1__state = 0;
    _rele_pll_rate_limiter1__first_step = 1;
    _rele_pll_integrator__out = 0;
    X_UnInt32 _consumidor_pll_lpf_lpf__i;
    for (_consumidor_pll_lpf_lpf__i = 0; _consumidor_pll_lpf_lpf__i < 2; _consumidor_pll_lpf_lpf__i++) {
        _consumidor_pll_lpf_lpf__states[_consumidor_pll_lpf_lpf__i] = 0;
    }
    X_UnInt32 _linha_pll_lpf_lpf__i;
    for (_linha_pll_lpf_lpf__i = 0; _linha_pll_lpf_lpf__i < 2; _linha_pll_lpf_lpf__i++) {
        _linha_pll_lpf_lpf__states[_linha_pll_lpf_lpf__i] = 0;
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
    // Generated from the component: (50) Instantaneous Overcurrent1.Block
    // Generated from the component: (50) Instantaneous Overcurrent1.In
    // Generated from the component: (50) Instantaneous Overcurrent1.Mem_en_rst
    // Generated from the component: (50) Instantaneous Overcurrent1.OC_threshold_pu
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Block
    // Generated from the component: (51) AC Inverse Time Overcurrent1.In
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Mem_en_rst
    // Generated from the component: (51) AC Inverse Time Overcurrent1.OC_threshold_pu
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Time_dial_pu
    // Generated from the component: (51) AC Inverse Time Overcurrent1.reset_mode
    // Generated from the component: Consumidor.zero
    // Generated from the component: Linha.zero
    // Generated from the component: Rele.zero
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: (50) Instantaneous Overcurrent1.Block
    // Generated from the component: (50) Instantaneous Overcurrent1.In
    // Generated from the component: (50) Instantaneous Overcurrent1.Mem_en_rst
    // Generated from the component: (50) Instantaneous Overcurrent1.OC_threshold_pu
    // Generated from the component: (50) Instantaneous Overcurrent1.Trip Memory.SR1
    __50__instantaneous_overcurrent1_trip_memory_sr1__out = __50__instantaneous_overcurrent1_trip_memory_sr1__state;
    __50__instantaneous_overcurrent1_trip_memory_sr1__out_n = __50__instantaneous_overcurrent1_trip_memory_sr1__state != -1 ? !__50__instantaneous_overcurrent1_trip_memory_sr1__state : -1;
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Block
    // Generated from the component: (51) AC Inverse Time Overcurrent1.In
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Mem_en_rst
    // Generated from the component: (51) AC Inverse Time Overcurrent1.OC_threshold_pu
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Time_dial_pu
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Trip Memory.SR1
    __51__ac_inverse_time_overcurrent1_trip_memory_sr1__out = __51__ac_inverse_time_overcurrent1_trip_memory_sr1__state;
    __51__ac_inverse_time_overcurrent1_trip_memory_sr1__out_n = __51__ac_inverse_time_overcurrent1_trip_memory_sr1__state != -1 ? !__51__ac_inverse_time_overcurrent1_trip_memory_sr1__state : -1;
    // Generated from the component: (51) AC Inverse Time Overcurrent1.reset_mode
    // Generated from the component: Consumidor.IA.Ia1
    _consumidor_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x40f));
    // Generated from the component: Consumidor.IB.Ia1
    _consumidor_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x410));
    // Generated from the component: Consumidor.IC.Ia1
    _consumidor_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x411));
    // Generated from the component: Consumidor.PLL.PID.Integrator1
    _consumidor_pll_pid_integrator1__out = _consumidor_pll_pid_integrator1__state;
    // Generated from the component: Consumidor.PLL.PID.Integrator2
    _consumidor_pll_pid_integrator2__out = _consumidor_pll_pid_integrator2__state;
    // Generated from the component: Consumidor.PLL.Unit Delay1
    _consumidor_pll_unit_delay1__out = _consumidor_pll_unit_delay1__state;
    // Generated from the component: Consumidor.PLL.to_Hz
    _consumidor_pll_to_hz__out = 0.15915494309189535 * _consumidor_pll_lpf_lpf__out;
    // Generated from the component: Consumidor.VAB.Va1
    _consumidor_vab_va1__out = (HIL_InFloat(0xc80000 + 0x409));
    // Generated from the component: Consumidor.VAn.Va1
    _consumidor_van_va1__out = (HIL_InFloat(0xc80000 + 0x40a));
    // Generated from the component: Consumidor.VBC.Va1
    _consumidor_vbc_va1__out = (HIL_InFloat(0xc80000 + 0x40b));
    // Generated from the component: Consumidor.VBn.Va1
    _consumidor_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x40c));
    // Generated from the component: Consumidor.VCA.Va1
    _consumidor_vca_va1__out = (HIL_InFloat(0xc80000 + 0x40d));
    // Generated from the component: Consumidor.VCn.Va1
    _consumidor_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x40e));
    // Generated from the component: Consumidor.zero
    // Generated from the component: Falta.Fault select
    _falta_fault_select__out = XIo_InInt32(0x55000154);
    // Generated from the component: FaltaConsumidor.Fault select
    _faltaconsumidor_fault_select__out = XIo_InInt32(0x55000158);
    // Generated from the component: FuseLinkA.cpu_trans.Output
    _fuselinka_cpu_trans_output__out = XIo_InFloat(0x55000100);
    // Generated from the component: FuseLinkA1.cpu_trans.Output
    _fuselinka1_cpu_trans_output__out = XIo_InFloat(0x55000104);
    // Generated from the component: FuseLinkA3.cpu_trans.Output
    _fuselinka3_cpu_trans_output__out = XIo_InFloat(0x55000108);
    // Generated from the component: FuseLinkB.cpu_trans.Output
    _fuselinkb_cpu_trans_output__out = XIo_InFloat(0x5500010c);
    // Generated from the component: FuseLinkB1.cpu_trans.Output
    _fuselinkb1_cpu_trans_output__out = XIo_InFloat(0x55000110);
    // Generated from the component: FuseLinkB2.cpu_trans.Output
    _fuselinkb2_cpu_trans_output__out = XIo_InFloat(0x55000114);
    // Generated from the component: FuseLinkB5.cpu_trans.Output
    _fuselinkb5_cpu_trans_output__out = XIo_InFloat(0x55000118);
    // Generated from the component: Linha.IA.Ia1
    _linha_ia_ia1__out = (HIL_InFloat(0xc80000 + 0xe));
    // Generated from the component: Linha.IB.Ia1
    _linha_ib_ia1__out = (HIL_InFloat(0xc80000 + 0xf));
    // Generated from the component: Linha.IC.Ia1
    _linha_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x10));
    // Generated from the component: Linha.PLL.PID.Integrator1
    _linha_pll_pid_integrator1__out = _linha_pll_pid_integrator1__state;
    // Generated from the component: Linha.PLL.PID.Integrator2
    _linha_pll_pid_integrator2__out = _linha_pll_pid_integrator2__state;
    // Generated from the component: Linha.PLL.Unit Delay1
    _linha_pll_unit_delay1__out = _linha_pll_unit_delay1__state;
    // Generated from the component: Linha.PLL.to_Hz
    _linha_pll_to_hz__out = 0.15915494309189535 * _linha_pll_lpf_lpf__out;
    // Generated from the component: Linha.VAB.Va1
    _linha_vab_va1__out = (HIL_InFloat(0xc80000 + 0x4));
    // Generated from the component: Linha.VAn.Va1
    _linha_van_va1__out = (HIL_InFloat(0xc80000 + 0x5));
    // Generated from the component: Linha.VBC.Va1
    _linha_vbc_va1__out = (HIL_InFloat(0xc80000 + 0x6));
    // Generated from the component: Linha.VBn.Va1
    _linha_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x7));
    // Generated from the component: Linha.VCA.Va1
    _linha_vca_va1__out = (HIL_InFloat(0xc80000 + 0x8));
    // Generated from the component: Linha.VCn.Va1
    _linha_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x9));
    // Generated from the component: Linha.zero
    // Generated from the component: Memoria50
    _memoria50__out = XIo_InInt32(0x5500015c);
    // Generated from the component: Memoria51
    _memoria51__out = XIo_InInt32(0x55000160);
    // Generated from the component: Rele.IA.Ia1
    _rele_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x213));
    // Generated from the component: Rele.IB.Ia1
    _rele_ib_ia1__out = (HIL_InFloat(0xc80000 + 0x214));
    // Generated from the component: Rele.IC.Ia1
    _rele_ic_ia1__out = (HIL_InFloat(0xc80000 + 0x215));
    // Generated from the component: Rele.PLL.PID.Integrator1
    _rele_pll_pid_integrator1__out = _rele_pll_pid_integrator1__state;
    // Generated from the component: Rele.PLL.PID.Integrator2
    _rele_pll_pid_integrator2__out = _rele_pll_pid_integrator2__state;
    // Generated from the component: Rele.PLL.Unit Delay1
    _rele_pll_unit_delay1__out = _rele_pll_unit_delay1__state;
    // Generated from the component: Rele.PLL.to_Hz
    _rele_pll_to_hz__out = 0.15915494309189535 * _rele_pll_lpf_lpf__out;
    // Generated from the component: Rele.VAB.Va1
    _rele_vab_va1__out = (HIL_InFloat(0xc80000 + 0x207));
    // Generated from the component: Rele.VAn.Va1
    _rele_van_va1__out = (HIL_InFloat(0xc80000 + 0x208));
    // Generated from the component: Rele.VBC.Va1
    _rele_vbc_va1__out = (HIL_InFloat(0xc80000 + 0x209));
    // Generated from the component: Rele.VBn.Va1
    _rele_vbn_va1__out = (HIL_InFloat(0xc80000 + 0x20a));
    // Generated from the component: Rele.VCA.Va1
    _rele_vca_va1__out = (HIL_InFloat(0xc80000 + 0x20b));
    // Generated from the component: Rele.VCn.Va1
    _rele_vcn_va1__out = (HIL_InFloat(0xc80000 + 0x20c));
    // Generated from the component: Rele.zero
    // Generated from the component: S1.CTC_Wrapper
    _s1_ctc_wrapper__feedback_out = HIL_InInt32(0xf80410);
    // Generated from the component: S2.CTC_Wrapper
    _s2_ctc_wrapper__feedback_out = HIL_InInt32(0xf80411);
    // Generated from the component: S3.CTC_Wrapper
    _s3_ctc_wrapper__feedback_out = HIL_InInt32(0xf80412);
    // Generated from the component: S4.CTC_Wrapper
    _s4_ctc_wrapper__feedback_out = HIL_InInt32(0xf80413);
    // Generated from the component: S5.CTC_Wrapper
    _s5_ctc_wrapper__feedback_out = HIL_InInt32(0xf80414);
    // Generated from the component: S6.CTC_Wrapper
    _s6_ctc_wrapper__feedback_out = HIL_InInt32(0xf80422);
    // Generated from the component: S7.CTC_Wrapper
    _s7_ctc_wrapper__feedback_out = HIL_InInt32(0xf80423);
    // Generated from the component: (50) Instantaneous Overcurrent1.3-Phase Over Threshold.block function.Logical operator2
    __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator2__out = !__50__instantaneous_overcurrent1_block__out;
    // Generated from the component: (50) Instantaneous Overcurrent1.3-Phase Over Threshold.PD1
    __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out = (__50__instantaneous_overcurrent1_in__out * __50__instantaneous_overcurrent1_oc_threshold_pu__out);
    // Generated from the component: (50) Instantaneous Overcurrent1.Mem
    // Generated from the component: (50) Instantaneous Overcurrent1.TRIP-MEM
    HIL_OutInt32(0xf00401, __50__instantaneous_overcurrent1_trip_memory_sr1__out != 0x0);
    // Generated from the component: (50) Instantaneous Overcurrent1.Trip Memory.TRM1
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Mem
    // Generated from the component: (51) AC Inverse Time Overcurrent1.TRIP-MEM
    HIL_OutInt32(0xf00404, __51__ac_inverse_time_overcurrent1_trip_memory_sr1__out != 0x0);
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Trip Memory.TRM1
    // Generated from the component: Consumidor.PLL.sin
    _consumidor_pll_sin__out = sinf(_consumidor_pll_unit_delay1__out);
    // Generated from the component: Consumidor.TRMwt
    // Generated from the component: Consumidor.Freq
    HIL_OutAO(0x400a, _consumidor_pll_to_hz__out);
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
    // Generated from the component: Falta.Control state machine
    _falta_control_state_machine__in = _falta_fault_select__out;
    switch (_falta_control_state_machine__in) {
    case 0:
        _falta_control_state_machine__Ca = 0;
        _falta_control_state_machine__Cb = 0;
        _falta_control_state_machine__Cc = 0;
        _falta_control_state_machine__Cn = 0;
        break ;
    case 1:
        _falta_control_state_machine__Ca = 0;
        _falta_control_state_machine__Cb = 0;
        _falta_control_state_machine__Cc = 1;
        _falta_control_state_machine__Cn = 1;
        break ;
    case 2:
        _falta_control_state_machine__Ca = 0;
        _falta_control_state_machine__Cb = 1;
        _falta_control_state_machine__Cc = 0;
        _falta_control_state_machine__Cn = 1;
        break ;
    case 3:
        _falta_control_state_machine__Ca = 0;
        _falta_control_state_machine__Cb = 1;
        _falta_control_state_machine__Cc = 1;
        _falta_control_state_machine__Cn = 0;
        break ;
    case 4:
        _falta_control_state_machine__Ca = 0;
        _falta_control_state_machine__Cb = 1;
        _falta_control_state_machine__Cc = 1;
        _falta_control_state_machine__Cn = 1;
        break ;
    case 5:
        _falta_control_state_machine__Ca = 1;
        _falta_control_state_machine__Cb = 0;
        _falta_control_state_machine__Cc = 0;
        _falta_control_state_machine__Cn = 1;
        break ;
    case 6:
        _falta_control_state_machine__Ca = 1;
        _falta_control_state_machine__Cb = 0;
        _falta_control_state_machine__Cc = 1;
        _falta_control_state_machine__Cn = 0;
        break ;
    case 7:
        _falta_control_state_machine__Ca = 1;
        _falta_control_state_machine__Cb = 0;
        _falta_control_state_machine__Cc = 1;
        _falta_control_state_machine__Cn = 1;
        break ;
    case 8:
        _falta_control_state_machine__Ca = 1;
        _falta_control_state_machine__Cb = 1;
        _falta_control_state_machine__Cc = 0;
        _falta_control_state_machine__Cn = 0;
        break ;
    case 9:
        _falta_control_state_machine__Ca = 1;
        _falta_control_state_machine__Cb = 1;
        _falta_control_state_machine__Cc = 0;
        _falta_control_state_machine__Cn = 1;
        break ;
    case 10:
        _falta_control_state_machine__Ca = 1;
        _falta_control_state_machine__Cb = 1;
        _falta_control_state_machine__Cc = 1;
        _falta_control_state_machine__Cn = 0;
        break ;
    case 11:
        _falta_control_state_machine__Ca = 1;
        _falta_control_state_machine__Cb = 1;
        _falta_control_state_machine__Cc = 1;
        _falta_control_state_machine__Cn = 1;
        break ;
    default :
        _falta_control_state_machine__Ca = 0;
        _falta_control_state_machine__Cb = 0;
        _falta_control_state_machine__Cc = 0;
        _falta_control_state_machine__Cn = 0;
    }
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
    // Generated from the component: Fuse_Link_A1
    XIo_OutFloat(0x5500017c, _fuselinka_cpu_trans_output__out);
    // Generated from the component: Fuse_Link_A
    XIo_OutFloat(0x55000178, _fuselinka1_cpu_trans_output__out);
    // Generated from the component: Fuse_Link_A2
    XIo_OutFloat(0x55000180, _fuselinka3_cpu_trans_output__out);
    // Generated from the component: Fuse_Link_B1
    XIo_OutFloat(0x55000188, _fuselinkb_cpu_trans_output__out);
    // Generated from the component: Fuse_Link_B
    XIo_OutFloat(0x55000184, _fuselinkb1_cpu_trans_output__out);
    // Generated from the component: Fuse_Link_C
    XIo_OutFloat(0x55000190, _fuselinkb2_cpu_trans_output__out);
    // Generated from the component: Fuse_Link_B2
    XIo_OutFloat(0x5500018c, _fuselinkb5_cpu_trans_output__out);
    // Generated from the component: Linha.PLL.sin
    _linha_pll_sin__out = sinf(_linha_pll_unit_delay1__out);
    // Generated from the component: Linha.TRMwt
    // Generated from the component: Linha.Freq
    HIL_OutAO(0x4015, _linha_pll_to_hz__out);
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
        _linha_meassm_mode_and_dfract__dFract = 0.001 * _linha_meassm_mode_and_dfract__freqAbs;
        _linha_meassm_mode_and_dfract__Tfract += _linha_meassm_mode_and_dfract__dFract;
        if (_linha_meassm_mode_and_dfract__Tfract >= 1.0) {
            _linha_meassm_mode_and_dfract__cycle_counter += 1;
            if (_linha_meassm_mode_and_dfract__cycle_counter >= 1) {
                _linha_meassm_mode_and_dfract__dFract = 1.0 - (_linha_meassm_mode_and_dfract__Tfract - _linha_meassm_mode_and_dfract__dFract);
            }
            else {
                _linha_meassm_mode_and_dfract__Tfract -= 1.0;
            }
        }
        _linha_meassm_mode_and_dfract__dFract /= 1;
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
    // Generated from the component: Linha.POWER_P
    // Generated from the component: Linha.POWER_PA
    // Generated from the component: Linha.POWER_PB
    // Generated from the component: Linha.POWER_PC
    // Generated from the component: Linha.POWER_PF
    // Generated from the component: Linha.POWER_PFA
    // Generated from the component: Linha.POWER_PFB
    // Generated from the component: Linha.POWER_PFC
    // Generated from the component: Linha.POWER_Q
    // Generated from the component: Linha.POWER_QA
    // Generated from the component: Linha.POWER_QB
    // Generated from the component: Linha.POWER_QC
    // Generated from the component: Linha.POWER_S
    // Generated from the component: Linha.POWER_SA
    // Generated from the component: Linha.POWER_SB
    // Generated from the component: Linha.POWER_SC
    // Generated from the component: Linha.VLL_RMS
    // Generated from the component: Linha.VLn_RMS
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
    // Generated from the component: Disj3
    XIo_OutInt32(0x55000170, _memoria50__out);
    // Generated from the component: Disj4
    XIo_OutInt32(0x55000174, _memoria51__out);
    // Generated from the component: Logical operator3
    _logical_operator3__out = !( _memoria51__out && _memoria50__out );
    // Generated from the component: Rele.PLL.sin
    _rele_pll_sin__out = sinf(_rele_pll_unit_delay1__out);
    // Generated from the component: Rele.TRMwt
    // Generated from the component: Rele.Freq
    HIL_OutAO(0x4020, _rele_pll_to_hz__out);
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
    // Generated from the component: S1_feed
    XIo_OutInt32(0x550001d4, _s1_ctc_wrapper__feedback_out);
    // Generated from the component: S2_feed
    XIo_OutInt32(0x550001d8, _s2_ctc_wrapper__feedback_out);
    // Generated from the component: S3_feed
    XIo_OutInt32(0x550001dc, _s3_ctc_wrapper__feedback_out);
    // Generated from the component: S4_feed
    XIo_OutInt32(0x550001e0, _s4_ctc_wrapper__feedback_out);
    // Generated from the component: S5_feed
    XIo_OutInt32(0x550001e4, _s5_ctc_wrapper__feedback_out);
    // Generated from the component: S6_feed
    XIo_OutInt32(0x550001e8, _s6_ctc_wrapper__feedback_out);
    // Generated from the component: S7_feed
    XIo_OutInt32(0x550001ec, _s7_ctc_wrapper__feedback_out);
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
    _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k1 = cosf(_consumidor_pll_unit_delay1__out);
    _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k2 = sinf(_consumidor_pll_unit_delay1__out);
    _consumidor_pll_abc_to_dq_alpha_beta_to_dq__d = _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k2 * _consumidor_pll_abc_to_dq_abc_to_alpha_beta__alpha - _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k1 * _consumidor_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _consumidor_pll_abc_to_dq_alpha_beta_to_dq__q = _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k1 * _consumidor_pll_abc_to_dq_abc_to_alpha_beta__alpha + _consumidor_pll_abc_to_dq_alpha_beta_to_dq__k2 * _consumidor_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Consumidor.TRMz
    // Generated from the component: Consumidor.extra_out
    // Generated from the component: Falta.S1.CTC_Wrapper
    if (_falta_control_state_machine__Ca == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: Falta.S2.CTC_Wrapper
    if (_falta_control_state_machine__Cn == 0x0) {
        HIL_OutInt32(0x8240481, 0x0);
    }
    else {
        HIL_OutInt32(0x8240481, 0x1);
    }
    // Generated from the component: Falta.S3.CTC_Wrapper
    if (_falta_control_state_machine__Cb == 0x0) {
        HIL_OutInt32(0x8240482, 0x0);
    }
    else {
        HIL_OutInt32(0x8240482, 0x1);
    }
    // Generated from the component: Falta.S4.CTC_Wrapper
    if (_falta_control_state_machine__Cc == 0x0) {
        HIL_OutInt32(0x8240483, 0x0);
    }
    else {
        HIL_OutInt32(0x8240483, 0x1);
    }
    // Generated from the component: FaltaConsumidor.S1.CTC_Wrapper
    if (_faltaconsumidor_control_state_machine__Ca == 0x0) {
        HIL_OutInt32(0x8a40480, 0x0);
    }
    else {
        HIL_OutInt32(0x8a40480, 0x1);
    }
    // Generated from the component: FaltaConsumidor.S2.CTC_Wrapper
    if (_faltaconsumidor_control_state_machine__Cn == 0x0) {
        HIL_OutInt32(0x8a40481, 0x0);
    }
    else {
        HIL_OutInt32(0x8a40481, 0x1);
    }
    // Generated from the component: FaltaConsumidor.S3.CTC_Wrapper
    if (_faltaconsumidor_control_state_machine__Cb == 0x0) {
        HIL_OutInt32(0x8a40482, 0x0);
    }
    else {
        HIL_OutInt32(0x8a40482, 0x1);
    }
    // Generated from the component: FaltaConsumidor.S4.CTC_Wrapper
    if (_faltaconsumidor_control_state_machine__Cc == 0x0) {
        HIL_OutInt32(0x8a40483, 0x0);
    }
    else {
        HIL_OutInt32(0x8a40483, 0x1);
    }
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
    _linha_pll_abc_to_dq_alpha_beta_to_dq__k1 = cosf(_linha_pll_unit_delay1__out);
    _linha_pll_abc_to_dq_alpha_beta_to_dq__k2 = sinf(_linha_pll_unit_delay1__out);
    _linha_pll_abc_to_dq_alpha_beta_to_dq__d = _linha_pll_abc_to_dq_alpha_beta_to_dq__k2 * _linha_pll_abc_to_dq_abc_to_alpha_beta__alpha - _linha_pll_abc_to_dq_alpha_beta_to_dq__k1 * _linha_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _linha_pll_abc_to_dq_alpha_beta_to_dq__q = _linha_pll_abc_to_dq_alpha_beta_to_dq__k1 * _linha_pll_abc_to_dq_abc_to_alpha_beta__alpha + _linha_pll_abc_to_dq_alpha_beta_to_dq__k2 * _linha_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Linha.TRMz
    // Generated from the component: Linha.extra_out
    // Generated from the component: CB.CTC_Wrapper
    if (_logical_operator3__out == 0x0) {
        HIL_OutInt32(0x8640480, 0x0);
    }
    else {
        HIL_OutInt32(0x8640480, 0x1);
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
    _rele_pll_abc_to_dq_alpha_beta_to_dq__k1 = cosf(_rele_pll_unit_delay1__out);
    _rele_pll_abc_to_dq_alpha_beta_to_dq__k2 = sinf(_rele_pll_unit_delay1__out);
    _rele_pll_abc_to_dq_alpha_beta_to_dq__d = _rele_pll_abc_to_dq_alpha_beta_to_dq__k2 * _rele_pll_abc_to_dq_abc_to_alpha_beta__alpha - _rele_pll_abc_to_dq_alpha_beta_to_dq__k1 * _rele_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _rele_pll_abc_to_dq_alpha_beta_to_dq__q = _rele_pll_abc_to_dq_alpha_beta_to_dq__k1 * _rele_pll_abc_to_dq_abc_to_alpha_beta__alpha + _rele_pll_abc_to_dq_alpha_beta_to_dq__k2 * _rele_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Rele.TRMz
    // Generated from the component: Rele.extra_out
    // Generated from the component: Consumidor.IA_RMS
    HIL_OutAO(0x400b, _consumidor_i_rms_calc_rms__RMS1);
    // Generated from the component: Consumidor.IB_RMS
    HIL_OutAO(0x400c, _consumidor_i_rms_calc_rms__RMS2);
    // Generated from the component: Consumidor.IC_RMS
    HIL_OutAO(0x400d, _consumidor_i_rms_calc_rms__RMS3);
    // Generated from the component: Consumidor.sumI_RMS
    _consumidor_sumi_rms__out = _consumidor_i_rms_calc_rms__RMS1 + _consumidor_i_rms_calc_rms__RMS2 + _consumidor_i_rms_calc_rms__RMS3;
    // Generated from the component: Consumidor.VAB_RMS
    HIL_OutAO(0x400f, _consumidor_vll_rms_calc_rms__RMS1);
    // Generated from the component: Consumidor.VBC_RMS
    HIL_OutAO(0x4011, _consumidor_vll_rms_calc_rms__RMS2);
    // Generated from the component: Consumidor.VCA_RMS
    HIL_OutAO(0x4013, _consumidor_vll_rms_calc_rms__RMS3);
    // Generated from the component: Consumidor.VAn_RMS
    HIL_OutAO(0x4010, _consumidor_vln_rms_calc_rms__RMS1);
    // Generated from the component: Consumidor.VBn_RMS
    HIL_OutAO(0x4012, _consumidor_vln_rms_calc_rms__RMS2);
    // Generated from the component: Consumidor.VCn_RMS
    HIL_OutAO(0x4014, _consumidor_vln_rms_calc_rms__RMS3);
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
    // Generated from the component: Linha.IA_RMS
    HIL_OutAO(0x4016, _linha_i_rms_calc_rms__RMS1);
    // Generated from the component: Linha.IB_RMS
    HIL_OutAO(0x4017, _linha_i_rms_calc_rms__RMS2);
    // Generated from the component: Linha.IC_RMS
    HIL_OutAO(0x4018, _linha_i_rms_calc_rms__RMS3);
    // Generated from the component: Linha.sumI_RMS
    _linha_sumi_rms__out = _linha_i_rms_calc_rms__RMS1 + _linha_i_rms_calc_rms__RMS2 + _linha_i_rms_calc_rms__RMS3;
    // Generated from the component: Linha.VAB_RMS
    HIL_OutAO(0x401a, _linha_vll_rms_calc_rms__RMS1);
    // Generated from the component: Linha.VBC_RMS
    HIL_OutAO(0x401c, _linha_vll_rms_calc_rms__RMS2);
    // Generated from the component: Linha.VCA_RMS
    HIL_OutAO(0x401e, _linha_vll_rms_calc_rms__RMS3);
    // Generated from the component: Linha.VAn_RMS
    HIL_OutAO(0x401b, _linha_vln_rms_calc_rms__RMS1);
    // Generated from the component: Linha.VBn_RMS
    HIL_OutAO(0x401d, _linha_vln_rms_calc_rms__RMS2);
    // Generated from the component: Linha.VCn_RMS
    HIL_OutAO(0x401f, _linha_vln_rms_calc_rms__RMS3);
    // Generated from the component: Linha.PLL.abc to dq.LPF_d
    _linha_pll_abc_to_dq_lpf_d__previous_filtered_value = _linha_pll_abc_to_dq_lpf_d__filtered_value;
    _linha_pll_abc_to_dq_lpf_d__filtered_value = _linha_pll_abc_to_dq_lpf_d__previous_in * (1.0 * 62.83185307 * 0.001) + _linha_pll_abc_to_dq_lpf_d__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.001 );
    _linha_pll_abc_to_dq_lpf_d__out = _linha_pll_abc_to_dq_lpf_d__filtered_value;
    _linha_pll_abc_to_dq_lpf_d__previous_in = _linha_pll_abc_to_dq_alpha_beta_to_dq__d;
    // Generated from the component: Linha.PLL.abc to dq.LPF_q
    _linha_pll_abc_to_dq_lpf_q__previous_filtered_value = _linha_pll_abc_to_dq_lpf_q__filtered_value;
    _linha_pll_abc_to_dq_lpf_q__filtered_value = _linha_pll_abc_to_dq_lpf_q__previous_in * (1.0 * 62.83185307 * 0.001) + _linha_pll_abc_to_dq_lpf_q__previous_filtered_value * (1 - 1.0 * 62.83185307 * 0.001 );
    _linha_pll_abc_to_dq_lpf_q__out = _linha_pll_abc_to_dq_lpf_q__filtered_value;
    _linha_pll_abc_to_dq_lpf_q__previous_in = _linha_pll_abc_to_dq_alpha_beta_to_dq__q;
    // Generated from the component: Rele.IA_RMS
    HIL_OutAO(0x4021, _rele_i_rms_calc_rms__RMS1);
    // Generated from the component: Rele.IB_RMS
    HIL_OutAO(0x4022, _rele_i_rms_calc_rms__RMS2);
    // Generated from the component: Rele.IC_RMS
    HIL_OutAO(0x4023, _rele_i_rms_calc_rms__RMS3);
    // Generated from the component: Rele.sumI_RMS
    _rele_sumi_rms__out = _rele_i_rms_calc_rms__RMS1 + _rele_i_rms_calc_rms__RMS2 + _rele_i_rms_calc_rms__RMS3;
    // Generated from the component: Rele.VAB_RMS
    HIL_OutAO(0x4025, _rele_vll_rms_calc_rms__RMS1);
    // Generated from the component: Rele.VBC_RMS
    HIL_OutAO(0x4027, _rele_vll_rms_calc_rms__RMS2);
    // Generated from the component: Rele.VCA_RMS
    HIL_OutAO(0x4029, _rele_vll_rms_calc_rms__RMS3);
    // Generated from the component: Rele.VAn_RMS
    HIL_OutAO(0x4026, _rele_vln_rms_calc_rms__RMS1);
    // Generated from the component: Rele.VBn_RMS
    HIL_OutAO(0x4028, _rele_vln_rms_calc_rms__RMS2);
    // Generated from the component: Rele.VCn_RMS
    HIL_OutAO(0x402a, _rele_vln_rms_calc_rms__RMS3);
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
    // Generated from the component: Linha.gainI_RMS
    _linha_gaini_rms__out = 0.3333333333333333 * _linha_sumi_rms__out;
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
    HIL_OutAO(0x400e, _consumidor_gaini_rms__out);
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
    // Generated from the component: Linha.I_RMS
    HIL_OutAO(0x4019, _linha_gaini_rms__out);
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
    _linha_output_bus__out[13] = _linha_zero__out;
    _linha_output_bus__out[14] = _linha_vll_rms_calc_rms__RMS1;
    _linha_output_bus__out[15] = _linha_vll_rms_calc_rms__RMS2;
    _linha_output_bus__out[16] = _linha_vll_rms_calc_rms__RMS3;
    _linha_output_bus__out[17] = _linha_zero__out;
    _linha_output_bus__out[18] = _linha_i_rms_calc_rms__RMS1;
    _linha_output_bus__out[19] = _linha_i_rms_calc_rms__RMS2;
    _linha_output_bus__out[20] = _linha_i_rms_calc_rms__RMS3;
    _linha_output_bus__out[21] = _linha_gaini_rms__out;
    _linha_output_bus__out[22] = _linha_zero__out;
    _linha_output_bus__out[23] = _linha_zero__out;
    _linha_output_bus__out[24] = _linha_zero__out;
    _linha_output_bus__out[25] = _linha_zero__out;
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
    // Generated from the component: Rele.I_RMS
    HIL_OutAO(0x4024, _rele_gaini_rms__out);
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
    // Generated from the component: Meter Split2.input_bus
    _meter_split2_input_bus__out = _consumidor_output_bus__out[0];
    _meter_split2_input_bus__out1 = _consumidor_output_bus__out[1];
    _meter_split2_input_bus__out2 = _consumidor_output_bus__out[2];
    _meter_split2_input_bus__out3 = _consumidor_output_bus__out[3];
    _meter_split2_input_bus__out4 = _consumidor_output_bus__out[4];
    _meter_split2_input_bus__out5 = _consumidor_output_bus__out[5];
    _meter_split2_input_bus__out6 = _consumidor_output_bus__out[6];
    _meter_split2_input_bus__out7 = _consumidor_output_bus__out[7];
    _meter_split2_input_bus__out8 = _consumidor_output_bus__out[8];
    _meter_split2_input_bus__out9 = _consumidor_output_bus__out[9];
    _meter_split2_input_bus__out10 = _consumidor_output_bus__out[10];
    _meter_split2_input_bus__out11 = _consumidor_output_bus__out[11];
    _meter_split2_input_bus__out12 = _consumidor_output_bus__out[12];
    _meter_split2_input_bus__out13 = _consumidor_output_bus__out[13];
    _meter_split2_input_bus__out14 = _consumidor_output_bus__out[14];
    _meter_split2_input_bus__out15 = _consumidor_output_bus__out[15];
    _meter_split2_input_bus__out16 = _consumidor_output_bus__out[16];
    _meter_split2_input_bus__out17 = _consumidor_output_bus__out[17];
    _meter_split2_input_bus__out18 = _consumidor_output_bus__out[18];
    _meter_split2_input_bus__out19 = _consumidor_output_bus__out[19];
    _meter_split2_input_bus__out20 = _consumidor_output_bus__out[20];
    _meter_split2_input_bus__out21 = _consumidor_output_bus__out[21];
    _meter_split2_input_bus__out22 = _consumidor_output_bus__out[22];
    _meter_split2_input_bus__out23 = _consumidor_output_bus__out[23];
    _meter_split2_input_bus__out24 = _consumidor_output_bus__out[24];
    _meter_split2_input_bus__out25 = _consumidor_output_bus__out[25];
    _meter_split2_input_bus__out26 = _consumidor_output_bus__out[26];
    _meter_split2_input_bus__out27 = _consumidor_output_bus__out[27];
    _meter_split2_input_bus__out28 = _consumidor_output_bus__out[28];
    _meter_split2_input_bus__out29 = _consumidor_output_bus__out[29];
    // Generated from the component: Consumidor.PLL.PID.Sum8
    _consumidor_pll_pid_sum8__out = _consumidor_pll_pid_kd__out - _consumidor_pll_pid_integrator2__out;
    // Generated from the component: Meter Split3.input_bus
    _meter_split3_input_bus__out = _linha_output_bus__out[0];
    _meter_split3_input_bus__out1 = _linha_output_bus__out[1];
    _meter_split3_input_bus__out2 = _linha_output_bus__out[2];
    _meter_split3_input_bus__out3 = _linha_output_bus__out[3];
    _meter_split3_input_bus__out4 = _linha_output_bus__out[4];
    _meter_split3_input_bus__out5 = _linha_output_bus__out[5];
    _meter_split3_input_bus__out6 = _linha_output_bus__out[6];
    _meter_split3_input_bus__out7 = _linha_output_bus__out[7];
    _meter_split3_input_bus__out8 = _linha_output_bus__out[8];
    _meter_split3_input_bus__out9 = _linha_output_bus__out[9];
    _meter_split3_input_bus__out10 = _linha_output_bus__out[10];
    _meter_split3_input_bus__out11 = _linha_output_bus__out[11];
    _meter_split3_input_bus__out12 = _linha_output_bus__out[12];
    _meter_split3_input_bus__out13 = _linha_output_bus__out[13];
    _meter_split3_input_bus__out14 = _linha_output_bus__out[14];
    _meter_split3_input_bus__out15 = _linha_output_bus__out[15];
    _meter_split3_input_bus__out16 = _linha_output_bus__out[16];
    _meter_split3_input_bus__out17 = _linha_output_bus__out[17];
    _meter_split3_input_bus__out18 = _linha_output_bus__out[18];
    _meter_split3_input_bus__out19 = _linha_output_bus__out[19];
    _meter_split3_input_bus__out20 = _linha_output_bus__out[20];
    _meter_split3_input_bus__out21 = _linha_output_bus__out[21];
    _meter_split3_input_bus__out22 = _linha_output_bus__out[22];
    _meter_split3_input_bus__out23 = _linha_output_bus__out[23];
    _meter_split3_input_bus__out24 = _linha_output_bus__out[24];
    _meter_split3_input_bus__out25 = _linha_output_bus__out[25];
    _meter_split3_input_bus__out26 = _linha_output_bus__out[26];
    _meter_split3_input_bus__out27 = _linha_output_bus__out[27];
    _meter_split3_input_bus__out28 = _linha_output_bus__out[28];
    _meter_split3_input_bus__out29 = _linha_output_bus__out[29];
    // Generated from the component: Linha.PLL.PID.Sum8
    _linha_pll_pid_sum8__out = _linha_pll_pid_kd__out - _linha_pll_pid_integrator2__out;
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.input_bus
    __50__instantaneous_overcurrent1_meter_split_input_bus__out = _rele_output_bus__out[0];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out1 = _rele_output_bus__out[1];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out2 = _rele_output_bus__out[2];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out3 = _rele_output_bus__out[3];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out4 = _rele_output_bus__out[4];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out5 = _rele_output_bus__out[5];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out6 = _rele_output_bus__out[6];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out7 = _rele_output_bus__out[7];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out8 = _rele_output_bus__out[8];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out9 = _rele_output_bus__out[9];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out10 = _rele_output_bus__out[10];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out11 = _rele_output_bus__out[11];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out12 = _rele_output_bus__out[12];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out13 = _rele_output_bus__out[13];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out14 = _rele_output_bus__out[14];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out15 = _rele_output_bus__out[15];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out16 = _rele_output_bus__out[16];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out17 = _rele_output_bus__out[17];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out18 = _rele_output_bus__out[18];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out19 = _rele_output_bus__out[19];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out20 = _rele_output_bus__out[20];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out21 = _rele_output_bus__out[21];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out22 = _rele_output_bus__out[22];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out23 = _rele_output_bus__out[23];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out24 = _rele_output_bus__out[24];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out25 = _rele_output_bus__out[25];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out26 = _rele_output_bus__out[26];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out27 = _rele_output_bus__out[27];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out28 = _rele_output_bus__out[28];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out29 = _rele_output_bus__out[29];
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.input_bus
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out = _rele_output_bus__out[0];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out1 = _rele_output_bus__out[1];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out2 = _rele_output_bus__out[2];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out3 = _rele_output_bus__out[3];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out4 = _rele_output_bus__out[4];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out5 = _rele_output_bus__out[5];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out6 = _rele_output_bus__out[6];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out7 = _rele_output_bus__out[7];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out8 = _rele_output_bus__out[8];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out9 = _rele_output_bus__out[9];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out10 = _rele_output_bus__out[10];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out11 = _rele_output_bus__out[11];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out12 = _rele_output_bus__out[12];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out13 = _rele_output_bus__out[13];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out14 = _rele_output_bus__out[14];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out15 = _rele_output_bus__out[15];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out16 = _rele_output_bus__out[16];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out17 = _rele_output_bus__out[17];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out18 = _rele_output_bus__out[18];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out19 = _rele_output_bus__out[19];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out20 = _rele_output_bus__out[20];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out21 = _rele_output_bus__out[21];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out22 = _rele_output_bus__out[22];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out23 = _rele_output_bus__out[23];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out24 = _rele_output_bus__out[24];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out25 = _rele_output_bus__out[25];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out26 = _rele_output_bus__out[26];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out27 = _rele_output_bus__out[27];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out28 = _rele_output_bus__out[28];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29 = _rele_output_bus__out[29];
    // Generated from the component: Meter Split4.input_bus
    _meter_split4_input_bus__out = _rele_output_bus__out[0];
    _meter_split4_input_bus__out1 = _rele_output_bus__out[1];
    _meter_split4_input_bus__out2 = _rele_output_bus__out[2];
    _meter_split4_input_bus__out3 = _rele_output_bus__out[3];
    _meter_split4_input_bus__out4 = _rele_output_bus__out[4];
    _meter_split4_input_bus__out5 = _rele_output_bus__out[5];
    _meter_split4_input_bus__out6 = _rele_output_bus__out[6];
    _meter_split4_input_bus__out7 = _rele_output_bus__out[7];
    _meter_split4_input_bus__out8 = _rele_output_bus__out[8];
    _meter_split4_input_bus__out9 = _rele_output_bus__out[9];
    _meter_split4_input_bus__out10 = _rele_output_bus__out[10];
    _meter_split4_input_bus__out11 = _rele_output_bus__out[11];
    _meter_split4_input_bus__out12 = _rele_output_bus__out[12];
    _meter_split4_input_bus__out13 = _rele_output_bus__out[13];
    _meter_split4_input_bus__out14 = _rele_output_bus__out[14];
    _meter_split4_input_bus__out15 = _rele_output_bus__out[15];
    _meter_split4_input_bus__out16 = _rele_output_bus__out[16];
    _meter_split4_input_bus__out17 = _rele_output_bus__out[17];
    _meter_split4_input_bus__out18 = _rele_output_bus__out[18];
    _meter_split4_input_bus__out19 = _rele_output_bus__out[19];
    _meter_split4_input_bus__out20 = _rele_output_bus__out[20];
    _meter_split4_input_bus__out21 = _rele_output_bus__out[21];
    _meter_split4_input_bus__out22 = _rele_output_bus__out[22];
    _meter_split4_input_bus__out23 = _rele_output_bus__out[23];
    _meter_split4_input_bus__out24 = _rele_output_bus__out[24];
    _meter_split4_input_bus__out25 = _rele_output_bus__out[25];
    _meter_split4_input_bus__out26 = _rele_output_bus__out[26];
    _meter_split4_input_bus__out27 = _rele_output_bus__out[27];
    _meter_split4_input_bus__out28 = _rele_output_bus__out[28];
    _meter_split4_input_bus__out29 = _rele_output_bus__out[29];
    // Generated from the component: Rele.PLL.PID.Sum8
    _rele_pll_pid_sum8__out = _rele_pll_pid_kd__out - _rele_pll_pid_integrator2__out;
    // Generated from the component: Meter Split2.Freq
    // Generated from the component: Meter Split2.IA
    // Generated from the component: Meter Split2.IA_RMS
    // Generated from the component: Meter Split2.IB
    // Generated from the component: Meter Split2.IB_RMS
    // Generated from the component: Meter Split2.IC
    // Generated from the component: Meter Split2.IC_RMS
    // Generated from the component: Meter Split2.IN
    // Generated from the component: Meter Split2.IN_RMS
    // Generated from the component: Meter Split2.I_RMS
    // Generated from the component: Meter Split2.POWER_P
    // Generated from the component: Meter Split2.POWER_PF
    // Generated from the component: Meter Split2.POWER_Q
    // Generated from the component: Meter Split2.POWER_S
    // Generated from the component: Meter Split2.VAB
    // Generated from the component: Meter Split2.VAB_RMS
    // Generated from the component: Meter Split2.VAn_RMS
    // Generated from the component: Meter Split2.VBC
    // Generated from the component: Meter Split2.VBC_RMS
    // Generated from the component: Meter Split2.VBn_RMS
    // Generated from the component: Meter Split2.VCA
    // Generated from the component: Meter Split2.VCA_RMS
    // Generated from the component: Meter Split2.VCn_RMS
    // Generated from the component: Meter Split2.VLL_RMS
    // Generated from the component: Meter Split2.VLn_RMS
    // Generated from the component: Meter Split2.VN
    // Generated from the component: Meter Split2.Vn_RMS
    // Generated from the component: Meter Split2.gain
    _meter_split2_gain__out[0] = 0.0 * _meter_split2_input_bus__out29;
    _meter_split2_gain__out[1] = 0.0 * _meter_split2_input_bus__out29;
    _meter_split2_gain__out[2] = 0.0 * _meter_split2_input_bus__out29;
    _meter_split2_gain__out[3] = 0.0 * _meter_split2_input_bus__out29;
    _meter_split2_gain__out[4] = 0.0 * _meter_split2_input_bus__out29;
    _meter_split2_gain__out[5] = 0.0 * _meter_split2_input_bus__out29;
    _meter_split2_gain__out[6] = 0.0 * _meter_split2_input_bus__out29;
    _meter_split2_gain__out[7] = 0.0 * _meter_split2_input_bus__out29;
    _meter_split2_gain__out[8] = 0.0 * _meter_split2_input_bus__out29;
    _meter_split2_gain__out[9] = 0.0 * _meter_split2_input_bus__out29;
    _meter_split2_gain__out[10] = 0.0 * _meter_split2_input_bus__out29;
    _meter_split2_gain__out[11] = 0.0 * _meter_split2_input_bus__out29;
    // Generated from the component: Three Phase Phasor3
    _three_phase_phasor3__previous_filtered_value_ref = _three_phase_phasor3__filtered_value_ref;
    _three_phase_phasor3__previous_filtered_value1 = _three_phase_phasor3__filtered_value1;
    _three_phase_phasor3__previous_filtered_value2 = _three_phase_phasor3__filtered_value2;
    _three_phase_phasor3__previous_filtered_value3 = _three_phase_phasor3__filtered_value3;
    _three_phase_phasor3__filtered_value_ref = _three_phase_phasor3__previous_filtered_value_ref * 0.1 + _meter_split2_input_bus__out * 0.9;
    _three_phase_phasor3__filtered_value1 = _three_phase_phasor3__previous_filtered_value1 * 0.1 + _meter_split2_input_bus__out * 0.9;
    _three_phase_phasor3__filtered_value2 = _three_phase_phasor3__previous_filtered_value2 * 0.1 + _meter_split2_input_bus__out1 * 0.9;
    _three_phase_phasor3__filtered_value3 = _three_phase_phasor3__previous_filtered_value3 * 0.1 + _meter_split2_input_bus__out2 * 0.9;
    if( (_three_phase_phasor3__filtered_value_ref >= 0.0) && (_three_phase_phasor3__previous_filtered_value_ref < 0.0) )
        _three_phase_phasor3__zc_ref = 1;
    else
        _three_phase_phasor3__zc_ref = 0;
    if( (_three_phase_phasor3__filtered_value1 >= 0.0) && (_three_phase_phasor3__previous_filtered_value1 < 0.0) )
        _three_phase_phasor3__zc1 = 1;
    else
        _three_phase_phasor3__zc1 = 0;
    if( (_three_phase_phasor3__filtered_value2 >= 0.0) && (_three_phase_phasor3__previous_filtered_value2 < 0.0) )
        _three_phase_phasor3__zc2 = 1;
    else
        _three_phase_phasor3__zc2 = 0;
    if( (_three_phase_phasor3__filtered_value3 >= 0.0) && (_three_phase_phasor3__previous_filtered_value3 < 0.0) )
        _three_phase_phasor3__zc3 = 1;
    else
        _three_phase_phasor3__zc3 = 0;
    _three_phase_phasor3__phase1 = _three_phase_phasor3__phase1_state;
    _three_phase_phasor3__phase2 = _three_phase_phasor3__phase2_state;
    _three_phase_phasor3__phase3 = _three_phase_phasor3__phase3_state;
    _three_phase_phasor3__out1 = _three_phase_phasor3__magnitude1_state;
    _three_phase_phasor3__out2 = _three_phase_phasor3__magnitude2_state;
    _three_phase_phasor3__out3 = _three_phase_phasor3__magnitude3_state;
    // Generated from the component: Consumidor.PLL.PID.Gain1
    _consumidor_pll_pid_gain1__out = 714.2857 * _consumidor_pll_pid_sum8__out;
    // Generated from the component: Meter Split3.Freq
    // Generated from the component: Meter Split3.IA
    // Generated from the component: Meter Split3.IA_RMS
    // Generated from the component: Meter Split3.IB
    // Generated from the component: Meter Split3.IB_RMS
    // Generated from the component: Meter Split3.IC
    // Generated from the component: Meter Split3.IC_RMS
    // Generated from the component: Meter Split3.IN
    // Generated from the component: Meter Split3.IN_RMS
    // Generated from the component: Meter Split3.I_RMS
    // Generated from the component: Meter Split3.POWER_P
    // Generated from the component: Meter Split3.POWER_PF
    // Generated from the component: Meter Split3.POWER_Q
    // Generated from the component: Meter Split3.POWER_S
    // Generated from the component: Meter Split3.VAB_RMS
    // Generated from the component: Meter Split3.VAn
    // Generated from the component: Meter Split3.VAn_RMS
    // Generated from the component: Meter Split3.VBC_RMS
    // Generated from the component: Meter Split3.VBn
    // Generated from the component: Meter Split3.VBn_RMS
    // Generated from the component: Meter Split3.VCA_RMS
    // Generated from the component: Meter Split3.VCn
    // Generated from the component: Meter Split3.VCn_RMS
    // Generated from the component: Meter Split3.VLL_RMS
    // Generated from the component: Meter Split3.VLn_RMS
    // Generated from the component: Meter Split3.VN
    // Generated from the component: Meter Split3.Vn_RMS
    // Generated from the component: Meter Split3.gain
    _meter_split3_gain__out[0] = 0.0 * _meter_split3_input_bus__out29;
    _meter_split3_gain__out[1] = 0.0 * _meter_split3_input_bus__out29;
    _meter_split3_gain__out[2] = 0.0 * _meter_split3_input_bus__out29;
    _meter_split3_gain__out[3] = 0.0 * _meter_split3_input_bus__out29;
    _meter_split3_gain__out[4] = 0.0 * _meter_split3_input_bus__out29;
    _meter_split3_gain__out[5] = 0.0 * _meter_split3_input_bus__out29;
    _meter_split3_gain__out[6] = 0.0 * _meter_split3_input_bus__out29;
    _meter_split3_gain__out[7] = 0.0 * _meter_split3_input_bus__out29;
    _meter_split3_gain__out[8] = 0.0 * _meter_split3_input_bus__out29;
    _meter_split3_gain__out[9] = 0.0 * _meter_split3_input_bus__out29;
    _meter_split3_gain__out[10] = 0.0 * _meter_split3_input_bus__out29;
    _meter_split3_gain__out[11] = 0.0 * _meter_split3_input_bus__out29;
    // Generated from the component: Three Phase Phasor4
    _three_phase_phasor4__previous_filtered_value_ref = _three_phase_phasor4__filtered_value_ref;
    _three_phase_phasor4__previous_filtered_value1 = _three_phase_phasor4__filtered_value1;
    _three_phase_phasor4__previous_filtered_value2 = _three_phase_phasor4__filtered_value2;
    _three_phase_phasor4__previous_filtered_value3 = _three_phase_phasor4__filtered_value3;
    _three_phase_phasor4__filtered_value_ref = _three_phase_phasor4__previous_filtered_value_ref * 0.1 + _meter_split3_input_bus__out3 * 0.9;
    _three_phase_phasor4__filtered_value1 = _three_phase_phasor4__previous_filtered_value1 * 0.1 + _meter_split3_input_bus__out3 * 0.9;
    _three_phase_phasor4__filtered_value2 = _three_phase_phasor4__previous_filtered_value2 * 0.1 + _meter_split3_input_bus__out4 * 0.9;
    _three_phase_phasor4__filtered_value3 = _three_phase_phasor4__previous_filtered_value3 * 0.1 + _meter_split3_input_bus__out5 * 0.9;
    if( (_three_phase_phasor4__filtered_value_ref >= 0.0) && (_three_phase_phasor4__previous_filtered_value_ref < 0.0) )
        _three_phase_phasor4__zc_ref = 1;
    else
        _three_phase_phasor4__zc_ref = 0;
    if( (_three_phase_phasor4__filtered_value1 >= 0.0) && (_three_phase_phasor4__previous_filtered_value1 < 0.0) )
        _three_phase_phasor4__zc1 = 1;
    else
        _three_phase_phasor4__zc1 = 0;
    if( (_three_phase_phasor4__filtered_value2 >= 0.0) && (_three_phase_phasor4__previous_filtered_value2 < 0.0) )
        _three_phase_phasor4__zc2 = 1;
    else
        _three_phase_phasor4__zc2 = 0;
    if( (_three_phase_phasor4__filtered_value3 >= 0.0) && (_three_phase_phasor4__previous_filtered_value3 < 0.0) )
        _three_phase_phasor4__zc3 = 1;
    else
        _three_phase_phasor4__zc3 = 0;
    _three_phase_phasor4__phase1 = _three_phase_phasor4__phase1_state;
    _three_phase_phasor4__phase2 = _three_phase_phasor4__phase2_state;
    _three_phase_phasor4__phase3 = _three_phase_phasor4__phase3_state;
    _three_phase_phasor4__out1 = _three_phase_phasor4__magnitude1_state;
    _three_phase_phasor4__out2 = _three_phase_phasor4__magnitude2_state;
    _three_phase_phasor4__out3 = _three_phase_phasor4__magnitude3_state;
    // Generated from the component: Linha.PLL.PID.Gain1
    _linha_pll_pid_gain1__out = 714.2857 * _linha_pll_pid_sum8__out;
    // Generated from the component: (50) Instantaneous Overcurrent1.3-Phase Over Threshold.CMP1
    if (__50__instantaneous_overcurrent1_meter_split_input_bus__out18 < __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out) {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp1__out = 0;
    } else if (__50__instantaneous_overcurrent1_meter_split_input_bus__out18 > __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out) {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp1__out = 1;
    } else {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp1__out = __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp1__state;
    }
    // Generated from the component: (50) Instantaneous Overcurrent1.3-Phase Over Threshold.CMP2
    if (__50__instantaneous_overcurrent1_meter_split_input_bus__out19 < __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out) {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp2__out = 0;
    } else if (__50__instantaneous_overcurrent1_meter_split_input_bus__out19 > __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out) {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp2__out = 1;
    } else {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp2__out = __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp2__state;
    }
    // Generated from the component: (50) Instantaneous Overcurrent1.3-Phase Over Threshold.CMP3
    if (__50__instantaneous_overcurrent1_meter_split_input_bus__out20 < __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out) {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp3__out = 0;
    } else if (__50__instantaneous_overcurrent1_meter_split_input_bus__out20 > __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out) {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp3__out = 1;
    } else {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp3__out = __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp3__state;
    }
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.Freq
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.IA
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.IB
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.IC
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.IN
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.IN_RMS
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.I_RMS
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_P
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_PF
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_Q
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_S
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VAB
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VAB_RMS
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VAn
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VAn_RMS
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VBC
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VBC_RMS
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VBn
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VBn_RMS
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VCA
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VCA_RMS
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VCn
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VCn_RMS
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VLL_RMS
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VLn_RMS
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.VN
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.Vn_RMS
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.gain
    __50__instantaneous_overcurrent1_meter_split_gain__out[0] = 0.0 * __50__instantaneous_overcurrent1_meter_split_input_bus__out29;
    __50__instantaneous_overcurrent1_meter_split_gain__out[1] = 0.0 * __50__instantaneous_overcurrent1_meter_split_input_bus__out29;
    __50__instantaneous_overcurrent1_meter_split_gain__out[2] = 0.0 * __50__instantaneous_overcurrent1_meter_split_input_bus__out29;
    __50__instantaneous_overcurrent1_meter_split_gain__out[3] = 0.0 * __50__instantaneous_overcurrent1_meter_split_input_bus__out29;
    __50__instantaneous_overcurrent1_meter_split_gain__out[4] = 0.0 * __50__instantaneous_overcurrent1_meter_split_input_bus__out29;
    __50__instantaneous_overcurrent1_meter_split_gain__out[5] = 0.0 * __50__instantaneous_overcurrent1_meter_split_input_bus__out29;
    __50__instantaneous_overcurrent1_meter_split_gain__out[6] = 0.0 * __50__instantaneous_overcurrent1_meter_split_input_bus__out29;
    __50__instantaneous_overcurrent1_meter_split_gain__out[7] = 0.0 * __50__instantaneous_overcurrent1_meter_split_input_bus__out29;
    __50__instantaneous_overcurrent1_meter_split_gain__out[8] = 0.0 * __50__instantaneous_overcurrent1_meter_split_input_bus__out29;
    __50__instantaneous_overcurrent1_meter_split_gain__out[9] = 0.0 * __50__instantaneous_overcurrent1_meter_split_input_bus__out29;
    __50__instantaneous_overcurrent1_meter_split_gain__out[10] = 0.0 * __50__instantaneous_overcurrent1_meter_split_input_bus__out29;
    __50__instantaneous_overcurrent1_meter_split_gain__out[11] = 0.0 * __50__instantaneous_overcurrent1_meter_split_input_bus__out29;
    // Generated from the component: (51) AC Inverse Time Overcurrent1.3 Phase Inverse Time.3 Phase Inverse Time
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Arms = __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out18;
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Block = __51__ac_inverse_time_overcurrent1_block__out;
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Brms = __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out19;
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Crms = __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out20;
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__EmReset = __51__ac_inverse_time_overcurrent1_reset_mode__out;
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Level = __51__ac_inverse_time_overcurrent1_oc_threshold_pu__out;
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Scale = __51__ac_inverse_time_overcurrent1_in__out;
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__TimeDial = __51__ac_inverse_time_overcurrent1_time_dial_pu__out;
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__PickUp = (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Scale * __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Level);
    if (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__PickUp > 0) {
        __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__M[0] = __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Arms / __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__PickUp;
        __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__M[1] = __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Brms / __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__PickUp;
        __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__M[2] = __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Crms / __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__PickUp;
    }
    else {
        __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__M[0] = 0;
        __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__M[1] = 0;
        __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__M[2] = 0;
    }
    if (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Block > 0) {
        for (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx = 0; __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx < 3; __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx++) {
            __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx] = 0.0;
        }
    }
    else {
        for (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx = 0; __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx < 3; __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx++) {
            if (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__M[__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx] > 1.0) {
                __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx] += 0.001 / (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__TimeDial * (0.0352 + 5.67 / (pow(__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__M[__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx], 2.0) - 1.0)));
                if (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx] > 1.0)__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx] = 1.0;
            }
            else if (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__M[__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx] < 1.0) {
                if (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__EmReset) {
                    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx] -= 0.001 / (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__TimeDial * 5.67 / (1 - pow(__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__M[__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx], 2.0)));
                    if (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx] < 0.0)__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx] = 0.0;
                }
                else __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx] = 0.0;
            }
        }
    }
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Tripped = (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[0] >= 1.0) || (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[1] >= 1.0) || (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[2] >= 1.0);
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Reset = (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[0] == 0.0) && (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[1] == 0.0) && (__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[2] == 0.0);
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosA = __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[0];
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosB = __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[1];
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosC = __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[2];
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.Freq
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.IA
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.IB
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.IC
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.IN
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.IN_RMS
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.I_RMS
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_P
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_PF
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_Q
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_S
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VAB
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VAB_RMS
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VAn
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VAn_RMS
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VBC
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VBC_RMS
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VBn
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VBn_RMS
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VCA
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VCA_RMS
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VCn
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VCn_RMS
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VLL_RMS
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VLn_RMS
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.VN
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.Vn_RMS
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.gain
    __51__ac_inverse_time_overcurrent1_meter_split_gain__out[0] = 0.0 * __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29;
    __51__ac_inverse_time_overcurrent1_meter_split_gain__out[1] = 0.0 * __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29;
    __51__ac_inverse_time_overcurrent1_meter_split_gain__out[2] = 0.0 * __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29;
    __51__ac_inverse_time_overcurrent1_meter_split_gain__out[3] = 0.0 * __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29;
    __51__ac_inverse_time_overcurrent1_meter_split_gain__out[4] = 0.0 * __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29;
    __51__ac_inverse_time_overcurrent1_meter_split_gain__out[5] = 0.0 * __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29;
    __51__ac_inverse_time_overcurrent1_meter_split_gain__out[6] = 0.0 * __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29;
    __51__ac_inverse_time_overcurrent1_meter_split_gain__out[7] = 0.0 * __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29;
    __51__ac_inverse_time_overcurrent1_meter_split_gain__out[8] = 0.0 * __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29;
    __51__ac_inverse_time_overcurrent1_meter_split_gain__out[9] = 0.0 * __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29;
    __51__ac_inverse_time_overcurrent1_meter_split_gain__out[10] = 0.0 * __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29;
    __51__ac_inverse_time_overcurrent1_meter_split_gain__out[11] = 0.0 * __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29;
    // Generated from the component: Meter Split4.Freq
    // Generated from the component: Meter Split4.IA
    // Generated from the component: Meter Split4.IB
    // Generated from the component: Meter Split4.IC
    // Generated from the component: Meter Split4.IN
    // Generated from the component: Meter Split4.IN_RMS
    // Generated from the component: Meter Split4.POWER_P
    // Generated from the component: Meter Split4.POWER_PF
    // Generated from the component: Meter Split4.POWER_Q
    // Generated from the component: Meter Split4.POWER_S
    // Generated from the component: Meter Split4.VAB
    // Generated from the component: Meter Split4.VAB_RMS
    // Generated from the component: Meter Split4.VAn
    // Generated from the component: Meter Split4.VAn_RMS
    // Generated from the component: Meter Split4.VBC
    // Generated from the component: Meter Split4.VBC_RMS
    // Generated from the component: Meter Split4.VBn
    // Generated from the component: Meter Split4.VBn_RMS
    // Generated from the component: Meter Split4.VCA
    // Generated from the component: Meter Split4.VCA_RMS
    // Generated from the component: Meter Split4.VCn
    // Generated from the component: Meter Split4.VCn_RMS
    // Generated from the component: Meter Split4.VLL_RMS
    // Generated from the component: Meter Split4.VLn_RMS
    // Generated from the component: Meter Split4.VN
    // Generated from the component: Meter Split4.Vn_RMS
    // Generated from the component: Meter Split4.gain
    _meter_split4_gain__out[0] = 0.0 * _meter_split4_input_bus__out29;
    _meter_split4_gain__out[1] = 0.0 * _meter_split4_input_bus__out29;
    _meter_split4_gain__out[2] = 0.0 * _meter_split4_input_bus__out29;
    _meter_split4_gain__out[3] = 0.0 * _meter_split4_input_bus__out29;
    _meter_split4_gain__out[4] = 0.0 * _meter_split4_input_bus__out29;
    _meter_split4_gain__out[5] = 0.0 * _meter_split4_input_bus__out29;
    _meter_split4_gain__out[6] = 0.0 * _meter_split4_input_bus__out29;
    _meter_split4_gain__out[7] = 0.0 * _meter_split4_input_bus__out29;
    _meter_split4_gain__out[8] = 0.0 * _meter_split4_input_bus__out29;
    _meter_split4_gain__out[9] = 0.0 * _meter_split4_input_bus__out29;
    _meter_split4_gain__out[10] = 0.0 * _meter_split4_input_bus__out29;
    _meter_split4_gain__out[11] = 0.0 * _meter_split4_input_bus__out29;
    // Generated from the component: ReleA
    XIo_OutFloat(0x550001c4, _meter_split4_input_bus__out18);
    // Generated from the component: ReleB
    XIo_OutFloat(0x550001c8, _meter_split4_input_bus__out19);
    // Generated from the component: ReleC
    XIo_OutFloat(0x550001cc, _meter_split4_input_bus__out20);
    // Generated from the component: ReleI
    XIo_OutFloat(0x550001d0, _meter_split4_input_bus__out21);
    // Generated from the component: Rele.PLL.PID.Gain1
    _rele_pll_pid_gain1__out = 714.2857 * _rele_pll_pid_sum8__out;
    // Generated from the component: Meter Split2.extra_input_bus
    _meter_split2_extra_input_bus__out = _meter_split2_gain__out[0];
    _meter_split2_extra_input_bus__out1 = _meter_split2_gain__out[1];
    _meter_split2_extra_input_bus__out2 = _meter_split2_gain__out[2];
    _meter_split2_extra_input_bus__out3 = _meter_split2_gain__out[3];
    _meter_split2_extra_input_bus__out4 = _meter_split2_gain__out[4];
    _meter_split2_extra_input_bus__out5 = _meter_split2_gain__out[5];
    _meter_split2_extra_input_bus__out6 = _meter_split2_gain__out[6];
    _meter_split2_extra_input_bus__out7 = _meter_split2_gain__out[7];
    _meter_split2_extra_input_bus__out8 = _meter_split2_gain__out[8];
    _meter_split2_extra_input_bus__out9 = _meter_split2_gain__out[9];
    _meter_split2_extra_input_bus__out10 = _meter_split2_gain__out[10];
    _meter_split2_extra_input_bus__out11 = _meter_split2_gain__out[11];
    // Generated from the component: Linha_Angulo_A1
    XIo_OutFloat(0x55000198, _three_phase_phasor3__phase1);
    // Generated from the component: Linha_Angulo_B1
    XIo_OutFloat(0x550001a0, _three_phase_phasor3__phase2);
    // Generated from the component: Linha_Angulo_C1
    XIo_OutFloat(0x550001a8, _three_phase_phasor3__phase3);
    // Generated from the component: Linha_Tensao_A1
    XIo_OutFloat(0x550001b0, _three_phase_phasor3__out1);
    // Generated from the component: Linha_Tensao_B1
    XIo_OutFloat(0x550001b8, _three_phase_phasor3__out2);
    // Generated from the component: Linha_Tensao_C1
    XIo_OutFloat(0x550001c0, _three_phase_phasor3__out3);
    // Generated from the component: Consumidor.PLL.PID.Sum5
    _consumidor_pll_pid_sum5__out = _consumidor_pll_pid_kp__out + _consumidor_pll_pid_gain1__out + _consumidor_pll_pid_integrator1__out;
    // Generated from the component: Meter Split3.extra_input_bus
    _meter_split3_extra_input_bus__out = _meter_split3_gain__out[0];
    _meter_split3_extra_input_bus__out1 = _meter_split3_gain__out[1];
    _meter_split3_extra_input_bus__out2 = _meter_split3_gain__out[2];
    _meter_split3_extra_input_bus__out3 = _meter_split3_gain__out[3];
    _meter_split3_extra_input_bus__out4 = _meter_split3_gain__out[4];
    _meter_split3_extra_input_bus__out5 = _meter_split3_gain__out[5];
    _meter_split3_extra_input_bus__out6 = _meter_split3_gain__out[6];
    _meter_split3_extra_input_bus__out7 = _meter_split3_gain__out[7];
    _meter_split3_extra_input_bus__out8 = _meter_split3_gain__out[8];
    _meter_split3_extra_input_bus__out9 = _meter_split3_gain__out[9];
    _meter_split3_extra_input_bus__out10 = _meter_split3_gain__out[10];
    _meter_split3_extra_input_bus__out11 = _meter_split3_gain__out[11];
    // Generated from the component: Linha_Angulo_A
    XIo_OutFloat(0x55000194, _three_phase_phasor4__phase1);
    // Generated from the component: Linha_Angulo_B
    XIo_OutFloat(0x5500019c, _three_phase_phasor4__phase2);
    // Generated from the component: Linha_Angulo_C
    XIo_OutFloat(0x550001a4, _three_phase_phasor4__phase3);
    // Generated from the component: Linha_Tensao_A
    XIo_OutFloat(0x550001ac, _three_phase_phasor4__out1);
    // Generated from the component: Linha_Tensao_B
    XIo_OutFloat(0x550001b4, _three_phase_phasor4__out2);
    // Generated from the component: Linha_Tensao_C
    XIo_OutFloat(0x550001bc, _three_phase_phasor4__out3);
    // Generated from the component: Linha.PLL.PID.Sum5
    _linha_pll_pid_sum5__out = _linha_pll_pid_kp__out + _linha_pll_pid_gain1__out + _linha_pll_pid_integrator1__out;
    // Generated from the component: (50) Instantaneous Overcurrent1.3-Phase Over Threshold.block function.Logical operator1
    __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator1__out = __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator2__out && __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp1__out ;
    // Generated from the component: (50) Instantaneous Overcurrent1.3-Phase Over Threshold.block function.Logical operator3
    __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator3__out = __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator2__out && __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp2__out ;
    // Generated from the component: (50) Instantaneous Overcurrent1.3-Phase Over Threshold.block function.Logical operator4
    __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator4__out = __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator2__out && __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp3__out ;
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.extra_input_bus
    __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out = __50__instantaneous_overcurrent1_meter_split_gain__out[0];
    __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out1 = __50__instantaneous_overcurrent1_meter_split_gain__out[1];
    __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out2 = __50__instantaneous_overcurrent1_meter_split_gain__out[2];
    __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out3 = __50__instantaneous_overcurrent1_meter_split_gain__out[3];
    __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out4 = __50__instantaneous_overcurrent1_meter_split_gain__out[4];
    __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out5 = __50__instantaneous_overcurrent1_meter_split_gain__out[5];
    __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out6 = __50__instantaneous_overcurrent1_meter_split_gain__out[6];
    __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out7 = __50__instantaneous_overcurrent1_meter_split_gain__out[7];
    __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out8 = __50__instantaneous_overcurrent1_meter_split_gain__out[8];
    __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out9 = __50__instantaneous_overcurrent1_meter_split_gain__out[9];
    __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out10 = __50__instantaneous_overcurrent1_meter_split_gain__out[10];
    __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out11 = __50__instantaneous_overcurrent1_meter_split_gain__out[11];
    // Generated from the component: (51) AC Inverse Time Overcurrent1.DIAL-POS-A
    HIL_OutAO(0x4007, __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosA);
    // Generated from the component: (51) AC Inverse Time Overcurrent1.DIAL-POS-B
    HIL_OutAO(0x4008, __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosB);
    // Generated from the component: (51) AC Inverse Time Overcurrent1.DIAL-POS-C
    HIL_OutAO(0x4009, __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosC);
    // Generated from the component: (51) AC Inverse Time Overcurrent1.RESET
    HIL_OutInt32(0xf00402, __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Reset != 0x0);
    // Generated from the component: (51) AC Inverse Time Overcurrent1.TRIP
    HIL_OutInt32(0xf00403, __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Tripped != 0x0);
    // Generated from the component: Dial_reset
    XIo_OutFloat(0x55000164, __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Reset);
    // Generated from the component: Disj2
    XIo_OutFloat(0x5500016c, __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Tripped);
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.extra_input_bus
    __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out = __51__ac_inverse_time_overcurrent1_meter_split_gain__out[0];
    __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out1 = __51__ac_inverse_time_overcurrent1_meter_split_gain__out[1];
    __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out2 = __51__ac_inverse_time_overcurrent1_meter_split_gain__out[2];
    __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out3 = __51__ac_inverse_time_overcurrent1_meter_split_gain__out[3];
    __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out4 = __51__ac_inverse_time_overcurrent1_meter_split_gain__out[4];
    __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out5 = __51__ac_inverse_time_overcurrent1_meter_split_gain__out[5];
    __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out6 = __51__ac_inverse_time_overcurrent1_meter_split_gain__out[6];
    __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out7 = __51__ac_inverse_time_overcurrent1_meter_split_gain__out[7];
    __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out8 = __51__ac_inverse_time_overcurrent1_meter_split_gain__out[8];
    __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out9 = __51__ac_inverse_time_overcurrent1_meter_split_gain__out[9];
    __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out10 = __51__ac_inverse_time_overcurrent1_meter_split_gain__out[10];
    __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out11 = __51__ac_inverse_time_overcurrent1_meter_split_gain__out[11];
    // Generated from the component: Meter Split4.extra_input_bus
    _meter_split4_extra_input_bus__out = _meter_split4_gain__out[0];
    _meter_split4_extra_input_bus__out1 = _meter_split4_gain__out[1];
    _meter_split4_extra_input_bus__out2 = _meter_split4_gain__out[2];
    _meter_split4_extra_input_bus__out3 = _meter_split4_gain__out[3];
    _meter_split4_extra_input_bus__out4 = _meter_split4_gain__out[4];
    _meter_split4_extra_input_bus__out5 = _meter_split4_gain__out[5];
    _meter_split4_extra_input_bus__out6 = _meter_split4_gain__out[6];
    _meter_split4_extra_input_bus__out7 = _meter_split4_gain__out[7];
    _meter_split4_extra_input_bus__out8 = _meter_split4_gain__out[8];
    _meter_split4_extra_input_bus__out9 = _meter_split4_gain__out[9];
    _meter_split4_extra_input_bus__out10 = _meter_split4_gain__out[10];
    _meter_split4_extra_input_bus__out11 = _meter_split4_gain__out[11];
    // Generated from the component: Rele.PLL.PID.Sum5
    _rele_pll_pid_sum5__out = _rele_pll_pid_kp__out + _rele_pll_pid_gain1__out + _rele_pll_pid_integrator1__out;
    // Generated from the component: Meter Split2.POWER_PA
    // Generated from the component: Meter Split2.POWER_PB
    // Generated from the component: Meter Split2.POWER_PC
    // Generated from the component: Meter Split2.POWER_PFA
    // Generated from the component: Meter Split2.POWER_PFB
    // Generated from the component: Meter Split2.POWER_PFC
    // Generated from the component: Meter Split2.POWER_QA
    // Generated from the component: Meter Split2.POWER_QB
    // Generated from the component: Meter Split2.POWER_QC
    // Generated from the component: Meter Split2.POWER_SA
    // Generated from the component: Meter Split2.POWER_SB
    // Generated from the component: Meter Split2.POWER_SC
    // Generated from the component: Consumidor.PLL.PID.Limit1
    _consumidor_pll_pid_limit1__out = MIN(MAX(_consumidor_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: Meter Split3.POWER_PA
    // Generated from the component: Meter Split3.POWER_PB
    // Generated from the component: Meter Split3.POWER_PC
    // Generated from the component: Meter Split3.POWER_PFA
    // Generated from the component: Meter Split3.POWER_PFB
    // Generated from the component: Meter Split3.POWER_PFC
    // Generated from the component: Meter Split3.POWER_QA
    // Generated from the component: Meter Split3.POWER_QB
    // Generated from the component: Meter Split3.POWER_QC
    // Generated from the component: Meter Split3.POWER_SA
    // Generated from the component: Meter Split3.POWER_SB
    // Generated from the component: Meter Split3.POWER_SC
    // Generated from the component: Linha.PLL.PID.Limit1
    _linha_pll_pid_limit1__out = MIN(MAX(_linha_pll_pid_sum5__out, -10000.0), 10000.0);
    // Generated from the component: (50) Instantaneous Overcurrent1.trip_A
    // Generated from the component: (50) Instantaneous Overcurrent1.trip_B
    // Generated from the component: (50) Instantaneous Overcurrent1.3-Phase Over Threshold.LG1
    __50__instantaneous_overcurrent1_3_phase_over_threshold_lg1__out = __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator1__out || __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator3__out || __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator4__out ;
    // Generated from the component: (50) Instantaneous Overcurrent1.trip_C
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_PA
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_PB
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_PC
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_PFA
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_PFB
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_PFC
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_QA
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_QB
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_QC
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_SA
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_SB
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.POWER_SC
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_PA
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_PB
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_PC
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_PFA
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_PFB
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_PFC
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_QA
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_QB
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_QC
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_SA
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_SB
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.POWER_SC
    // Generated from the component: Meter Split4.POWER_PA
    // Generated from the component: Meter Split4.POWER_PB
    // Generated from the component: Meter Split4.POWER_PC
    // Generated from the component: Meter Split4.POWER_PFA
    // Generated from the component: Meter Split4.POWER_PFB
    // Generated from the component: Meter Split4.POWER_PFC
    // Generated from the component: Meter Split4.POWER_QA
    // Generated from the component: Meter Split4.POWER_QB
    // Generated from the component: Meter Split4.POWER_QC
    // Generated from the component: Meter Split4.POWER_SA
    // Generated from the component: Meter Split4.POWER_SB
    // Generated from the component: Meter Split4.POWER_SC
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
    // Generated from the component: Linha.PLL.PID.Sum6
    _linha_pll_pid_sum6__out =  - _linha_pll_pid_sum5__out + _linha_pll_pid_limit1__out;
    // Generated from the component: Linha.PLL.Rate Limiter1
    if (_linha_pll_rate_limiter1__first_step) {
        _linha_pll_rate_limiter1__out = _linha_pll_pid_limit1__out;
        _linha_pll_rate_limiter1__state = _linha_pll_pid_limit1__out;
    } else {
        _linha_pll_rate_limiter1__out = _linha_pll_pid_limit1__out;
        if (_linha_pll_pid_limit1__out - _linha_pll_rate_limiter1__state > 0.07539822368615504)
            _linha_pll_rate_limiter1__out = _linha_pll_rate_limiter1__state + (0.07539822368615504);
        if (_linha_pll_pid_limit1__out - _linha_pll_rate_limiter1__state < -0.07539822368615504)
            _linha_pll_rate_limiter1__out = _linha_pll_rate_limiter1__state + (-0.07539822368615504);
    }
    // Generated from the component: Linha.PLL.integrator
    _linha_pll_integrator__in = _linha_pll_pid_limit1__out;
    _linha_pll_integrator__out += 0.001 * _linha_pll_integrator__in;
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
    // Generated from the component: (50) Instantaneous Overcurrent1.TRIP-INST
    HIL_OutInt32(0xf00400, __50__instantaneous_overcurrent1_3_phase_over_threshold_lg1__out != 0x0);
    // Generated from the component: Disj1
    XIo_OutFloat(0x55000168, __50__instantaneous_overcurrent1_3_phase_over_threshold_lg1__out);
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
    // Generated from the component: Linha.PLL.PID.Kb
    _linha_pll_pid_kb__out = 1.0 * _linha_pll_pid_sum6__out;
    // Generated from the component: Linha.PLL.LPF.LPF
    X_UnInt32 _linha_pll_lpf_lpf__i;
    _linha_pll_lpf_lpf__a_sum = 0.0f;
    _linha_pll_lpf_lpf__b_sum = 0.0f;
    _linha_pll_lpf_lpf__delay_line_in = 0.0f;
    for (_linha_pll_lpf_lpf__i = 0; _linha_pll_lpf_lpf__i < 1; _linha_pll_lpf_lpf__i++) {
        _linha_pll_lpf_lpf__b_sum += _linha_pll_lpf_lpf__b_coeff[_linha_pll_lpf_lpf__i] * _linha_pll_lpf_lpf__states[_linha_pll_lpf_lpf__i + 1];
    }
    for (_linha_pll_lpf_lpf__i = 1; _linha_pll_lpf_lpf__i > 0; _linha_pll_lpf_lpf__i--) {
        _linha_pll_lpf_lpf__a_sum += _linha_pll_lpf_lpf__a_coeff[_linha_pll_lpf_lpf__i + 1] * _linha_pll_lpf_lpf__states[_linha_pll_lpf_lpf__i];
    }
    _linha_pll_lpf_lpf__a_sum += _linha_pll_lpf_lpf__states[0] * _linha_pll_lpf_lpf__a_coeff[1];
    _linha_pll_lpf_lpf__delay_line_in = _linha_pll_rate_limiter1__out - _linha_pll_lpf_lpf__a_sum;
    _linha_pll_lpf_lpf__out = _linha_pll_lpf_lpf__b_sum;
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
    // Generated from the component: Linha.PLL.PID.Sum7
    _linha_pll_pid_sum7__out = _linha_pll_pid_ki__out + _linha_pll_pid_kb__out;
    // Generated from the component: Rele.PLL.PID.Sum7
    _rele_pll_pid_sum7__out = _rele_pll_pid_ki__out + _rele_pll_pid_kb__out;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: (50) Instantaneous Overcurrent1.Trip Memory.SR1
    if ((__50__instantaneous_overcurrent1_3_phase_over_threshold_lg1__out != 0x0) && (__50__instantaneous_overcurrent1_mem_en_rst__out == 0x0))
        __50__instantaneous_overcurrent1_trip_memory_sr1__state = 1;
    else if ((__50__instantaneous_overcurrent1_3_phase_over_threshold_lg1__out == 0x0) && (__50__instantaneous_overcurrent1_mem_en_rst__out != 0x0))
        __50__instantaneous_overcurrent1_trip_memory_sr1__state = 0;
    else if ((__50__instantaneous_overcurrent1_3_phase_over_threshold_lg1__out != 0x0) && (__50__instantaneous_overcurrent1_mem_en_rst__out != 0x0))
        __50__instantaneous_overcurrent1_trip_memory_sr1__state = -1;
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Trip Memory.SR1
    if ((__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Tripped != 0x0) && (__51__ac_inverse_time_overcurrent1_mem_en_rst__out == 0x0))
        __51__ac_inverse_time_overcurrent1_trip_memory_sr1__state = 1;
    else if ((__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Tripped == 0x0) && (__51__ac_inverse_time_overcurrent1_mem_en_rst__out != 0x0))
        __51__ac_inverse_time_overcurrent1_trip_memory_sr1__state = 0;
    else if ((__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Tripped != 0x0) && (__51__ac_inverse_time_overcurrent1_mem_en_rst__out != 0x0))
        __51__ac_inverse_time_overcurrent1_trip_memory_sr1__state = -1;
    // Generated from the component: Consumidor.PLL.PID.Integrator1
    _consumidor_pll_pid_integrator1__state += _consumidor_pll_pid_sum7__out * 0.001;
    // Generated from the component: Consumidor.PLL.PID.Integrator2
    _consumidor_pll_pid_integrator2__state += _consumidor_pll_pid_gain1__out * 0.001;
    // Generated from the component: Consumidor.PLL.Unit Delay1
    _consumidor_pll_unit_delay1__state = _consumidor_pll_integrator__out;
    // Generated from the component: Linha.PLL.PID.Integrator1
    _linha_pll_pid_integrator1__state += _linha_pll_pid_sum7__out * 0.001;
    // Generated from the component: Linha.PLL.PID.Integrator2
    _linha_pll_pid_integrator2__state += _linha_pll_pid_gain1__out * 0.001;
    // Generated from the component: Linha.PLL.Unit Delay1
    _linha_pll_unit_delay1__state = _linha_pll_integrator__out;
    // Generated from the component: Rele.PLL.PID.Integrator1
    _rele_pll_pid_integrator1__state += _rele_pll_pid_sum7__out * 0.001;
    // Generated from the component: Rele.PLL.PID.Integrator2
    _rele_pll_pid_integrator2__state += _rele_pll_pid_gain1__out * 0.001;
    // Generated from the component: Rele.PLL.Unit Delay1
    _rele_pll_unit_delay1__state = _rele_pll_integrator__out;
    // Generated from the component: Consumidor.measSM.mode_and_dFract
    // Generated from the component: Falta.Control state machine
    // Generated from the component: FaltaConsumidor.Control state machine
    // Generated from the component: Linha.measSM.mode_and_dFract
    // Generated from the component: Rele.measSM.mode_and_dFract
    // Generated from the component: Consumidor.I_RMS_calc.RMS
    // Generated from the component: Consumidor.VLL_RMS_calc.RMS
    // Generated from the component: Consumidor.VLn_RMS_calc.RMS
    // Generated from the component: Linha.I_RMS_calc.RMS
    // Generated from the component: Linha.VLL_RMS_calc.RMS
    // Generated from the component: Linha.VLn_RMS_calc.RMS
    // Generated from the component: Rele.I_RMS_calc.RMS
    // Generated from the component: Rele.VLL_RMS_calc.RMS
    // Generated from the component: Rele.VLn_RMS_calc.RMS
    // Generated from the component: Consumidor.PLL.normalize
    // Generated from the component: Linha.PLL.normalize
    // Generated from the component: Rele.PLL.normalize
    // Generated from the component: Three Phase Phasor3
    if( _three_phase_phasor3__zc_ref || (_three_phase_phasor3__sample_cnt_ref >= 500) ) {
        if (_meter_split2_input_bus__out != _three_phase_phasor3__previous_value_ref)
            _three_phase_phasor3__correction_ref = - _three_phase_phasor3__previous_value_ref / (_meter_split2_input_bus__out - _three_phase_phasor3__previous_value_ref);
        else
            _three_phase_phasor3__correction_ref = 0;
        _three_phase_phasor3__sample_cnt_ref += _three_phase_phasor3__correction_ref - _three_phase_phasor3__previous_correction_ref;
        _three_phase_phasor3__phase1_state = (_three_phase_phasor3__sample_cnt1 + _three_phase_phasor3__correction_ref - _three_phase_phasor3__previous_correction1) / _three_phase_phasor3__sample_cnt_ref * 360;
        _three_phase_phasor3__phase2_state = (_three_phase_phasor3__sample_cnt2 + _three_phase_phasor3__correction_ref - _three_phase_phasor3__previous_correction2) / _three_phase_phasor3__sample_cnt_ref * 360;
        _three_phase_phasor3__phase3_state = (_three_phase_phasor3__sample_cnt3 + _three_phase_phasor3__correction_ref - _three_phase_phasor3__previous_correction3) / _three_phase_phasor3__sample_cnt_ref * 360;
        if (_three_phase_phasor3__phase1_state < -180)
            _three_phase_phasor3__phase1_state += 360;
        else if (_three_phase_phasor3__phase1_state > 180)
            _three_phase_phasor3__phase1_state -= 360;
        if (_three_phase_phasor3__phase2_state < -180)
            _three_phase_phasor3__phase2_state += 360;
        else if (_three_phase_phasor3__phase2_state > 180)
            _three_phase_phasor3__phase2_state -= 360;
        if (_three_phase_phasor3__phase3_state < -180)
            _three_phase_phasor3__phase3_state += 360;
        else if (_three_phase_phasor3__phase3_state > 180)
            _three_phase_phasor3__phase3_state -= 360;
        _three_phase_phasor3__sample_cnt_ref = 0;
        _three_phase_phasor3__previous_correction_ref = _three_phase_phasor3__correction_ref;
    }
    if( _three_phase_phasor3__zc1 || (_three_phase_phasor3__sample_cnt1 >= 500) ) {
        if (_meter_split2_input_bus__out != _three_phase_phasor3__previous_value1)
            _three_phase_phasor3__correction1 = - _three_phase_phasor3__previous_value1 / (_meter_split2_input_bus__out - _three_phase_phasor3__previous_value1);
        else
            _three_phase_phasor3__correction1 = 0;
        float _three_phase_phasor3__tmp = _three_phase_phasor3__sample_cnt1 + _three_phase_phasor3__correction1 - _three_phase_phasor3__previous_correction1;
        _three_phase_phasor3__sample_cnt1 = (_three_phase_phasor3__tmp < 0) ? _three_phase_phasor3__sample_cnt1 : _three_phase_phasor3__tmp;
        _three_phase_phasor3__magnitude1_state = sqrtf(_three_phase_phasor3__signal1_square_sum / _three_phase_phasor3__sample_cnt1);
        _three_phase_phasor3__sample_cnt1 = 0;
        _three_phase_phasor3__signal1_square_sum = 0;
        _three_phase_phasor3__previous_correction1 = _three_phase_phasor3__correction1;
    }
    if( _three_phase_phasor3__zc2 || (_three_phase_phasor3__sample_cnt2 >= 500) ) {
        if (_meter_split2_input_bus__out1 != _three_phase_phasor3__previous_value2)
            _three_phase_phasor3__correction2 = - _three_phase_phasor3__previous_value2 / (_meter_split2_input_bus__out1 - _three_phase_phasor3__previous_value2);
        else
            _three_phase_phasor3__correction2 = 0;
        float _three_phase_phasor3__tmp = _three_phase_phasor3__sample_cnt2 + _three_phase_phasor3__correction2 - _three_phase_phasor3__previous_correction2;
        _three_phase_phasor3__sample_cnt2 = (_three_phase_phasor3__tmp < 0) ? _three_phase_phasor3__sample_cnt2 : _three_phase_phasor3__tmp;
        _three_phase_phasor3__magnitude2_state = sqrtf(_three_phase_phasor3__signal2_square_sum / _three_phase_phasor3__sample_cnt2);
        _three_phase_phasor3__sample_cnt2 = 0;
        _three_phase_phasor3__signal2_square_sum = 0;
        _three_phase_phasor3__previous_correction2 = _three_phase_phasor3__correction2;
    }
    if( _three_phase_phasor3__zc3 || (_three_phase_phasor3__sample_cnt3 >= 500) ) {
        if (_meter_split2_input_bus__out2 != _three_phase_phasor3__previous_value3)
            _three_phase_phasor3__correction3 = - _three_phase_phasor3__previous_value3 / (_meter_split2_input_bus__out2 - _three_phase_phasor3__previous_value3);
        else
            _three_phase_phasor3__correction3 = 0;
        float _three_phase_phasor3__tmp = _three_phase_phasor3__sample_cnt3 + _three_phase_phasor3__correction3 - _three_phase_phasor3__previous_correction3;
        _three_phase_phasor3__sample_cnt3 = (_three_phase_phasor3__tmp < 0) ? _three_phase_phasor3__sample_cnt3 : _three_phase_phasor3__tmp;
        _three_phase_phasor3__magnitude3_state = sqrtf(_three_phase_phasor3__signal3_square_sum / _three_phase_phasor3__sample_cnt3);
        _three_phase_phasor3__sample_cnt3 = 0;
        _three_phase_phasor3__signal3_square_sum = 0;
        _three_phase_phasor3__previous_correction3 = _three_phase_phasor3__correction3;
    }
    _three_phase_phasor3__sample_cnt_ref++;
    _three_phase_phasor3__sample_cnt1++;
    _three_phase_phasor3__sample_cnt2++;
    _three_phase_phasor3__sample_cnt3++;
    _three_phase_phasor3__previous_value_ref = _meter_split2_input_bus__out;
    _three_phase_phasor3__previous_value1 = _meter_split2_input_bus__out;
    _three_phase_phasor3__previous_value2 = _meter_split2_input_bus__out1;
    _three_phase_phasor3__previous_value3 = _meter_split2_input_bus__out2;
    _three_phase_phasor3__signal1_square_sum += _meter_split2_input_bus__out * _meter_split2_input_bus__out;
    _three_phase_phasor3__signal2_square_sum += _meter_split2_input_bus__out1 * _meter_split2_input_bus__out1;
    _three_phase_phasor3__signal3_square_sum += _meter_split2_input_bus__out2 * _meter_split2_input_bus__out2;
    // Generated from the component: Three Phase Phasor4
    if( _three_phase_phasor4__zc_ref || (_three_phase_phasor4__sample_cnt_ref >= 500) ) {
        if (_meter_split3_input_bus__out3 != _three_phase_phasor4__previous_value_ref)
            _three_phase_phasor4__correction_ref = - _three_phase_phasor4__previous_value_ref / (_meter_split3_input_bus__out3 - _three_phase_phasor4__previous_value_ref);
        else
            _three_phase_phasor4__correction_ref = 0;
        _three_phase_phasor4__sample_cnt_ref += _three_phase_phasor4__correction_ref - _three_phase_phasor4__previous_correction_ref;
        _three_phase_phasor4__phase1_state = (_three_phase_phasor4__sample_cnt1 + _three_phase_phasor4__correction_ref - _three_phase_phasor4__previous_correction1) / _three_phase_phasor4__sample_cnt_ref * 360;
        _three_phase_phasor4__phase2_state = (_three_phase_phasor4__sample_cnt2 + _three_phase_phasor4__correction_ref - _three_phase_phasor4__previous_correction2) / _three_phase_phasor4__sample_cnt_ref * 360;
        _three_phase_phasor4__phase3_state = (_three_phase_phasor4__sample_cnt3 + _three_phase_phasor4__correction_ref - _three_phase_phasor4__previous_correction3) / _three_phase_phasor4__sample_cnt_ref * 360;
        if (_three_phase_phasor4__phase1_state < -180)
            _three_phase_phasor4__phase1_state += 360;
        else if (_three_phase_phasor4__phase1_state > 180)
            _three_phase_phasor4__phase1_state -= 360;
        if (_three_phase_phasor4__phase2_state < -180)
            _three_phase_phasor4__phase2_state += 360;
        else if (_three_phase_phasor4__phase2_state > 180)
            _three_phase_phasor4__phase2_state -= 360;
        if (_three_phase_phasor4__phase3_state < -180)
            _three_phase_phasor4__phase3_state += 360;
        else if (_three_phase_phasor4__phase3_state > 180)
            _three_phase_phasor4__phase3_state -= 360;
        _three_phase_phasor4__sample_cnt_ref = 0;
        _three_phase_phasor4__previous_correction_ref = _three_phase_phasor4__correction_ref;
    }
    if( _three_phase_phasor4__zc1 || (_three_phase_phasor4__sample_cnt1 >= 500) ) {
        if (_meter_split3_input_bus__out3 != _three_phase_phasor4__previous_value1)
            _three_phase_phasor4__correction1 = - _three_phase_phasor4__previous_value1 / (_meter_split3_input_bus__out3 - _three_phase_phasor4__previous_value1);
        else
            _three_phase_phasor4__correction1 = 0;
        float _three_phase_phasor4__tmp = _three_phase_phasor4__sample_cnt1 + _three_phase_phasor4__correction1 - _three_phase_phasor4__previous_correction1;
        _three_phase_phasor4__sample_cnt1 = (_three_phase_phasor4__tmp < 0) ? _three_phase_phasor4__sample_cnt1 : _three_phase_phasor4__tmp;
        _three_phase_phasor4__magnitude1_state = sqrtf(_three_phase_phasor4__signal1_square_sum / _three_phase_phasor4__sample_cnt1);
        _three_phase_phasor4__sample_cnt1 = 0;
        _three_phase_phasor4__signal1_square_sum = 0;
        _three_phase_phasor4__previous_correction1 = _three_phase_phasor4__correction1;
    }
    if( _three_phase_phasor4__zc2 || (_three_phase_phasor4__sample_cnt2 >= 500) ) {
        if (_meter_split3_input_bus__out4 != _three_phase_phasor4__previous_value2)
            _three_phase_phasor4__correction2 = - _three_phase_phasor4__previous_value2 / (_meter_split3_input_bus__out4 - _three_phase_phasor4__previous_value2);
        else
            _three_phase_phasor4__correction2 = 0;
        float _three_phase_phasor4__tmp = _three_phase_phasor4__sample_cnt2 + _three_phase_phasor4__correction2 - _three_phase_phasor4__previous_correction2;
        _three_phase_phasor4__sample_cnt2 = (_three_phase_phasor4__tmp < 0) ? _three_phase_phasor4__sample_cnt2 : _three_phase_phasor4__tmp;
        _three_phase_phasor4__magnitude2_state = sqrtf(_three_phase_phasor4__signal2_square_sum / _three_phase_phasor4__sample_cnt2);
        _three_phase_phasor4__sample_cnt2 = 0;
        _three_phase_phasor4__signal2_square_sum = 0;
        _three_phase_phasor4__previous_correction2 = _three_phase_phasor4__correction2;
    }
    if( _three_phase_phasor4__zc3 || (_three_phase_phasor4__sample_cnt3 >= 500) ) {
        if (_meter_split3_input_bus__out5 != _three_phase_phasor4__previous_value3)
            _three_phase_phasor4__correction3 = - _three_phase_phasor4__previous_value3 / (_meter_split3_input_bus__out5 - _three_phase_phasor4__previous_value3);
        else
            _three_phase_phasor4__correction3 = 0;
        float _three_phase_phasor4__tmp = _three_phase_phasor4__sample_cnt3 + _three_phase_phasor4__correction3 - _three_phase_phasor4__previous_correction3;
        _three_phase_phasor4__sample_cnt3 = (_three_phase_phasor4__tmp < 0) ? _three_phase_phasor4__sample_cnt3 : _three_phase_phasor4__tmp;
        _three_phase_phasor4__magnitude3_state = sqrtf(_three_phase_phasor4__signal3_square_sum / _three_phase_phasor4__sample_cnt3);
        _three_phase_phasor4__sample_cnt3 = 0;
        _three_phase_phasor4__signal3_square_sum = 0;
        _three_phase_phasor4__previous_correction3 = _three_phase_phasor4__correction3;
    }
    _three_phase_phasor4__sample_cnt_ref++;
    _three_phase_phasor4__sample_cnt1++;
    _three_phase_phasor4__sample_cnt2++;
    _three_phase_phasor4__sample_cnt3++;
    _three_phase_phasor4__previous_value_ref = _meter_split3_input_bus__out3;
    _three_phase_phasor4__previous_value1 = _meter_split3_input_bus__out3;
    _three_phase_phasor4__previous_value2 = _meter_split3_input_bus__out4;
    _three_phase_phasor4__previous_value3 = _meter_split3_input_bus__out5;
    _three_phase_phasor4__signal1_square_sum += _meter_split3_input_bus__out3 * _meter_split3_input_bus__out3;
    _three_phase_phasor4__signal2_square_sum += _meter_split3_input_bus__out4 * _meter_split3_input_bus__out4;
    _three_phase_phasor4__signal3_square_sum += _meter_split3_input_bus__out5 * _meter_split3_input_bus__out5;
    // Generated from the component: (50) Instantaneous Overcurrent1.3-Phase Over Threshold.CMP1
    if (__50__instantaneous_overcurrent1_meter_split_input_bus__out18 < __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out) {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp1__state = 0;
    } else if (__50__instantaneous_overcurrent1_meter_split_input_bus__out18 > __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out) {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp1__state = 1;
    }
    // Generated from the component: (50) Instantaneous Overcurrent1.3-Phase Over Threshold.CMP2
    if (__50__instantaneous_overcurrent1_meter_split_input_bus__out19 < __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out) {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp2__state = 0;
    } else if (__50__instantaneous_overcurrent1_meter_split_input_bus__out19 > __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out) {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp2__state = 1;
    }
    // Generated from the component: (50) Instantaneous Overcurrent1.3-Phase Over Threshold.CMP3
    if (__50__instantaneous_overcurrent1_meter_split_input_bus__out20 < __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out) {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp3__state = 0;
    } else if (__50__instantaneous_overcurrent1_meter_split_input_bus__out20 > __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out) {
        __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp3__state = 1;
    }
    // Generated from the component: (51) AC Inverse Time Overcurrent1.3 Phase Inverse Time.3 Phase Inverse Time
    // Generated from the component: Consumidor.PLL.Rate Limiter1
    if (_consumidor_pll_pid_limit1__out - _consumidor_pll_rate_limiter1__state > 0.07539822368615504)
        _consumidor_pll_rate_limiter1__state += (0.07539822368615504);
    else  if (_consumidor_pll_pid_limit1__out - _consumidor_pll_rate_limiter1__state < -0.07539822368615504)
        _consumidor_pll_rate_limiter1__state += (-0.07539822368615504);
    else
        _consumidor_pll_rate_limiter1__state = _consumidor_pll_pid_limit1__out;
    _consumidor_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Consumidor.PLL.integrator
    // Generated from the component: Linha.PLL.Rate Limiter1
    if (_linha_pll_pid_limit1__out - _linha_pll_rate_limiter1__state > 0.07539822368615504)
        _linha_pll_rate_limiter1__state += (0.07539822368615504);
    else  if (_linha_pll_pid_limit1__out - _linha_pll_rate_limiter1__state < -0.07539822368615504)
        _linha_pll_rate_limiter1__state += (-0.07539822368615504);
    else
        _linha_pll_rate_limiter1__state = _linha_pll_pid_limit1__out;
    _linha_pll_rate_limiter1__first_step = 0;
    // Generated from the component: Linha.PLL.integrator
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
    // Generated from the component: Linha.PLL.LPF.LPF
    for (_linha_pll_lpf_lpf__i = 1; _linha_pll_lpf_lpf__i > 0; _linha_pll_lpf_lpf__i--) {
        _linha_pll_lpf_lpf__states[_linha_pll_lpf_lpf__i] = _linha_pll_lpf_lpf__states[_linha_pll_lpf_lpf__i - 1];
    }
    _linha_pll_lpf_lpf__states[0] = _linha_pll_lpf_lpf__delay_line_in;
    // Generated from the component: Rele.PLL.LPF.LPF
    for (_rele_pll_lpf_lpf__i = 1; _rele_pll_lpf_lpf__i > 0; _rele_pll_lpf_lpf__i--) {
        _rele_pll_lpf_lpf__states[_rele_pll_lpf_lpf__i] = _rele_pll_lpf_lpf__states[_rele_pll_lpf_lpf__i - 1];
    }
    _rele_pll_lpf_lpf__states[0] = _rele_pll_lpf_lpf__delay_line_in;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------