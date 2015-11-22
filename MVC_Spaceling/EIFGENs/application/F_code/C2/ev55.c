/*
 * Code for class EV_APPLICATION_ACTION_SEQUENCES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev55.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_APPLICATION_ACTION_SEQUENCES}.implementation */
EIF_REFERENCE F41_2121 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O2121[Dtype(Current) - 40]);
}


/* {EV_APPLICATION_ACTION_SEQUENCES}.pick_actions */
EIF_REFERENCE F41_2124 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O2121[Dtype(Current)-40]);
	Result = F163_3473(RTCV(tr1));
	RTLE;
	return Result;
}

void EIF_Minit55 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
