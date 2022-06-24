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






































































































































































































































































































































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
double __50__instantaneous_overcurrent1_block__out = 0.0;
double __50__instantaneous_overcurrent1_in__out = 5.0;
double __50__instantaneous_overcurrent1_mem_en_rst__out = 1.0;
double __50__instantaneous_overcurrent1_oc_threshold_pu__out = 14.0;
double __50__instantaneous_overcurrent1_trip_memory_sr1__out;
double __50__instantaneous_overcurrent1_trip_memory_sr1__out_n;
double __51__ac_inverse_time_overcurrent1_block__out = 0.0;
double __51__ac_inverse_time_overcurrent1_in__out = 5.0;
double __51__ac_inverse_time_overcurrent1_mem_en_rst__out = 1.0;
double __51__ac_inverse_time_overcurrent1_oc_threshold_pu__out = 3.0;
double __51__ac_inverse_time_overcurrent1_time_dial_pu__out = 0.8;
double __51__ac_inverse_time_overcurrent1_trip_memory_sr1__out;
double __51__ac_inverse_time_overcurrent1_trip_memory_sr1__out_n;
double __51__ac_inverse_time_overcurrent1_reset_mode__out = 0.0;
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
X_Int32 _falta_fault_select__out;
X_Int32 _faltaconsumidor_fault_select__out;
double _fuselinka_cpu_trans_output__out;
double _fuselinka1_cpu_trans_output__out;
double _fuselinka3_cpu_trans_output__out;
double _fuselinkb_cpu_trans_output__out;
double _fuselinkb1_cpu_trans_output__out;
double _fuselinkb2_cpu_trans_output__out;
double _fuselinkb5_cpu_trans_output__out;
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
double _memoria50__out;
double _memoria51__out;
X_Int32 _s1_ctc_wrapper__feedback_out = 0;
X_Int32 _s2_ctc_wrapper__feedback_out = 0;
X_Int32 _s3_ctc_wrapper__feedback_out = 0;
X_Int32 _s4_ctc_wrapper__feedback_out = 0;
X_Int32 _s5_ctc_wrapper__feedback_out = 0;
X_Int32 _s6_ctc_wrapper__feedback_out = 0;
X_Int32 _s7_ctc_wrapper__feedback_out = 0;
double __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator2__out;
double __50__instantaneous_overcurrent1_3_phase_over_threshold_pd1__out;
float __50__instantaneous_overcurrent1_trip_mem__tmp;
float __51__ac_inverse_time_overcurrent1_trip_mem__tmp;
double _consumidor_pll_sin__out;

double _consumidor_meassm_mode_and_dfract__Freq;


double _consumidor_meassm_mode_and_dfract__dFract;
X_Int32 _consumidor_meassm_mode_and_dfract__mode;
X_Int32 _consumidor_meassm_mode_and_dfract__submode;
double _consumidor_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _consumidor_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _consumidor_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _consumidor_extra_output_bus__out[12];

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
double _linha_pll_sin__out;

double _linha_meassm_mode_and_dfract__Freq;


double _linha_meassm_mode_and_dfract__dFract;
X_Int32 _linha_meassm_mode_and_dfract__mode;
X_Int32 _linha_meassm_mode_and_dfract__submode;
double _linha_pll_abc_to_dq_abc_to_alpha_beta__alpha;
double _linha_pll_abc_to_dq_abc_to_alpha_beta__beta;
double _linha_pll_abc_to_dq_abc_to_alpha_beta__gamma;
double _linha_extra_output_bus__out[12];
double _logical_operator3__out;

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
double _consumidor_pll_abc_to_dq_lpf_d__out;
double _consumidor_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _consumidor_pll_abc_to_dq_lpf_q__out;
double _consumidor_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _linha_sumi_rms__out;
double _linha_pll_abc_to_dq_lpf_d__out;
double _linha_pll_abc_to_dq_lpf_d__previous_filtered_value;
double _linha_pll_abc_to_dq_lpf_q__out;
double _linha_pll_abc_to_dq_lpf_q__previous_filtered_value;
double _consumidor_gaini_rms__out;
double _consumidor_pll_normalize__in1;
double _consumidor_pll_normalize__in2;


