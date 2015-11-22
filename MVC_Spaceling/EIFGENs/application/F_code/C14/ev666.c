/*
 * Code for class EV_ACCELERATOR_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev666.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ACCELERATOR_IMP}.make */
void F1033_13133 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(1205));
	F1206_17316(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	F1029_13080(Current, (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_ACCELERATOR_IMP}.key */
EIF_REFERENCE F1033_13134 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EV_ACCELERATOR_IMP}.shift_required */
EIF_BOOLEAN F1033_13135 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_3_);
}


/* {EV_ACCELERATOR_IMP}.alt_required */
EIF_BOOLEAN F1033_13136 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_2_);
}


/* {EV_ACCELERATOR_IMP}.control_required */
EIF_BOOLEAN F1033_13137 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_);
}


/* {EV_ACCELERATOR_IMP}.set_key */
void F1033_13138 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	
	RTGC;
	tr1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTLE;
}

/* {EV_ACCELERATOR_IMP}.enable_shift_required */
void F1033_13139 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_ACCELERATOR_IMP}.enable_alt_required */
void F1033_13141 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_ACCELERATOR_IMP}.enable_control_required */
void F1033_13143 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
}

/* {EV_ACCELERATOR_IMP}.interface */
static EIF_REFERENCE F1033_13145_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1033_13145 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1033_13145_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_ACCELERATOR_IMP}.destroy */
void F1033_13146 (EIF_REFERENCE Current)
{
	GTCX
	
	
	F1029_13081(Current, (EIF_BOOLEAN) 1);
}

void EIF_Minit666 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
