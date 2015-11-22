/*
 * Code for class EV_DOCKABLE_SOURCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev518.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_DOCKABLE_SOURCE}.real_source */
EIF_REFERENCE F945_11058 (EIF_REFERENCE Current)
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
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	Result = *(EIF_REFERENCE *)(RTCV(tr1) + O10765[Dtype(tr1)-1066]);
	RTLE;
	return Result;
}

/* {EV_DOCKABLE_SOURCE}.implementation */
EIF_REFERENCE F945_11072 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


void EIF_Minit518 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
