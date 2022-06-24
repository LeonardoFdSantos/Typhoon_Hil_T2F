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
float _fuselinka_instantaneous__out;
float _fuselinka1_instantaneous__out;
float _fuselinka3_instantaneous__out;
float _fuselinkb_instantaneous__out;
float _fuselinkb1_instantaneous__out;
float _fuselinkb2_instantaneous__out;
float _fuselinkb5_instantaneous__out;
float _fuselinka_rms_calc_fast__var_eff_s;
float _fuselinka_rms_calc_fast__period;
X_UnInt8 _fuselinka_rms_calc_fast__var_zc;
float _fuselinka_rms_calc_fast__var_filt_old;
float _fuselinka_rms_calc_slow__var_rms;
float _fuselinka1_rms_calc_fast__var_eff_s;
float _fuselinka1_rms_calc_fast__period;
X_UnInt8 _fuselinka1_rms_calc_fast__var_zc;
float _fuselinka1_rms_calc_fast__var_filt_old;
float _fuselinka1_rms_calc_slow__var_rms;
float _fuselinka3_rms_calc_fast__var_eff_s;
float _fuselinka3_rms_calc_fast__period;
X_UnInt8 _fuselinka3_rms_calc_fast__var_zc;
float _fuselinka3_rms_calc_fast__var_filt_old;
float _fuselinka3_rms_calc_slow__var_rms;
float _fuselinkb_rms_calc_fast__var_eff_s;
float _fuselinkb_rms_calc_fast__period;
X_UnInt8 _fuselinkb_rms_calc_fast__var_zc;
float _fuselinkb_rms_calc_fast__var_filt_old;
float _fuselinkb_rms_calc_slow__var_rms;
float _fuselinkb1_rms_calc_fast__var_eff_s;
float _fuselinkb1_rms_calc_fast__period;
X_UnInt8 _fuselinkb1_rms_calc_fast__var_zc;
float _fuselinkb1_rms_calc_fast__var_filt_old;
float _fuselinkb1_rms_calc_slow__var_rms;
float _fuselinkb2_rms_calc_fast__var_eff_s;
float _fuselinkb2_rms_calc_fast__period;
X_UnInt8 _fuselinkb2_rms_calc_fast__var_zc;
float _fuselinkb2_rms_calc_fast__var_filt_old;
float _fuselinkb2_rms_calc_slow__var_rms;
float _fuselinkb5_rms_calc_fast__var_eff_s;
float _fuselinkb5_rms_calc_fast__period;
X_UnInt8 _fuselinkb5_rms_calc_fast__var_zc;
float _fuselinkb5_rms_calc_fast__var_filt_old;
float _fuselinkb5_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
float _fuselinka_rt1_output__out =  0.0;
float _fuselinka_rt2_output__out =  0.0;
float _fuselinka1_rt1_output__out =  0.0;
float _fuselinka1_rt2_output__out =  0.0;
float _fuselinka3_rt1_output__out =  0.0;
float _fuselinka3_rt2_output__out =  0.0;
float _fuselinkb_rt1_output__out =  0.0;
float _fuselinkb_rt2_output__out =  0.0;
float _fuselinkb1_rt1_output__out =  0.0;
float _fuselinkb1_rt2_output__out =  0.0;
float _fuselinkb2_rt1_output__out =  0.0;
float _fuselinkb2_rt2_output__out =  0.0;
float _fuselinkb5_rt1_output__out =  0.0;
float _fuselinkb5_rt2_output__out =  0.0;
float _fuselinka_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _fuselinka_rms_calc_fast__pc_cnt_1_state;
float _fuselinka_rms_calc_fast__var_filt;
float _fuselinka1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _fuselinka1_rms_calc_fast__pc_cnt_1_state;
float _fuselinka1_rms_calc_fast__var_filt;
float _fuselinka3_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _fuselinka3_rms_calc_fast__pc_cnt_1_state;
float _fuselinka3_rms_calc_fast__var_filt;
float _fuselinkb_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _fuselinkb_rms_calc_fast__pc_cnt_1_state;
float _fuselinkb_rms_calc_fast__var_filt;
float _fuselinkb1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _fuselinkb1_rms_calc_fast__pc_cnt_1_state;
float _fuselinkb1_rms_calc_fast__var_filt;
float _fuselinkb2_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _fuselinkb2_rms_calc_fast__pc_cnt_1_state;
float _fuselinkb2_rms_calc_fast__var_filt;
float _fuselinkb5_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _fuselinkb5_rms_calc_fast__pc_cnt_1_state;
float _fuselinkb5_rms_calc_fast__var_filt;
//@cmp.svar.end


// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif







// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _fuselinka_rt1_output__out =  0.0;
    _fuselinka_rt2_output__out =  0.0;
    _fuselinka1_rt1_output__out =  0.0;
    _fuselinka1_rt2_output__out =  0.0;
    _fuselinka3_rt1_output__out =  0.0;
    _fuselinka3_rt2_output__out =  0.0;
    _fuselinkb_rt1_output__out =  0.0;
    _fuselinkb_rt2_output__out =  0.0;
    _fuselinkb1_rt1_output__out =  0.0;
    _fuselinkb1_rt2_output__out =  0.0;
    _fuselinkb2_rt1_output__out =  0.0;
    _fuselinkb2_rt2_output__out =  0.0;
    _fuselinkb5_rt1_output__out =  0.0;
    _fuselinkb5_rt2_output__out =  0.0;
    _fuselinka_rms_calc_fast__var_eff_s = 0;
    _fuselinka_rms_calc_fast__period = 0.0f;
    _fuselinka_rms_calc_fast__var_filt = 0.0f;
    _fuselinka_rms_calc_fast__v_sq_sum_state = 0.0f;
    _fuselinka_rms_calc_fast__pc_cnt_1_state = 0;
    _fuselinka1_rms_calc_fast__var_eff_s = 0;
    _fuselinka1_rms_calc_fast__period = 0.0f;
    _fuselinka1_rms_calc_fast__var_filt = 0.0f;
    _fuselinka1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _fuselinka1_rms_calc_fast__pc_cnt_1_state = 0;
    _fuselinka3_rms_calc_fast__var_eff_s = 0;
    _fuselinka3_rms_calc_fast__period = 0.0f;
    _fuselinka3_rms_calc_fast__var_filt = 0.0f;
    _fuselinka3_rms_calc_fast__v_sq_sum_state = 0.0f;
    _fuselinka3_rms_calc_fast__pc_cnt_1_state = 0;
    _fuselinkb_rms_calc_fast__var_eff_s = 0;
    _fuselinkb_rms_calc_fast__period = 0.0f;
    _fuselinkb_rms_calc_fast__var_filt = 0.0f;
    _fuselinkb_rms_calc_fast__v_sq_sum_state = 0.0f;
    _fuselinkb_rms_calc_fast__pc_cnt_1_state = 0;
    _fuselinkb1_rms_calc_fast__var_eff_s = 0;
    _fuselinkb1_rms_calc_fast__period = 0.0f;
    _fuselinkb1_rms_calc_fast__var_filt = 0.0f;
    _fuselinkb1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _fuselinkb1_rms_calc_fast__pc_cnt_1_state = 0;
    _fuselinkb2_rms_calc_fast__var_eff_s = 0;
    _fuselinkb2_rms_calc_fast__period = 0.0f;
    _fuselinkb2_rms_calc_fast__var_filt = 0.0f;
    _fuselinkb2_rms_calc_fast__v_sq_sum_state = 0.0f;
    _fuselinkb2_rms_calc_fast__pc_cnt_1_state = 0;
    _fuselinkb5_rms_calc_fast__var_eff_s = 0;
    _fuselinkb5_rms_calc_fast__period = 0.0f;
    _fuselinkb5_rms_calc_fast__var_filt = 0.0f;
    _fuselinkb5_rms_calc_fast__v_sq_sum_state = 0.0f;
    _fuselinkb5_rms_calc_fast__pc_cnt_1_state = 0;
    XIo_OutFloat(0x55000100, 0.0f);
    HIL_OutAO(0x2000, 0.0f);
    XIo_OutFloat(0x55000104, 0.0f);
    HIL_OutAO(0x2001, 0.0f);
    XIo_OutFloat(0x55000108, 0.0f);
    HIL_OutAO(0x2002, 0.0f);
    XIo_OutFloat(0x5500010c, 0.0f);
    HIL_OutAO(0x2003, 0.0f);
    XIo_OutFloat(0x55000110, 0.0f);
    HIL_OutAO(0x2004, 0.0f);
    XIo_OutFloat(0x55000114, 0.0f);
    HIL_OutAO(0x2005, 0.0f);
    XIo_OutFloat(0x55000118, 0.0f);
    HIL_OutAO(0x2006, 0.0f);
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_sys_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_sys_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_sys_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_sys_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_sys_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_sys_sp_cpu0_dev0() {
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

void TimerCounterHandler_0_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: FuseLinkA.instantaneous
    _fuselinka_instantaneous__out = (HIL_InFloat(0xc80000 + 0x107));
    // Generated from the component: FuseLinkA1.instantaneous
    _fuselinka1_instantaneous__out = (HIL_InFloat(0xc80000 + 0x108));
    // Generated from the component: FuseLinkA3.instantaneous
    _fuselinka3_instantaneous__out = (HIL_InFloat(0xc80000 + 0x216));
    // Generated from the component: FuseLinkB.instantaneous
    _fuselinkb_instantaneous__out = (HIL_InFloat(0xc80000 + 0x109));
    // Generated from the component: FuseLinkB1.instantaneous
    _fuselinkb1_instantaneous__out = (HIL_InFloat(0xc80000 + 0x10a));
    // Generated from the component: FuseLinkB2.instantaneous
    _fuselinkb2_instantaneous__out = (HIL_InFloat(0xc80000 + 0x10b));
    // Generated from the component: FuseLinkB5.instantaneous
    _fuselinkb5_instantaneous__out = (HIL_InFloat(0xc80000 + 0x217));
    // Generated from the component: FuseLinkA.rms_calc_fast
    _fuselinka_rms_calc_fast__v_sq_sum_state = _fuselinka_rms_calc_fast__v_sq_sum_state + _fuselinka_instantaneous__out * _fuselinka_instantaneous__out;
    _fuselinka_rms_calc_fast__var_filt_old = _fuselinka_rms_calc_fast__var_filt;
    _fuselinka_rms_calc_fast__var_filt = (_fuselinka_rms_calc_fast__var_filt_old * 0.909 + _fuselinka_instantaneous__out * 0.0909);
    if((_fuselinka_rms_calc_fast__var_filt >= 0.0f) && (_fuselinka_rms_calc_fast__var_filt_old < 0.0f)) {
        _fuselinka_rms_calc_fast__var_zc = 1;
    }
    else {
        _fuselinka_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_fuselinka_rms_calc_fast__var_zc == 1) || (5000 == _fuselinka_rms_calc_fast__pc_cnt_1_state)) {
        _fuselinka_rms_calc_fast__var_eff_s = _fuselinka_rms_calc_fast__v_sq_sum_state;
        _fuselinka_rms_calc_fast__period = (float)_fuselinka_rms_calc_fast__pc_cnt_1_state;
        _fuselinka_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: FuseLinkA.sys1
    // Generated from the component: FuseLinkA1.rms_calc_fast
    _fuselinka1_rms_calc_fast__v_sq_sum_state = _fuselinka1_rms_calc_fast__v_sq_sum_state + _fuselinka1_instantaneous__out * _fuselinka1_instantaneous__out;
    _fuselinka1_rms_calc_fast__var_filt_old = _fuselinka1_rms_calc_fast__var_filt;
    _fuselinka1_rms_calc_fast__var_filt = (_fuselinka1_rms_calc_fast__var_filt_old * 0.909 + _fuselinka1_instantaneous__out * 0.0909);
    if((_fuselinka1_rms_calc_fast__var_filt >= 0.0f) && (_fuselinka1_rms_calc_fast__var_filt_old < 0.0f)) {
        _fuselinka1_rms_calc_fast__var_zc = 1;
    }
    else {
        _fuselinka1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_fuselinka1_rms_calc_fast__var_zc == 1) || (5000 == _fuselinka1_rms_calc_fast__pc_cnt_1_state)) {
        _fuselinka1_rms_calc_fast__var_eff_s = _fuselinka1_rms_calc_fast__v_sq_sum_state;
        _fuselinka1_rms_calc_fast__period = (float)_fuselinka1_rms_calc_fast__pc_cnt_1_state;
        _fuselinka1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: FuseLinkA1.sys1
    // Generated from the component: FuseLinkA3.rms_calc_fast
    _fuselinka3_rms_calc_fast__v_sq_sum_state = _fuselinka3_rms_calc_fast__v_sq_sum_state + _fuselinka3_instantaneous__out * _fuselinka3_instantaneous__out;
    _fuselinka3_rms_calc_fast__var_filt_old = _fuselinka3_rms_calc_fast__var_filt;
    _fuselinka3_rms_calc_fast__var_filt = (_fuselinka3_rms_calc_fast__var_filt_old * 0.909 + _fuselinka3_instantaneous__out * 0.0909);
    if((_fuselinka3_rms_calc_fast__var_filt >= 0.0f) && (_fuselinka3_rms_calc_fast__var_filt_old < 0.0f)) {
        _fuselinka3_rms_calc_fast__var_zc = 1;
    }
    else {
        _fuselinka3_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_fuselinka3_rms_calc_fast__var_zc == 1) || (5000 == _fuselinka3_rms_calc_fast__pc_cnt_1_state)) {
        _fuselinka3_rms_calc_fast__var_eff_s = _fuselinka3_rms_calc_fast__v_sq_sum_state;
        _fuselinka3_rms_calc_fast__period = (float)_fuselinka3_rms_calc_fast__pc_cnt_1_state;
        _fuselinka3_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: FuseLinkA3.sys1
    // Generated from the component: FuseLinkB.rms_calc_fast
    _fuselinkb_rms_calc_fast__v_sq_sum_state = _fuselinkb_rms_calc_fast__v_sq_sum_state + _fuselinkb_instantaneous__out * _fuselinkb_instantaneous__out;
    _fuselinkb_rms_calc_fast__var_filt_old = _fuselinkb_rms_calc_fast__var_filt;
    _fuselinkb_rms_calc_fast__var_filt = (_fuselinkb_rms_calc_fast__var_filt_old * 0.909 + _fuselinkb_instantaneous__out * 0.0909);
    if((_fuselinkb_rms_calc_fast__var_filt >= 0.0f) && (_fuselinkb_rms_calc_fast__var_filt_old < 0.0f)) {
        _fuselinkb_rms_calc_fast__var_zc = 1;
    }
    else {
        _fuselinkb_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_fuselinkb_rms_calc_fast__var_zc == 1) || (5000 == _fuselinkb_rms_calc_fast__pc_cnt_1_state)) {
        _fuselinkb_rms_calc_fast__var_eff_s = _fuselinkb_rms_calc_fast__v_sq_sum_state;
        _fuselinkb_rms_calc_fast__period = (float)_fuselinkb_rms_calc_fast__pc_cnt_1_state;
        _fuselinkb_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: FuseLinkB.sys1
    // Generated from the component: FuseLinkB1.rms_calc_fast
    _fuselinkb1_rms_calc_fast__v_sq_sum_state = _fuselinkb1_rms_calc_fast__v_sq_sum_state + _fuselinkb1_instantaneous__out * _fuselinkb1_instantaneous__out;
    _fuselinkb1_rms_calc_fast__var_filt_old = _fuselinkb1_rms_calc_fast__var_filt;
    _fuselinkb1_rms_calc_fast__var_filt = (_fuselinkb1_rms_calc_fast__var_filt_old * 0.909 + _fuselinkb1_instantaneous__out * 0.0909);
    if((_fuselinkb1_rms_calc_fast__var_filt >= 0.0f) && (_fuselinkb1_rms_calc_fast__var_filt_old < 0.0f)) {
        _fuselinkb1_rms_calc_fast__var_zc = 1;
    }
    else {
        _fuselinkb1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_fuselinkb1_rms_calc_fast__var_zc == 1) || (5000 == _fuselinkb1_rms_calc_fast__pc_cnt_1_state)) {
        _fuselinkb1_rms_calc_fast__var_eff_s = _fuselinkb1_rms_calc_fast__v_sq_sum_state;
        _fuselinkb1_rms_calc_fast__period = (float)_fuselinkb1_rms_calc_fast__pc_cnt_1_state;
        _fuselinkb1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: FuseLinkB1.sys1
    // Generated from the component: FuseLinkB2.rms_calc_fast
    _fuselinkb2_rms_calc_fast__v_sq_sum_state = _fuselinkb2_rms_calc_fast__v_sq_sum_state + _fuselinkb2_instantaneous__out * _fuselinkb2_instantaneous__out;
    _fuselinkb2_rms_calc_fast__var_filt_old = _fuselinkb2_rms_calc_fast__var_filt;
    _fuselinkb2_rms_calc_fast__var_filt = (_fuselinkb2_rms_calc_fast__var_filt_old * 0.909 + _fuselinkb2_instantaneous__out * 0.0909);
    if((_fuselinkb2_rms_calc_fast__var_filt >= 0.0f) && (_fuselinkb2_rms_calc_fast__var_filt_old < 0.0f)) {
        _fuselinkb2_rms_calc_fast__var_zc = 1;
    }
    else {
        _fuselinkb2_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_fuselinkb2_rms_calc_fast__var_zc == 1) || (5000 == _fuselinkb2_rms_calc_fast__pc_cnt_1_state)) {
        _fuselinkb2_rms_calc_fast__var_eff_s = _fuselinkb2_rms_calc_fast__v_sq_sum_state;
        _fuselinkb2_rms_calc_fast__period = (float)_fuselinkb2_rms_calc_fast__pc_cnt_1_state;
        _fuselinkb2_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: FuseLinkB2.sys1
    // Generated from the component: FuseLinkB5.rms_calc_fast
    _fuselinkb5_rms_calc_fast__v_sq_sum_state = _fuselinkb5_rms_calc_fast__v_sq_sum_state + _fuselinkb5_instantaneous__out * _fuselinkb5_instantaneous__out;
    _fuselinkb5_rms_calc_fast__var_filt_old = _fuselinkb5_rms_calc_fast__var_filt;
    _fuselinkb5_rms_calc_fast__var_filt = (_fuselinkb5_rms_calc_fast__var_filt_old * 0.909 + _fuselinkb5_instantaneous__out * 0.0909);
    if((_fuselinkb5_rms_calc_fast__var_filt >= 0.0f) && (_fuselinkb5_rms_calc_fast__var_filt_old < 0.0f)) {
        _fuselinkb5_rms_calc_fast__var_zc = 1;
    }
    else {
        _fuselinkb5_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_fuselinkb5_rms_calc_fast__var_zc == 1) || (5000 == _fuselinkb5_rms_calc_fast__pc_cnt_1_state)) {
        _fuselinkb5_rms_calc_fast__var_eff_s = _fuselinkb5_rms_calc_fast__v_sq_sum_state;
        _fuselinkb5_rms_calc_fast__period = (float)_fuselinkb5_rms_calc_fast__pc_cnt_1_state;
        _fuselinkb5_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: FuseLinkB5.sys1
    // Generated from the component: FuseLinkA.rt1.Input
    _fuselinka_rt1_output__out = _fuselinka_rms_calc_fast__var_eff_s;
    // Generated from the component: FuseLinkA.rt2.Input
    _fuselinka_rt2_output__out = _fuselinka_rms_calc_fast__period;
    // Generated from the component: FuseLinkA.t1
    // Generated from the component: FuseLinkA1.rt1.Input
    _fuselinka1_rt1_output__out = _fuselinka1_rms_calc_fast__var_eff_s;
    // Generated from the component: FuseLinkA1.rt2.Input
    _fuselinka1_rt2_output__out = _fuselinka1_rms_calc_fast__period;
    // Generated from the component: FuseLinkA1.t1
    // Generated from the component: FuseLinkA3.rt1.Input
    _fuselinka3_rt1_output__out = _fuselinka3_rms_calc_fast__var_eff_s;
    // Generated from the component: FuseLinkA3.rt2.Input
    _fuselinka3_rt2_output__out = _fuselinka3_rms_calc_fast__period;
    // Generated from the component: FuseLinkA3.t1
    // Generated from the component: FuseLinkB.rt1.Input
    _fuselinkb_rt1_output__out = _fuselinkb_rms_calc_fast__var_eff_s;
    // Generated from the component: FuseLinkB.rt2.Input
    _fuselinkb_rt2_output__out = _fuselinkb_rms_calc_fast__period;
    // Generated from the component: FuseLinkB.t1
    // Generated from the component: FuseLinkB1.rt1.Input
    _fuselinkb1_rt1_output__out = _fuselinkb1_rms_calc_fast__var_eff_s;
    // Generated from the component: FuseLinkB1.rt2.Input
    _fuselinkb1_rt2_output__out = _fuselinkb1_rms_calc_fast__period;
    // Generated from the component: FuseLinkB1.t1
    // Generated from the component: FuseLinkB2.rt1.Input
    _fuselinkb2_rt1_output__out = _fuselinkb2_rms_calc_fast__var_eff_s;
    // Generated from the component: FuseLinkB2.rt2.Input
    _fuselinkb2_rt2_output__out = _fuselinkb2_rms_calc_fast__period;
    // Generated from the component: FuseLinkB2.t1
    // Generated from the component: FuseLinkB5.rt1.Input
    _fuselinkb5_rt1_output__out = _fuselinkb5_rms_calc_fast__var_eff_s;
    // Generated from the component: FuseLinkB5.rt2.Input
    _fuselinkb5_rt2_output__out = _fuselinkb5_rms_calc_fast__period;
    // Generated from the component: FuseLinkB5.t1
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: FuseLinkA.rms_calc_fast
    if ((_fuselinka_rms_calc_fast__var_zc == 1) || (5000 == _fuselinka_rms_calc_fast__pc_cnt_1_state)) {
        _fuselinka_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _fuselinka_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: FuseLinkA1.rms_calc_fast
    if ((_fuselinka1_rms_calc_fast__var_zc == 1) || (5000 == _fuselinka1_rms_calc_fast__pc_cnt_1_state)) {
        _fuselinka1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _fuselinka1_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: FuseLinkA3.rms_calc_fast
    if ((_fuselinka3_rms_calc_fast__var_zc == 1) || (5000 == _fuselinka3_rms_calc_fast__pc_cnt_1_state)) {
        _fuselinka3_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _fuselinka3_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: FuseLinkB.rms_calc_fast
    if ((_fuselinkb_rms_calc_fast__var_zc == 1) || (5000 == _fuselinkb_rms_calc_fast__pc_cnt_1_state)) {
        _fuselinkb_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _fuselinkb_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: FuseLinkB1.rms_calc_fast
    if ((_fuselinkb1_rms_calc_fast__var_zc == 1) || (5000 == _fuselinkb1_rms_calc_fast__pc_cnt_1_state)) {
        _fuselinkb1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _fuselinkb1_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: FuseLinkB2.rms_calc_fast
    if ((_fuselinkb2_rms_calc_fast__var_zc == 1) || (5000 == _fuselinkb2_rms_calc_fast__pc_cnt_1_state)) {
        _fuselinkb2_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _fuselinkb2_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: FuseLinkB5.rms_calc_fast
    if ((_fuselinkb5_rms_calc_fast__var_zc == 1) || (5000 == _fuselinkb5_rms_calc_fast__pc_cnt_1_state)) {
        _fuselinkb5_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _fuselinkb5_rms_calc_fast__pc_cnt_1_state ++;
    //@cmp.update.block.end
}
void TimerCounterHandler_1_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: FuseLinkA.rms_calc_slow
    if(_fuselinka_rt2_output__out > 0.0f) {
        _fuselinka_rms_calc_slow__var_rms = sqrtf(_fuselinka_rt1_output__out / _fuselinka_rt2_output__out);
    }
    else {
        _fuselinka_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: FuseLinkA1.rms_calc_slow
    if(_fuselinka1_rt2_output__out > 0.0f) {
        _fuselinka1_rms_calc_slow__var_rms = sqrtf(_fuselinka1_rt1_output__out / _fuselinka1_rt2_output__out);
    }
    else {
        _fuselinka1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: FuseLinkA3.rms_calc_slow
    if(_fuselinka3_rt2_output__out > 0.0f) {
        _fuselinka3_rms_calc_slow__var_rms = sqrtf(_fuselinka3_rt1_output__out / _fuselinka3_rt2_output__out);
    }
    else {
        _fuselinka3_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: FuseLinkB.rms_calc_slow
    if(_fuselinkb_rt2_output__out > 0.0f) {
        _fuselinkb_rms_calc_slow__var_rms = sqrtf(_fuselinkb_rt1_output__out / _fuselinkb_rt2_output__out);
    }
    else {
        _fuselinkb_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: FuseLinkB1.rms_calc_slow
    if(_fuselinkb1_rt2_output__out > 0.0f) {
        _fuselinkb1_rms_calc_slow__var_rms = sqrtf(_fuselinkb1_rt1_output__out / _fuselinkb1_rt2_output__out);
    }
    else {
        _fuselinkb1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: FuseLinkB2.rms_calc_slow
    if(_fuselinkb2_rt2_output__out > 0.0f) {
        _fuselinkb2_rms_calc_slow__var_rms = sqrtf(_fuselinkb2_rt1_output__out / _fuselinkb2_rt2_output__out);
    }
    else {
        _fuselinkb2_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: FuseLinkB5.rms_calc_slow
    if(_fuselinkb5_rt2_output__out > 0.0f) {
        _fuselinkb5_rms_calc_slow__var_rms = sqrtf(_fuselinkb5_rt1_output__out / _fuselinkb5_rt2_output__out);
    }
    else {
        _fuselinkb5_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: FuseLinkA.cpu_trans.Input
    XIo_OutFloat(0x55000100, _fuselinka_rms_calc_slow__var_rms);
    // Generated from the component: FuseLinkA.rms
    HIL_OutAO(0x2000, _fuselinka_rms_calc_slow__var_rms);
    // Generated from the component: FuseLinkA.sys2
    // Generated from the component: FuseLinkA1.cpu_trans.Input
    XIo_OutFloat(0x55000104, _fuselinka1_rms_calc_slow__var_rms);
    // Generated from the component: FuseLinkA1.rms
    HIL_OutAO(0x2001, _fuselinka1_rms_calc_slow__var_rms);
    // Generated from the component: FuseLinkA1.sys2
    // Generated from the component: FuseLinkA3.cpu_trans.Input
    XIo_OutFloat(0x55000108, _fuselinka3_rms_calc_slow__var_rms);
    // Generated from the component: FuseLinkA3.rms
    HIL_OutAO(0x2002, _fuselinka3_rms_calc_slow__var_rms);
    // Generated from the component: FuseLinkA3.sys2
    // Generated from the component: FuseLinkB.cpu_trans.Input
    XIo_OutFloat(0x5500010c, _fuselinkb_rms_calc_slow__var_rms);
    // Generated from the component: FuseLinkB.rms
    HIL_OutAO(0x2003, _fuselinkb_rms_calc_slow__var_rms);
    // Generated from the component: FuseLinkB.sys2
    // Generated from the component: FuseLinkB1.cpu_trans.Input
    XIo_OutFloat(0x55000110, _fuselinkb1_rms_calc_slow__var_rms);
    // Generated from the component: FuseLinkB1.rms
    HIL_OutAO(0x2004, _fuselinkb1_rms_calc_slow__var_rms);
    // Generated from the component: FuseLinkB1.sys2
    // Generated from the component: FuseLinkB2.cpu_trans.Input
    XIo_OutFloat(0x55000114, _fuselinkb2_rms_calc_slow__var_rms);
    // Generated from the component: FuseLinkB2.rms
    HIL_OutAO(0x2005, _fuselinkb2_rms_calc_slow__var_rms);
    // Generated from the component: FuseLinkB2.sys2
    // Generated from the component: FuseLinkB5.cpu_trans.Input
    XIo_OutFloat(0x55000118, _fuselinkb5_rms_calc_slow__var_rms);
    // Generated from the component: FuseLinkB5.rms
    HIL_OutAO(0x2006, _fuselinkb5_rms_calc_slow__var_rms);
    // Generated from the component: FuseLinkB5.sys2
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------