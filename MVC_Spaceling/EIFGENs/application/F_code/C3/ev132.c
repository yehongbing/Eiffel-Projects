/*
 * Code for class EV_MULTI_COLUMN_LIST_ROW_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev132.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_MULTI_COLUMN_LIST_ROW_ACTION_SEQUENCES_I}.select_actions */
EIF_REFERENCE F91_3006 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) {
		tr1 = F92_3012(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current);
}

/* {EV_MULTI_COLUMN_LIST_ROW_ACTION_SEQUENCES_I}.select_actions_internal */
static EIF_REFERENCE F91_3008_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F91_3008 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F91_3008_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_MULTI_COLUMN_LIST_ROW_ACTION_SEQUENCES_I}.deselect_actions */
EIF_REFERENCE F91_3009 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		tr1 = F92_3013(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + _REFACS_1_);
}

/* {EV_MULTI_COLUMN_LIST_ROW_ACTION_SEQUENCES_I}.deselect_actions_internal */
static EIF_REFERENCE F91_3011_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F91_3011 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F91_3011_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit132 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
