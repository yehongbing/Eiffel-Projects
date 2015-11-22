/*
 * Code for class EV_ITEM_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev235.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ITEM_ACTION_SEQUENCES_I}.pointer_motion_actions */
EIF_REFERENCE F179_3796 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3532[dtype-178]) == NULL)) {
		tr1 = F180_3805(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3532[dtype-178]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3532[dtype-178]);
}

/* {EV_ITEM_ACTION_SEQUENCES_I}.pointer_motion_actions_internal */
static EIF_REFERENCE F179_3798_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F179_3798 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3532[Dtype(Current) - 178]);
	if (!r) {
		if (RTAT(742)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F179_3798_body (Current));
			*(EIF_REFERENCE *)(Current + O3532[Dtype(Current) - 178]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_ITEM_ACTION_SEQUENCES_I}.pointer_button_press_actions */
EIF_REFERENCE F179_3799 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3535[dtype-178]) == NULL)) {
		tr1 = F180_3806(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3535[dtype-178]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3535[dtype-178]);
}

/* {EV_ITEM_ACTION_SEQUENCES_I}.pointer_button_press_actions_internal */
static EIF_REFERENCE F179_3801_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F179_3801 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3535[Dtype(Current) - 178]);
	if (!r) {
		if (RTAT(743)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F179_3801_body (Current));
			*(EIF_REFERENCE *)(Current + O3535[Dtype(Current) - 178]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_ITEM_ACTION_SEQUENCES_I}.pointer_double_press_actions */
EIF_REFERENCE F179_3802 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3538[dtype-178]) == NULL)) {
		tr1 = F180_3807(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3538[dtype-178]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3538[dtype-178]);
}

/* {EV_ITEM_ACTION_SEQUENCES_I}.pointer_double_press_actions_internal */
static EIF_REFERENCE F179_3804_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F179_3804 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3538[Dtype(Current) - 178]);
	if (!r) {
		if (RTAT(743)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F179_3804_body (Current));
			*(EIF_REFERENCE *)(Current + O3538[Dtype(Current) - 178]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit235 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
