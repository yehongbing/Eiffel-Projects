/*
 * Code for class EV_TEXT_COMPONENT_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev245.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TEXT_COMPONENT_ACTION_SEQUENCES_I}.change_actions_internal */
static EIF_REFERENCE F187_3834_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F187_3834 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O3559[Dtype(Current) - 186]);
	if (!r) {
		if (RTAT(737)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F187_3834_body (Current));
			*(EIF_REFERENCE *)(Current + O3559[Dtype(Current) - 186]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit245 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif