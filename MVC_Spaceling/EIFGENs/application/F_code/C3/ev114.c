/*
 * Code for class EV_ITEM_ACTION_SEQUENCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev114.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ITEM_ACTION_SEQUENCES}.implementation */
EIF_REFERENCE F81_2816 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2739[Dtype(Current) - 80]);
}


/* {EV_ITEM_ACTION_SEQUENCES}.pointer_motion_actions */
EIF_REFERENCE F81_2817 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O2739[Dtype(Current)-80]);
	Result = F179_3796(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit114 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
