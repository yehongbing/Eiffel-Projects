/*
 * Code for class EV_TREE_NODE_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev208.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TREE_NODE_ACTION_SEQUENCES_I}.select_actions */
EIF_REFERENCE F161_3450 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3252[dtype-160]) == NULL)) {
		tr1 = F162_3462(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3252[dtype-160]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3252[dtype-160]);
}

/* {EV_TREE_NODE_ACTION_SEQUENCES_I}.select_actions_internal */
static EIF_REFERENCE F161_3452_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F161_3452 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3252[Dtype(Current) - 160]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F161_3452_body (Current));
			*(EIF_REFERENCE *)(Current + O3252[Dtype(Current) - 160]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_TREE_NODE_ACTION_SEQUENCES_I}.deselect_actions */
EIF_REFERENCE F161_3453 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3255[dtype-160]) == NULL)) {
		tr1 = F162_3463(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3255[dtype-160]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3255[dtype-160]);
}

/* {EV_TREE_NODE_ACTION_SEQUENCES_I}.deselect_actions_internal */
static EIF_REFERENCE F161_3455_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F161_3455 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3255[Dtype(Current) - 160]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F161_3455_body (Current));
			*(EIF_REFERENCE *)(Current + O3255[Dtype(Current) - 160]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_TREE_NODE_ACTION_SEQUENCES_I}.expand_actions */
EIF_REFERENCE F161_3456 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3258[dtype-160]) == NULL)) {
		tr1 = F162_3464(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3258[dtype-160]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3258[dtype-160]);
}

/* {EV_TREE_NODE_ACTION_SEQUENCES_I}.expand_actions_internal */
static EIF_REFERENCE F161_3458_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F161_3458 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3258[Dtype(Current) - 160]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F161_3458_body (Current));
			*(EIF_REFERENCE *)(Current + O3258[Dtype(Current) - 160]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_TREE_NODE_ACTION_SEQUENCES_I}.collapse_actions */
EIF_REFERENCE F161_3459 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3261[dtype-160]) == NULL)) {
		tr1 = F162_3465(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3261[dtype-160]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3261[dtype-160]);
}

/* {EV_TREE_NODE_ACTION_SEQUENCES_I}.collapse_actions_internal */
static EIF_REFERENCE F161_3461_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F161_3461 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3261[Dtype(Current) - 160]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F161_3461_body (Current));
			*(EIF_REFERENCE *)(Current + O3261[Dtype(Current) - 160]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit208 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
