/*
 * Code for class EV_LIST_ITEM_LIST_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev237.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_LIST_ITEM_LIST_ACTION_SEQUENCES_I}.select_actions_internal */
static EIF_REFERENCE F181_3810_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F181_3810 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3541[Dtype(Current) - 180]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F181_3810_body (Current));
			*(EIF_REFERENCE *)(Current + O3541[Dtype(Current) - 180]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {EV_LIST_ITEM_LIST_ACTION_SEQUENCES_I}.deselect_actions_internal */
static EIF_REFERENCE F181_3813_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F181_3813 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3544[Dtype(Current) - 180]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F181_3813_body (Current));
			*(EIF_REFERENCE *)(Current + O3544[Dtype(Current) - 180]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit237 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
