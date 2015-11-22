/*
 * Code for class EV_BUTTON_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev154.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_BUTTON_ACTION_SEQUENCES_I}.select_actions */
EIF_REFERENCE F108_3238 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3110[dtype-107]) == NULL)) {
		tr1 = F109_3241(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3110[dtype-107]) = (EIF_REFERENCE) tr1;
	}
	RTLE;
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O3110[dtype-107]);
}

/* {EV_BUTTON_ACTION_SEQUENCES_I}.select_actions_internal */
static EIF_REFERENCE F108_3240_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F108_3240 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3110[Dtype(Current) - 107]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F108_3240_body (Current));
			*(EIF_REFERENCE *)(Current + O3110[Dtype(Current) - 107]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit154 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
