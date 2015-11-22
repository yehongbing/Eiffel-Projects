/*
 * Code for class EV_VIEWPORT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev573.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_VIEWPORT}.implementation */
EIF_REFERENCE F978_12286 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


/* {EV_VIEWPORT}.create_implementation */
void F978_12287 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1120, 1120, _OBJSIZ_47_11_10_4_0_3_0_0_);
	F1121_15356(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit573 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
