/*
 * Code for class EV_COLORIZABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev519.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_COLORIZABLE}.set_foreground_color */
void F948_11075 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R10749[Dtype(tr1)-1065])(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_COLORIZABLE}.set_background_color */
void F948_11076 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R10750[Dtype(tr1)-1065])(RTCV(tr1), arg1);
	RTLE;
}

/* {EV_COLORIZABLE}.implementation */
EIF_REFERENCE F948_11078 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


void EIF_Minit519 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
