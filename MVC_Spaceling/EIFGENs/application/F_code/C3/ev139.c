/*
 * Code for class EV_GAUGE_ACTION_SEQUENCES_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev139.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_GAUGE_ACTION_SEQUENCES_I}.change_actions_internal */
static EIF_REFERENCE F97_3084_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F97_3084 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O2982[Dtype(Current) - 96]);
	if (!r) {
		if (RTAT(734)) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F97_3084_body (Current));
			*(EIF_REFERENCE *)(Current + O2982[Dtype(Current) - 96]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit139 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