double _consumidor_pll_normalize__in2_pu;
double _consumidor_pll_normalize__pk;
double _linha_gaini_rms__out;
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
double _meter_split2_input_bus__out;
double _meter_split2_input_bus__out1;
double _meter_split2_input_bus__out2;
double _meter_split2_input_bus__out3;
double _meter_split2_input_bus__out4;
double _meter_split2_input_bus__out5;
double _meter_split2_input_bus__out6;
double _meter_split2_input_bus__out7;
double _meter_split2_input_bus__out8;
double _meter_split2_input_bus__out9;
double _meter_split2_input_bus__out10;
double _meter_split2_input_bus__out11;
double _meter_split2_input_bus__out12;
double _meter_split2_input_bus__out13;
double _meter_split2_input_bus__out14;
double _meter_split2_input_bus__out15;
double _meter_split2_input_bus__out16;
double _meter_split2_input_bus__out17;
double _meter_split2_input_bus__out18;
double _meter_split2_input_bus__out19;
double _meter_split2_input_bus__out20;
double _meter_split2_input_bus__out21;
double _meter_split2_input_bus__out22;
double _meter_split2_input_bus__out23;
double _meter_split2_input_bus__out24;
double _meter_split2_input_bus__out25;
double _meter_split2_input_bus__out26;
double _meter_split2_input_bus__out27;
double _meter_split2_input_bus__out28;
double _meter_split2_input_bus__out29;
double _consumidor_pll_pid_sum8__out;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out1;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out2;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out3;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out4;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out5;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out6;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out7;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out8;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out9;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out10;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out11;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out12;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out13;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out14;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out15;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out16;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out17;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out18;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out19;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out20;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out21;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out22;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out23;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out24;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out25;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out26;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out27;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out28;
double __50__instantaneous_overcurrent1_meter_split_input_bus__out29;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out1;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out2;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out3;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out4;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out5;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out6;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out7;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out8;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out9;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out10;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out11;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out12;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out13;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out14;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out15;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out16;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out17;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out18;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out19;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out20;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out21;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out22;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out23;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out24;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out25;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out26;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out27;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out28;
double __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29;
double _meter_split3_input_bus__out;
double _meter_split3_input_bus__out1;
double _meter_split3_input_bus__out2;
double _meter_split3_input_bus__out3;
double _meter_split3_input_bus__out4;
double _meter_split3_input_bus__out5;
double _meter_split3_input_bus__out6;
double _meter_split3_input_bus__out7;
double _meter_split3_input_bus__out8;
double _meter_split3_input_bus__out9;
double _meter_split3_input_bus__out10;
double _meter_split3_input_bus__out11;
double _meter_split3_input_bus__out12;
double _meter_split3_input_bus__out13;
double _meter_split3_input_bus__out14;
double _meter_split3_input_bus__out15;
double _meter_split3_input_bus__out16;
double _meter_split3_input_bus__out17;
double _meter_split3_input_bus__out18;
double _meter_split3_input_bus__out19;
double _meter_split3_input_bus__out20;
double _meter_split3_input_bus__out21;
double _meter_split3_input_bus__out22;
double _meter_split3_input_bus__out23;
double _meter_split3_input_bus__out24;
double _meter_split3_input_bus__out25;
double _meter_split3_input_bus__out26;
double _meter_split3_input_bus__out27;
double _meter_split3_input_bus__out28;
double _meter_split3_input_bus__out29;
double _linha_pll_pid_sum8__out;
double _meter_split2_gain__out[12];
double _three_phase_phasor3__phase1;
double _three_phase_phasor3__out1;
double _three_phase_phasor3__correction1;
double _three_phase_phasor3__phase2;
double _three_phase_phasor3__out2;
double _three_phase_phasor3__correction2;
double _three_phase_phasor3__phase3;
double _three_phase_phasor3__out3;
double _three_phase_phasor3__correction3;
double _three_phase_phasor3__correction_ref;
double _consumidor_pll_pid_gain1__out;
double __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp1__out;
double __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp2__out;
double __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp3__out;
double __50__instantaneous_overcurrent1_meter_split_gain__out[12];
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Arms;
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Block;
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Brms;
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Crms;
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__EmReset;
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Level;
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Scale;
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__TimeDial;


double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosA;
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosB;
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosC;
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Reset;
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Tripped;
double __51__ac_inverse_time_overcurrent1_meter_split_gain__out[12];
double _meter_split3_gain__out[12];
double _three_phase_phasor4__phase1;
double _three_phase_phasor4__out1;
double _three_phase_phasor4__correction1;
double _three_phase_phasor4__phase2;
double _three_phase_phasor4__out2;
double _three_phase_phasor4__correction2;
double _three_phase_phasor4__phase3;
double _three_phase_phasor4__out3;
double _three_phase_phasor4__correction3;
double _three_phase_phasor4__correction_ref;
double _linha_pll_pid_gain1__out;
double _meter_split2_extra_input_bus__out;
double _meter_split2_extra_input_bus__out1;
double _meter_split2_extra_input_bus__out2;
double _meter_split2_extra_input_bus__out3;
double _meter_split2_extra_input_bus__out4;
double _meter_split2_extra_input_bus__out5;
double _meter_split2_extra_input_bus__out6;
double _meter_split2_extra_input_bus__out7;
double _meter_split2_extra_input_bus__out8;
double _meter_split2_extra_input_bus__out9;
double _meter_split2_extra_input_bus__out10;
double _meter_split2_extra_input_bus__out11;
double _consumidor_pll_pid_sum5__out;
double __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator1__out;
double __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator3__out;
double __50__instantaneous_overcurrent1_3_phase_over_threshold_block_function_logical_operator4__out;
double __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out;
double __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out1;
double __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out2;
double __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out3;
double __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out4;
double __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out5;
double __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out6;
double __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out7;
double __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out8;
double __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out9;
double __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out10;
double __50__instantaneous_overcurrent1_meter_split_extra_input_bus__out11;
float __51__ac_inverse_time_overcurrent1_reset__tmp;
float __51__ac_inverse_time_overcurrent1_trip__tmp;
double __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out;
double __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out1;
double __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out2;
double __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out3;
double __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out4;
double __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out5;
double __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out6;
double __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out7;
double __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out8;
double __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out9;
double __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out10;
double __51__ac_inverse_time_overcurrent1_meter_split_extra_input_bus__out11;
double _meter_split3_extra_input_bus__out;
double _meter_split3_extra_input_bus__out1;
double _meter_split3_extra_input_bus__out2;
double _meter_split3_extra_input_bus__out3;
double _meter_split3_extra_input_bus__out4;
double _meter_split3_extra_input_bus__out5;
double _meter_split3_extra_input_bus__out6;
double _meter_split3_extra_input_bus__out7;
double _meter_split3_extra_input_bus__out8;
double _meter_split3_extra_input_bus__out9;
double _meter_split3_extra_input_bus__out10;
double _meter_split3_extra_input_bus__out11;
double _linha_pll_pid_sum5__out;
double _consumidor_pll_pid_limit1__out;
double __50__instantaneous_overcurrent1_3_phase_over_threshold_lg1__out;
double _linha_pll_pid_limit1__out;
double _consumidor_pll_pid_sum6__out;
double _consumidor_pll_rate_limiter1__out;

