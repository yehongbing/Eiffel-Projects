/*
 * Code for class EV_WINDOW_ACTION_SEQUENCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev56.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WINDOW_ACTION_SEQUENCES}.implementation */
EIF_REFERENCE F42_2142 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2142[Dtype(Current) - 41]);
}


/* {EV_WINDOW_ACTION_SEQUENCES}.close_request_actions */
EIF_REFERENCE F42_2146 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O2142[Dtype(Current)-41]);
	Result = F172_3761(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit56 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
