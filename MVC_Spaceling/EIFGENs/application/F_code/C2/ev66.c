/*
 * Code for class EV_BUTTON_ACTION_SEQUENCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev66.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_BUTTON_ACTION_SEQUENCES}.implementation */
EIF_REFERENCE F50_2225 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2225[Dtype(Current) - 49]);
}


/* {EV_BUTTON_ACTION_SEQUENCES}.select_actions */
EIF_REFERENCE F50_2226 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O2225[Dtype(Current)-49]);
	Result = F108_3238(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit66 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
