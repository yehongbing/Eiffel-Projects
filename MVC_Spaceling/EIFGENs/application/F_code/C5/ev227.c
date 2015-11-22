/*
 * Code for class EV_WINDOW_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev227.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WINDOW_ACTION_SEQUENCES_I}.close_request_actions */
EIF_REFERENCE F172_3761 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3505[dtype-171]) == NULL)) {
		tr1 = F173_3773(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3505[dtype-171]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3505[dtype-171]);
}

/* {EV_WINDOW_ACTION_SEQUENCES_I}.close_request_actions_internal */
static EIF_REFERENCE F172_3763_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F172_3763 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3505[Dtype(Current) - 171]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F172_3763_body (Current));
			*(EIF_REFERENCE *)(Current + O3505[Dtype(Current) - 171]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WINDOW_ACTION_SEQUENCES_I}.move_actions_internal */
static EIF_REFERENCE F172_3766_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F172_3766 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3508[Dtype(Current) - 171]);
	if (!r) {
		if (RTAT(748)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F172_3766_body (Current));
			*(EIF_REFERENCE *)(Current + O3508[Dtype(Current) - 171]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WINDOW_ACTION_SEQUENCES_I}.show_actions_internal */
static EIF_REFERENCE F172_3769_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F172_3769 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3511[Dtype(Current) - 171]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F172_3769_body (Current));
			*(EIF_REFERENCE *)(Current + O3511[Dtype(Current) - 171]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_WINDOW_ACTION_SEQUENCES_I}.hide_actions_internal */
static EIF_REFERENCE F172_3772_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F172_3772 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3514[Dtype(Current) - 171]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F172_3772_body (Current));
			*(EIF_REFERENCE *)(Current + O3514[Dtype(Current) - 171]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit227 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
