/*
 * Code for class EV_TEXTABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev531.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_TEXTABLE}.make_with_text */
void F958_11226 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	
	RTGC;
	F930_10736(Current);
	F958_11228(Current, arg1);
	RTLE;
}

/* {EV_TEXTABLE}.text */
EIF_REFERENCE F958_11227 (EIF_REFERENCE Current)
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
	Result = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R11070[Dtype(tr1)-1087])(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_TEXTABLE}.set_text */
void F958_11228 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	tr2 = RTOSCF(10748,F930_10748,(Current));
	tr2 = F1030_13097(RTCV(tr2), arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R11071[Dtype(tr1)-1087])(RTCV(tr1), tr2);
	RTLE;
}

/* {EV_TEXTABLE}.implementation */
EIF_REFERENCE F958_11231 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


void EIF_Minit531 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
