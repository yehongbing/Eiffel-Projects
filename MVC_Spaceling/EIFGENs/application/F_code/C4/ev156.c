/*
 * Code for class EV_PICK_AND_DROPABLE_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev156.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PICK_AND_DROPABLE_ACTION_SEQUENCES_I}.pick_actions */
EIF_REFERENCE F110_3245 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3116[dtype-109]) == NULL)) {
		tr1 = F111_3257(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3116[dtype-109]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3116[dtype-109]);
}

/* {EV_PICK_AND_DROPABLE_ACTION_SEQUENCES_I}.pick_actions_internal */
static EIF_REFERENCE F110_3247_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F110_3247 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3116[Dtype(Current) - 109]);
	if (!r) {
		if (RTAT(745)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F110_3247_body (Current));
			*(EIF_REFERENCE *)(Current + O3116[Dtype(Current) - 109]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_PICK_AND_DROPABLE_ACTION_SEQUENCES_I}.pick_ended_actions_internal */
static EIF_REFERENCE F110_3250_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F110_3250 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3119[Dtype(Current) - 109]);
	if (!r) {
		if (RTAT(744)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F110_3250_body (Current));
			*(EIF_REFERENCE *)(Current + O3119[Dtype(Current) - 109]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_PICK_AND_DROPABLE_ACTION_SEQUENCES_I}.drop_actions */
EIF_REFERENCE F110_3254 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3125[dtype-109]) == NULL)) {
		tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3124[dtype-1093])(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3125[dtype-109]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3125[dtype-109]);
}

/* {EV_PICK_AND_DROPABLE_ACTION_SEQUENCES_I}.drop_actions_internal */
static EIF_REFERENCE F110_3256_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F110_3256 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3125[Dtype(Current) - 109]);
	if (!r) {
		if (RTAT(732)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F110_3256_body (Current));
			*(EIF_REFERENCE *)(Current + O3125[Dtype(Current) - 109]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit156 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
