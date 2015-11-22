/*
 * Code for class EV_SELECTABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev525.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_SELECTABLE}.is_selectable */
EIF_BOOLEAN F954_11119 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	Result = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R10839[Dtype(tr1)-1074])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_SELECTABLE}.enable_select */
void F954_11120 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R10841[Dtype(tr1)-1154])(RTCV(tr1));
	RTLE;
}

/* {EV_SELECTABLE}.implementation */
EIF_REFERENCE F954_11121 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


void EIF_Minit525 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
