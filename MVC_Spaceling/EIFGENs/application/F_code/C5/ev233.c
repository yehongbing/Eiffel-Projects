/*
 * Code for class EV_COMBO_BOX_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev233.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_COMBO_BOX_ACTION_SEQUENCES_I}.drop_down_actions_internal */
static EIF_REFERENCE F177_3790_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F177_3790 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3526[Dtype(Current) - 176]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F177_3790_body (Current));
			*(EIF_REFERENCE *)(Current + O3526[Dtype(Current) - 176]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_COMBO_BOX_ACTION_SEQUENCES_I}.list_hidden_actions_internal */
static EIF_REFERENCE F177_3793_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F177_3793 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3529[Dtype(Current) - 176]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F177_3793_body (Current));
			*(EIF_REFERENCE *)(Current + O3529[Dtype(Current) - 176]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit233 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
