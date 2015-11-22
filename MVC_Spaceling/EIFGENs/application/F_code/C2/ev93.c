/*
 * Code for class EV_PICK_AND_DROPABLE_ACTION_SEQUENCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev93.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PICK_AND_DROPABLE_ACTION_SEQUENCES}.implementation */
EIF_REFERENCE F70_2599 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2547[Dtype(Current) - 69]);
}


/* {EV_PICK_AND_DROPABLE_ACTION_SEQUENCES}.drop_actions */
EIF_REFERENCE F70_2603 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O2547[Dtype(Current)-69]);
	Result = F110_3254(RTCV(tr1));
	tb1 = F407_5127(RTCV(Result));
	if (tb1) {
		F792_8140(Current, Result);
	}
	RTLE;
	return Result;
}

void EIF_Minit93 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
