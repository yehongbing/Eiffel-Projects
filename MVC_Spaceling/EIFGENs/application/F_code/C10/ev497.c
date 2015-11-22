/*
 * Code for class EV_ANY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev497.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ANY}.default_create */
void F930_10736 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R8348[dtype-930])(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R8347[dtype-930])(Current);
	tr1 = *(EIF_REFERENCE *)(Current + O8345[dtype-929]);
	F1029_13075(RTCV(tr1), ((EIF_INTEGER_8) 4L), (EIF_BOOLEAN) 1);
	tr1 = *(EIF_REFERENCE *)(Current + O8345[dtype-929]);
	F1029_13060(RTCV(tr1), Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) R8349[dtype-929])(Current);
	RTLE;
}

/* {EV_ANY}.destroy */
void F930_10739 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	F1029_13063(RTCV(tr1));
	RTLE;
}

/* {EV_ANY}.is_destroyed */
EIF_BOOLEAN F930_10740 (EIF_REFERENCE Current)
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
	Result = F1029_13065(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_ANY}.implementation */
EIF_REFERENCE F930_10741 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


/* {EV_ANY}.initialize */
void F930_10745 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	F1029_13075(RTCV(tr1), ((EIF_INTEGER_8) 5L), (EIF_BOOLEAN) 1);
	RTLE;
}

/* {EV_ANY}.copy */
void F930_10746 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_ANY}.environment_i */
static EIF_REFERENCE F930_10748_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	

	RTLI(1);
	RTLR(0,tr1);
	
	RTEV;
	RTGC;
	RTOSP (10748);
#define Result RTOSR(10748)
	RTOC_NEW(Result);
	tr1 = RTLNS(1030, 1030, _OBJSIZ_1_1_0_1_0_0_0_0_);
	F1031_13106(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	RTOSE (10748);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F930_10748 (EIF_REFERENCE Current)
{
	GTCX
	return RTOSCF(10748,F930_10748_body,(Current));
}

void EIF_Minit497 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