double _consumidor_pll_integrator__in;


double _consumidor_pll_integrator__out;
float __50__instantaneous_overcurrent1_trip_inst__tmp;
double _linha_pll_pid_sum6__out;
double _linha_pll_rate_limiter1__out;

double _linha_pll_integrator__in;


double _linha_pll_integrator__out;
double _consumidor_pll_pid_kb__out;
double _consumidor_pll_lpf_lpf__out;
double _consumidor_pll_lpf_lpf__b_coeff[1] = {0.024674000736159996};
double _consumidor_pll_lpf_lpf__a_coeff[3] = {1.0, -1.7778894456, 0.8025634463361601};
double _consumidor_pll_lpf_lpf__a_sum;
double _consumidor_pll_lpf_lpf__b_sum;
double _consumidor_pll_lpf_lpf__delay_line_in;
double _linha_pll_pid_kb__out;
double _linha_pll_lpf_lpf__out;
double _linha_pll_lpf_lpf__b_coeff[1] = {0.024674000736159996};
double _linha_pll_lpf_lpf__a_coeff[3] = {1.0, -1.7778894456, 0.8025634463361601};
double _linha_pll_lpf_lpf__a_sum;
double _linha_pll_lpf_lpf__b_sum;
double _linha_pll_lpf_lpf__delay_line_in;
double _consumidor_pll_pid_sum7__out;
double _linha_pll_pid_sum7__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
double __50__instantaneous_overcurrent1_trip_memory_sr1__state;
double __51__ac_inverse_time_overcurrent1_trip_memory_sr1__state;
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
double _linha_meassm_mode_and_dfract__Tfract;
double _linha_meassm_mode_and_dfract__freqAbs;
double _linha_meassm_mode_and_dfract__fMax;
X_Int32 _linha_meassm_mode_and_dfract__reset;
X_Int32 _linha_meassm_mode_and_dfract__cycle_counter;
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
double _three_phase_phasor3__phase1_state;
double _three_phase_phasor3__magnitude1_state;
X_UnInt32 _three_phase_phasor3__zc1;
double _three_phase_phasor3__previous_value1;
double _three_phase_phasor3__previous_correction1;
double _three_phase_phasor3__sample_cnt1;
double _three_phase_phasor3__signal1_square_sum;
double _three_phase_phasor3__previous_filtered_value1;
double _three_phase_phasor3__filtered_value1;
double _three_phase_phasor3__phase2_state;
double _three_phase_phasor3__magnitude2_state;
X_UnInt32 _three_phase_phasor3__zc2;
double _three_phase_phasor3__previous_value2;
double _three_phase_phasor3__previous_correction2;
double _three_phase_phasor3__sample_cnt2;
double _three_phase_phasor3__signal2_square_sum;
double _three_phase_phasor3__previous_filtered_value2;
double _three_phase_phasor3__filtered_value2;
double _three_phase_phasor3__phase3_state;
double _three_phase_phasor3__magnitude3_state;
X_UnInt32 _three_phase_phasor3__zc3;
double _three_phase_phasor3__previous_value3;
double _three_phase_phasor3__previous_correction3;
double _three_phase_phasor3__sample_cnt3;
double _three_phase_phasor3__signal3_square_sum;
double _three_phase_phasor3__previous_filtered_value3;
double _three_phase_phasor3__filtered_value3;
X_UnInt32 _three_phase_phasor3__zc_ref;
double _three_phase_phasor3__previous_value_ref;
double _three_phase_phasor3__previous_correction_ref;
double _three_phase_phasor3__sample_cnt_ref;
double _three_phase_phasor3__previous_filtered_value_ref;
double _three_phase_phasor3__filtered_value_ref;
double __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp1__state;
double __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp2__state;
double __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp3__state;
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[3];
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__PickUp;
double __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__M[3];
X_Int32 __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__idx;
double _three_phase_phasor4__phase1_state;
double _three_phase_phasor4__magnitude1_state;
X_UnInt32 _three_phase_phasor4__zc1;
double _three_phase_phasor4__previous_value1;
double _three_phase_phasor4__previous_correction1;
double _three_phase_phasor4__sample_cnt1;
double _three_phase_phasor4__signal1_square_sum;
double _three_phase_phasor4__previous_filtered_value1;
double _three_phase_phasor4__filtered_value1;
double _three_phase_phasor4__phase2_state;
double _three_phase_phasor4__magnitude2_state;
X_UnInt32 _three_phase_phasor4__zc2;
double _three_phase_phasor4__previous_value2;
double _three_phase_phasor4__previous_correction2;
double _three_phase_phasor4__sample_cnt2;
double _three_phase_phasor4__signal2_square_sum;
double _three_phase_phasor4__previous_filtered_value2;
double _three_phase_phasor4__filtered_value2;
double _three_phase_phasor4__phase3_state;
double _three_phase_phasor4__magnitude3_state;
X_UnInt32 _three_phase_phasor4__zc3;
double _three_phase_phasor4__previous_value3;
double _three_phase_phasor4__previous_correction3;
double _three_phase_phasor4__sample_cnt3;
double _three_phase_phasor4__signal3_square_sum;
double _three_phase_phasor4__previous_filtered_value3;
double _three_phase_phasor4__filtered_value3;
X_UnInt32 _three_phase_phasor4__zc_ref;
double _three_phase_phasor4__previous_value_ref;
double _three_phase_phasor4__previous_correction_ref;
double _three_phase_phasor4__sample_cnt_ref;
double _three_phase_phasor4__previous_filtered_value_ref;
double _three_phase_phasor4__filtered_value_ref;
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
    __50__instantaneous_overcurrent1_trip_memory_sr1__state =  0;
    __51__ac_inverse_time_overcurrent1_trip_memory_sr1__state =  0;
    _consumidor_pll_pid_integrator1__state = 376.99111843;
    _consumidor_pll_pid_integrator2__state = 0.0;
    _consumidor_pll_unit_delay1__state = 0.0;
    _linha_pll_pid_integrator1__state = 376.99111843;
    _linha_pll_pid_integrator2__state = 0.0;
    _linha_pll_unit_delay1__state = 0.0;
    HIL_OutAO(0x200a, 0.0f);
    _consumidor_meassm_mode_and_dfract__dFract = 0;
    _consumidor_meassm_mode_and_dfract__fMax = 1.0 / 0.001;
    _consumidor_meassm_mode_and_dfract__cycle_counter = 0;
    _consumidor_meassm_mode_and_dfract__reset = 1;
    XIo_OutFloat(0x55000174, 0.0f);
    XIo_OutFloat(0x55000170, 0.0f);
    XIo_OutFloat(0x55000178, 0.0f);
    XIo_OutFloat(0x55000180, 0.0f);
    XIo_OutFloat(0x5500017c, 0.0f);
    XIo_OutFloat(0x55000188, 0.0f);
    XIo_OutFloat(0x55000184, 0.0f);
    HIL_OutAO(0x2015, 0.0f);
    _linha_meassm_mode_and_dfract__dFract = 0;
    _linha_meassm_mode_and_dfract__fMax = 1.0 / 0.001;
    _linha_meassm_mode_and_dfract__cycle_counter = 0;
    _linha_meassm_mode_and_dfract__reset = 1;
    XIo_OutInt32(0x550001bc, 0);
    XIo_OutInt32(0x550001c0, 0);
    XIo_OutInt32(0x550001c4, 0);
    XIo_OutInt32(0x550001c8, 0);
    XIo_OutInt32(0x550001cc, 0);
    XIo_OutInt32(0x550001d0, 0);
    XIo_OutInt32(0x550001d4, 0);
    _consumidor_i_rms_calc_rms__mode = 1;
    _consumidor_vll_rms_calc_rms__mode = 1;
    _consumidor_vln_rms_calc_rms__mode = 1;
    _linha_i_rms_calc_rms__mode = 1;
    _linha_vll_rms_calc_rms__mode = 1;
    _linha_vln_rms_calc_rms__mode = 1;
    HIL_OutAO(0x200b, 0.0f);
    HIL_OutAO(0x200c, 0.0f);
    HIL_OutAO(0x200d, 0.0f);
    HIL_OutAO(0x200f, 0.0f);
    HIL_OutAO(0x2011, 0.0f);
    HIL_OutAO(0x2013, 0.0f);
    HIL_OutAO(0x2010, 0.0f);
    HIL_OutAO(0x2012, 0.0f);
    HIL_OutAO(0x2014, 0.0f);
    _consumidor_pll_abc_to_dq_lpf_d__filtered_value = 0x0;
    _consumidor_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _consumidor_pll_abc_to_dq_lpf_q__filtered_value = 0x0;
    _consumidor_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    HIL_OutAO(0x2016, 0.0f);
    HIL_OutAO(0x2017, 0.0f);
    HIL_OutAO(0x2018, 0.0f);
    HIL_OutAO(0x201a, 0.0f);
    HIL_OutAO(0x201c, 0.0f);
    HIL_OutAO(0x201e, 0.0f);
    HIL_OutAO(0x201b, 0.0f);
    HIL_OutAO(0x201d, 0.0f);
    HIL_OutAO(0x201f, 0.0f);
    _linha_pll_abc_to_dq_lpf_d__filtered_value = 0x0;
    _linha_pll_abc_to_dq_lpf_d__previous_in = 0x0;
    _linha_pll_abc_to_dq_lpf_q__filtered_value = 0x0;
    _linha_pll_abc_to_dq_lpf_q__previous_in = 0x0;
    _consumidor_pll_normalize__pk = 0;
    _linha_pll_normalize__pk = 0;
    HIL_OutAO(0x200e, 0.0f);
    HIL_OutAO(0x2019, 0.0f);
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
    __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp1__state = 0.0f;
    __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp2__state = 0.0f;
    __50__instantaneous_overcurrent1_3_phase_over_threshold_cmp3__state = 0.0f;
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[0] = 0;
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[1] = 0;
    __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPos[2] = 0;
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
    XIo_OutFloat(0x55000190, 0.0f);
    XIo_OutFloat(0x55000198, 0.0f);
    XIo_OutFloat(0x550001a0, 0.0f);
    XIo_OutFloat(0x550001a8, 0.0f);
    XIo_OutFloat(0x550001b0, 0.0f);
    XIo_OutFloat(0x550001b8, 0.0f);
    HIL_OutAO(0x2007, 0.0f);
    HIL_OutAO(0x2008, 0.0f);
    HIL_OutAO(0x2009, 0.0f);
    XIo_OutFloat(0x55000164, 0.0f);
    XIo_OutFloat(0x5500016c, 0.0f);
    XIo_OutFloat(0x5500018c, 0.0f);
    XIo_OutFloat(0x55000194, 0.0f);
    XIo_OutFloat(0x5500019c, 0.0f);
    XIo_OutFloat(0x550001a4, 0.0f);
    XIo_OutFloat(0x550001ac, 0.0f);
    XIo_OutFloat(0x550001b4, 0.0f);
    _consumidor_pll_rate_limiter1__state = 0;
    _consumidor_pll_rate_limiter1__first_step = 1;
    _consumidor_pll_integrator__out = 0;
    XIo_OutFloat(0x55000168, 0.0f);
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
    _memoria50__out = XIo_InFloat(0x5500015c);
    // Generated from the component: Memoria51
    _memoria51__out = XIo_InFloat(0x55000160);
    // Generated from the component: S1.CTC_Wrapper
    _s1_ctc_wrapper__feedback_out = HIL_InInt32(0xf8040f);
    // Generated from the component: S2.CTC_Wrapper
    _s2_ctc_wrapper__feedback_out = HIL_InInt32(0xf80410);
    // Generated from the component: S3.CTC_Wrapper
    _s3_ctc_wrapper__feedback_out = HIL_InInt32(0xf80411);
    // Generated from the component: S4.CTC_Wrapper
    _s4_ctc_wrapper__feedback_out = HIL_InInt32(0xf80412);
    // Generated from the component: S5.CTC_Wrapper
    _s5_ctc_wrapper__feedback_out = HIL_InInt32(0xf80413);
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
    _consumidor_pll_sin__out = sin(_consumidor_pll_unit_delay1__out);
    // Generated from the component: Consumidor.TRMwt
    // Generated from the component: Consumidor.Freq
    HIL_OutAO(0x200a, (float)_consumidor_pll_to_hz__out);
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
    XIo_OutFloat(0x55000174, (float)_fuselinka_cpu_trans_output__out);
    // Generated from the component: Fuse_Link_A
    XIo_OutFloat(0x55000170, (float)_fuselinka1_cpu_trans_output__out);
    // Generated from the component: Fuse_Link_A2
    XIo_OutFloat(0x55000178, (float)_fuselinka3_cpu_trans_output__out);
    // Generated from the component: Fuse_Link_B1
    XIo_OutFloat(0x55000180, (float)_fuselinkb_cpu_trans_output__out);
    // Generated from the component: Fuse_Link_B
    XIo_OutFloat(0x5500017c, (float)_fuselinkb1_cpu_trans_output__out);
    // Generated from the component: Fuse_Link_C
    XIo_OutFloat(0x55000188, (float)_fuselinkb2_cpu_trans_output__out);
    // Generated from the component: Fuse_Link_B2
    XIo_OutFloat(0x55000184, (float)_fuselinkb5_cpu_trans_output__out);
    // Generated from the component: Linha.PLL.sin
    _linha_pll_sin__out = sin(_linha_pll_unit_delay1__out);
    // Generated from the component: Linha.TRMwt
    // Generated from the component: Linha.Freq
    HIL_OutAO(0x2015, (float)_linha_pll_to_hz__out);
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
    // Generated from the component: Logical operator3
    _logical_operator3__out = !( _memoria51__out || _memoria50__out );
    // Generated from the component: S1_feed
    XIo_OutInt32(0x550001bc, _s1_ctc_wrapper__feedback_out);
    // Generated from the component: S2_feed
    XIo_OutInt32(0x550001c0, _s2_ctc_wrapper__feedback_out);
    // Generated from the component: S3_feed
    XIo_OutInt32(0x550001c4, _s3_ctc_wrapper__feedback_out);
    // Generated from the component: S4_feed
    XIo_OutInt32(0x550001c8, _s4_ctc_wrapper__feedback_out);
    // Generated from the component: S5_feed
    XIo_OutInt32(0x550001cc, _s5_ctc_wrapper__feedback_out);
    // Generated from the component: S6_feed
    XIo_OutInt32(0x550001d0, _s6_ctc_wrapper__feedback_out);
    // Generated from the component: S7_feed
    XIo_OutInt32(0x550001d4, _s7_ctc_wrapper__feedback_out);
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
    // Generated from the component: Falta.S1.CTC_Wrapper
    if (_falta_control_state_machine__Ca == 0x0) {
        HIL_OutInt32(0x8240481, 0x0);
    }
    else {
        HIL_OutInt32(0x8240481, 0x1);
    }
    // Generated from the component: Falta.S2.CTC_Wrapper
    if (_falta_control_state_machine__Cn == 0x0) {
        HIL_OutInt32(0x8240482, 0x0);
    }
    else {
        HIL_OutInt32(0x8240482, 0x1);
    }
    // Generated from the component: Falta.S3.CTC_Wrapper
    if (_falta_control_state_machine__Cb == 0x0) {
        HIL_OutInt32(0x8240483, 0x0);
    }
    else {
        HIL_OutInt32(0x8240483, 0x1);
    }
    // Generated from the component: Falta.S4.CTC_Wrapper
    if (_falta_control_state_machine__Cc == 0x0) {
        HIL_OutInt32(0x8240484, 0x0);
    }
    else {
        HIL_OutInt32(0x8240484, 0x1);
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
    _linha_pll_abc_to_dq_alpha_beta_to_dq__k1 = cos(_linha_pll_unit_delay1__out);
    _linha_pll_abc_to_dq_alpha_beta_to_dq__k2 = sin(_linha_pll_unit_delay1__out);
    _linha_pll_abc_to_dq_alpha_beta_to_dq__d = _linha_pll_abc_to_dq_alpha_beta_to_dq__k2 * _linha_pll_abc_to_dq_abc_to_alpha_beta__alpha - _linha_pll_abc_to_dq_alpha_beta_to_dq__k1 * _linha_pll_abc_to_dq_abc_to_alpha_beta__beta;
    _linha_pll_abc_to_dq_alpha_beta_to_dq__q = _linha_pll_abc_to_dq_alpha_beta_to_dq__k1 * _linha_pll_abc_to_dq_abc_to_alpha_beta__alpha + _linha_pll_abc_to_dq_alpha_beta_to_dq__k2 * _linha_pll_abc_to_dq_abc_to_alpha_beta__beta;
    // Generated from the component: Linha.TRMz
    // Generated from the component: Linha.extra_out
    // Generated from the component: CB.CTC_Wrapper
    if (_logical_operator3__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: Consumidor.IA_RMS
    HIL_OutAO(0x200b, (float)_consumidor_i_rms_calc_rms__RMS1);
    // Generated from the component: Consumidor.IB_RMS
    HIL_OutAO(0x200c, (float)_consumidor_i_rms_calc_rms__RMS2);
    // Generated from the component: Consumidor.IC_RMS
    HIL_OutAO(0x200d, (float)_consumidor_i_rms_calc_rms__RMS3);
    // Generated from the component: Consumidor.sumI_RMS
    _consumidor_sumi_rms__out = _consumidor_i_rms_calc_rms__RMS1 + _consumidor_i_rms_calc_rms__RMS2 + _consumidor_i_rms_calc_rms__RMS3;
    // Generated from the component: Consumidor.VAB_RMS
    HIL_OutAO(0x200f, (float)_consumidor_vll_rms_calc_rms__RMS1);
    // Generated from the component: Consumidor.VBC_RMS
    HIL_OutAO(0x2011, (float)_consumidor_vll_rms_calc_rms__RMS2);
    // Generated from the component: Consumidor.VCA_RMS
    HIL_OutAO(0x2013, (float)_consumidor_vll_rms_calc_rms__RMS3);
    // Generated from the component: Consumidor.VAn_RMS
    HIL_OutAO(0x2010, (float)_consumidor_vln_rms_calc_rms__RMS1);
    // Generated from the component: Consumidor.VBn_RMS
    HIL_OutAO(0x2012, (float)_consumidor_vln_rms_calc_rms__RMS2);
    // Generated from the component: Consumidor.VCn_RMS
    HIL_OutAO(0x2014, (float)_consumidor_vln_rms_calc_rms__RMS3);
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
    HIL_OutAO(0x2016, (float)_linha_i_rms_calc_rms__RMS1);
    // Generated from the component: Linha.IB_RMS
    HIL_OutAO(0x2017, (float)_linha_i_rms_calc_rms__RMS2);
    // Generated from the component: Linha.IC_RMS
    HIL_OutAO(0x2018, (float)_linha_i_rms_calc_rms__RMS3);
    // Generated from the component: Linha.sumI_RMS
    _linha_sumi_rms__out = _linha_i_rms_calc_rms__RMS1 + _linha_i_rms_calc_rms__RMS2 + _linha_i_rms_calc_rms__RMS3;
    // Generated from the component: Linha.VAB_RMS
    HIL_OutAO(0x201a, (float)_linha_vll_rms_calc_rms__RMS1);
    // Generated from the component: Linha.VBC_RMS
    HIL_OutAO(0x201c, (float)_linha_vll_rms_calc_rms__RMS2);
    // Generated from the component: Linha.VCA_RMS
    HIL_OutAO(0x201e, (float)_linha_vll_rms_calc_rms__RMS3);
    // Generated from the component: Linha.VAn_RMS
    HIL_OutAO(0x201b, (float)_linha_vln_rms_calc_rms__RMS1);
    // Generated from the component: Linha.VBn_RMS
    HIL_OutAO(0x201d, (float)_linha_vln_rms_calc_rms__RMS2);
    // Generated from the component: Linha.VCn_RMS
    HIL_OutAO(0x201f, (float)_linha_vln_rms_calc_rms__RMS3);
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
    // Generated from the component: Consumidor.I_RMS
    HIL_OutAO(0x200e, (float)_consumidor_gaini_rms__out);
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
    HIL_OutAO(0x2019, (float)_linha_gaini_rms__out);
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
    // Generated from the component: (50) Instantaneous Overcurrent1.Meter Split.input_bus
    __50__instantaneous_overcurrent1_meter_split_input_bus__out = _linha_output_bus__out[0];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out1 = _linha_output_bus__out[1];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out2 = _linha_output_bus__out[2];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out3 = _linha_output_bus__out[3];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out4 = _linha_output_bus__out[4];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out5 = _linha_output_bus__out[5];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out6 = _linha_output_bus__out[6];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out7 = _linha_output_bus__out[7];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out8 = _linha_output_bus__out[8];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out9 = _linha_output_bus__out[9];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out10 = _linha_output_bus__out[10];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out11 = _linha_output_bus__out[11];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out12 = _linha_output_bus__out[12];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out13 = _linha_output_bus__out[13];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out14 = _linha_output_bus__out[14];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out15 = _linha_output_bus__out[15];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out16 = _linha_output_bus__out[16];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out17 = _linha_output_bus__out[17];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out18 = _linha_output_bus__out[18];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out19 = _linha_output_bus__out[19];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out20 = _linha_output_bus__out[20];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out21 = _linha_output_bus__out[21];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out22 = _linha_output_bus__out[22];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out23 = _linha_output_bus__out[23];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out24 = _linha_output_bus__out[24];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out25 = _linha_output_bus__out[25];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out26 = _linha_output_bus__out[26];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out27 = _linha_output_bus__out[27];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out28 = _linha_output_bus__out[28];
    __50__instantaneous_overcurrent1_meter_split_input_bus__out29 = _linha_output_bus__out[29];
    // Generated from the component: (51) AC Inverse Time Overcurrent1.Meter Split.input_bus
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out = _linha_output_bus__out[0];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out1 = _linha_output_bus__out[1];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out2 = _linha_output_bus__out[2];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out3 = _linha_output_bus__out[3];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out4 = _linha_output_bus__out[4];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out5 = _linha_output_bus__out[5];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out6 = _linha_output_bus__out[6];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out7 = _linha_output_bus__out[7];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out8 = _linha_output_bus__out[8];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out9 = _linha_output_bus__out[9];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out10 = _linha_output_bus__out[10];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out11 = _linha_output_bus__out[11];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out12 = _linha_output_bus__out[12];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out13 = _linha_output_bus__out[13];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out14 = _linha_output_bus__out[14];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out15 = _linha_output_bus__out[15];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out16 = _linha_output_bus__out[16];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out17 = _linha_output_bus__out[17];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out18 = _linha_output_bus__out[18];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out19 = _linha_output_bus__out[19];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out20 = _linha_output_bus__out[20];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out21 = _linha_output_bus__out[21];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out22 = _linha_output_bus__out[22];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out23 = _linha_output_bus__out[23];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out24 = _linha_output_bus__out[24];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out25 = _linha_output_bus__out[25];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out26 = _linha_output_bus__out[26];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out27 = _linha_output_bus__out[27];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out28 = _linha_output_bus__out[28];
    __51__ac_inverse_time_overcurrent1_meter_split_input_bus__out29 = _linha_output_bus__out[29];
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
    XIo_OutFloat(0x55000190, (float)_three_phase_phasor3__phase1);
    // Generated from the component: Linha_Angulo_B1
    XIo_OutFloat(0x55000198, (float)_three_phase_phasor3__phase2);
    // Generated from the component: Linha_Angulo_C1
    XIo_OutFloat(0x550001a0, (float)_three_phase_phasor3__phase3);
    // Generated from the component: Linha_Tensao_A1
    XIo_OutFloat(0x550001a8, (float)_three_phase_phasor3__out1);
    // Generated from the component: Linha_Tensao_B1
    XIo_OutFloat(0x550001b0, (float)_three_phase_phasor3__out2);
    // Generated from the component: Linha_Tensao_C1
    XIo_OutFloat(0x550001b8, (float)_three_phase_phasor3__out3);
    // Generated from the component: Consumidor.PLL.PID.Sum5
    _consumidor_pll_pid_sum5__out = _consumidor_pll_pid_kp__out + _consumidor_pll_pid_gain1__out + _consumidor_pll_pid_integrator1__out;
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
    HIL_OutAO(0x2007, (float)__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosA);
    // Generated from the component: (51) AC Inverse Time Overcurrent1.DIAL-POS-B
    HIL_OutAO(0x2008, (float)__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosB);
    // Generated from the component: (51) AC Inverse Time Overcurrent1.DIAL-POS-C
    HIL_OutAO(0x2009, (float)__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__DialPosC);
    // Generated from the component: (51) AC Inverse Time Overcurrent1.RESET
    HIL_OutInt32(0xf00402, __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Reset != 0x0);
    // Generated from the component: (51) AC Inverse Time Overcurrent1.TRIP
    HIL_OutInt32(0xf00403, __51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Tripped != 0x0);
    // Generated from the component: Dial_reset
    XIo_OutFloat(0x55000164, (float)__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Reset);
    // Generated from the component: Disj2
    XIo_OutFloat(0x5500016c, (float)__51__ac_inverse_time_overcurrent1_3_phase_inverse_time_3_phase_inverse_time__Tripped);
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
    XIo_OutFloat(0x5500018c, (float)_three_phase_phasor4__phase1);
    // Generated from the component: Linha_Angulo_B
    XIo_OutFloat(0x55000194, (float)_three_phase_phasor4__phase2);
    // Generated from the component: Linha_Angulo_C
    XIo_OutFloat(0x5500019c, (float)_three_phase_phasor4__phase3);
    // Generated from the component: Linha_Tensao_A
    XIo_OutFloat(0x550001a4, (float)_three_phase_phasor4__out1);
    // Generated from the component: Linha_Tensao_B
    XIo_OutFloat(0x550001ac, (float)_three_phase_phasor4__out2);
    // Generated from the component: Linha_Tensao_C
    XIo_OutFloat(0x550001b4, (float)_three_phase_phasor4__out3);
    // Generated from the component: Linha.PLL.PID.Sum5
    _linha_pll_pid_sum5__out = _linha_pll_pid_kp__out + _linha_pll_pid_gain1__out + _linha_pll_pid_integrator1__out;
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
    // Generated from the component: (50) Instantaneous Overcurrent1.TRIP-INST
    HIL_OutInt32(0xf00400, __50__instantaneous_overcurrent1_3_phase_over_threshold_lg1__out != 0x0);
    // Generated from the component: Disj1
    XIo_OutFloat(0x55000168, (float)__50__instantaneous_overcurrent1_3_phase_over_threshold_lg1__out);
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
    // Generated from the component: Consumidor.PLL.PID.Sum7
    _consumidor_pll_pid_sum7__out = _consumidor_pll_pid_ki__out + _consumidor_pll_pid_kb__out;
    // Generated from the component: Linha.PLL.PID.Sum7
    _linha_pll_pid_sum7__out = _linha_pll_pid_ki__out + _linha_pll_pid_kb__out;
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
    // Generated from the component: Consumidor.measSM.mode_and_dFract
    // Generated from the component: Falta.Control state machine
    // Generated from the component: FaltaConsumidor.Control state machine
    // Generated from the component: Linha.measSM.mode_and_dFract
    // Generated from the component: Consumidor.I_RMS_calc.RMS
    // Generated from the component: Consumidor.VLL_RMS_calc.RMS
    // Generated from the component: Consumidor.VLn_RMS_calc.RMS
    // Generated from the component: Linha.I_RMS_calc.RMS
    // Generated from the component: Linha.VLL_RMS_calc.RMS
    // Generated from the component: Linha.VLn_RMS_calc.RMS
    // Generated from the component: Consumidor.PLL.normalize
    // Generated from the component: Linha.PLL.normalize
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
        double _three_phase_phasor3__tmp = _three_phase_phasor3__sample_cnt1 + _three_phase_phasor3__correction1 - _three_phase_phasor3__previous_correction1;
        _three_phase_phasor3__sample_cnt1 = (_three_phase_phasor3__tmp < 0) ? _three_phase_phasor3__sample_cnt1 : _three_phase_phasor3__tmp;
        _three_phase_phasor3__magnitude1_state = sqrt(_three_phase_phasor3__signal1_square_sum / _three_phase_phasor3__sample_cnt1);
        _three_phase_phasor3__sample_cnt1 = 0;
        _three_phase_phasor3__signal1_square_sum = 0;
        _three_phase_phasor3__previous_correction1 = _three_phase_phasor3__correction1;
    }
    if( _three_phase_phasor3__zc2 || (_three_phase_phasor3__sample_cnt2 >= 500) ) {
        if (_meter_split2_input_bus__out1 != _three_phase_phasor3__previous_value2)
            _three_phase_phasor3__correction2 = - _three_phase_phasor3__previous_value2 / (_meter_split2_input_bus__out1 - _three_phase_phasor3__previous_value2);
        else
            _three_phase_phasor3__correction2 = 0;
        double _three_phase_phasor3__tmp = _three_phase_phasor3__sample_cnt2 + _three_phase_phasor3__correction2 - _three_phase_phasor3__previous_correction2;
        _three_phase_phasor3__sample_cnt2 = (_three_phase_phasor3__tmp < 0) ? _three_phase_phasor3__sample_cnt2 : _three_phase_phasor3__tmp;
        _three_phase_phasor3__magnitude2_state = sqrt(_three_phase_phasor3__signal2_square_sum / _three_phase_phasor3__sample_cnt2);
        _three_phase_phasor3__sample_cnt2 = 0;
        _three_phase_phasor3__signal2_square_sum = 0;
        _three_phase_phasor3__previous_correction2 = _three_phase_phasor3__correction2;
    }
    if( _three_phase_phasor3__zc3 || (_three_phase_phasor3__sample_cnt3 >= 500) ) {
        if (_meter_split2_input_bus__out2 != _three_phase_phasor3__previous_value3)
            _three_phase_phasor3__correction3 = - _three_phase_phasor3__previous_value3 / (_meter_split2_input_bus__out2 - _three_phase_phasor3__previous_value3);
        else
            _three_phase_phasor3__correction3 = 0;
        double _three_phase_phasor3__tmp = _three_phase_phasor3__sample_cnt3 + _three_phase_phasor3__correction3 - _three_phase_phasor3__previous_correction3;
        _three_phase_phasor3__sample_cnt3 = (_three_phase_phasor3__tmp < 0) ? _three_phase_phasor3__sample_cnt3 : _three_phase_phasor3__tmp;
        _three_phase_phasor3__magnitude3_state = sqrt(_three_phase_phasor3__signal3_square_sum / _three_phase_phasor3__sample_cnt3);
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
        double _three_phase_phasor4__tmp = _three_phase_phasor4__sample_cnt1 + _three_phase_phasor4__correction1 - _three_phase_phasor4__previous_correction1;
        _three_phase_phasor4__sample_cnt1 = (_three_phase_phasor4__tmp < 0) ? _three_phase_phasor4__sample_cnt1 : _three_phase_phasor4__tmp;
        _three_phase_phasor4__magnitude1_state = sqrt(_three_phase_phasor4__signal1_square_sum / _three_phase_phasor4__sample_cnt1);
        _three_phase_phasor4__sample_cnt1 = 0;
        _three_phase_phasor4__signal1_square_sum = 0;
        _three_phase_phasor4__previous_correction1 = _three_phase_phasor4__correction1;
    }
    if( _three_phase_phasor4__zc2 || (_three_phase_phasor4__sample_cnt2 >= 500) ) {
        if (_meter_split3_input_bus__out4 != _three_phase_phasor4__previous_value2)
            _three_phase_phasor4__correction2 = - _three_phase_phasor4__previous_value2 / (_meter_split3_input_bus__out4 - _three_phase_phasor4__previous_value2);
        else
            _three_phase_phasor4__correction2 = 0;
        double _three_phase_phasor4__tmp = _three_phase_phasor4__sample_cnt2 + _three_phase_phasor4__correction2 - _three_phase_phasor4__previous_correction2;
        _three_phase_phasor4__sample_cnt2 = (_three_phase_phasor4__tmp < 0) ? _three_phase_phasor4__sample_cnt2 : _three_phase_phasor4__tmp;
        _three_phase_phasor4__magnitude2_state = sqrt(_three_phase_phasor4__signal2_square_sum / _three_phase_phasor4__sample_cnt2);
        _three_phase_phasor4__sample_cnt2 = 0;
        _three_phase_phasor4__signal2_square_sum = 0;
        _three_phase_phasor4__previous_correction2 = _three_phase_phasor4__correction2;
    }
    if( _three_phase_phasor4__zc3 || (_three_phase_phasor4__sample_cnt3 >= 500) ) {
        if (_meter_split3_input_bus__out5 != _three_phase_phasor4__previous_value3)
            _three_phase_phasor4__correction3 = - _three_phase_phasor4__previous_value3 / (_meter_split3_input_bus__out5 - _three_phase_phasor4__previous_value3);
        else
            _three_phase_phasor4__correction3 = 0;
        double _three_phase_phasor4__tmp = _three_phase_phasor4__sample_cnt3 + _three_phase_phasor4__correction3 - _three_phase_phasor4__previous_correction3;
        _three_phase_phasor4__sample_cnt3 = (_three_phase_phasor4__tmp < 0) ? _three_phase_phasor4__sample_cnt3 : _three_phase_phasor4__tmp;
        _three_phase_phasor4__magnitude3_state = sqrt(_three_phase_phasor4__signal3_square_sum / _three_phase_phasor4__sample_cnt3);
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