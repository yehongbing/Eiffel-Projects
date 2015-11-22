/*
 * Code for class EV_LIST_ITEM_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev255.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_LIST_ITEM_ACTION_SEQUENCES_I}.select_actions */
EIF_REFERENCE F197_3880 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3599[dtype-196]) == NULL)) {
		tr1 = F198_3886(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3599[dtype-196]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3599[dtype-196]);
}

/* {EV_LIST_ITEM_ACTION_SEQUENCES_I}.select_actions_internal */
static EIF_REFERENCE F197_3882_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F197_3882 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3599[Dtype(Current) - 196]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F197_3882_body (Current));
			*(EIF_REFERENCE *)(Current + O3599[Dtype(Current) - 196]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_LIST_ITEM_ACTION_SEQUENCES_I}.deselect_actions */
EIF_REFERENCE F197_3883 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3602[dtype-196]) == NULL)) {
		tr1 = F198_3887(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3602[dtype-196]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3602[dtype-196]);
}

/* {EV_LIST_ITEM_ACTION_SEQUENCES_I}.deselect_actions_internal */
static EIF_REFERENCE F197_3885_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F197_3885 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3602[Dtype(Current) - 196]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F197_3885_body (Current));
			*(EIF_REFERENCE *)(Current + O3602[Dtype(Current) - 196]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit255 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
