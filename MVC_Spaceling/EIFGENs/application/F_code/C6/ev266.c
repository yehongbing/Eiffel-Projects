/*
 * Code for class EV_TREE_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev266.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TREE_ACTION_SEQUENCES_I}.select_actions_internal */
static EIF_REFERENCE F204_3989_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F204_3989 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3703[Dtype(Current) - 203]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F204_3989_body (Current));
			*(EIF_REFERENCE *)(Current + O3703[Dtype(Current) - 203]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_TREE_ACTION_SEQUENCES_I}.deselect_actions_internal */
static EIF_REFERENCE F204_3992_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F204_3992 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3706[Dtype(Current) - 203]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F204_3992_body (Current));
			*(EIF_REFERENCE *)(Current + O3706[Dtype(Current) - 203]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit266 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
