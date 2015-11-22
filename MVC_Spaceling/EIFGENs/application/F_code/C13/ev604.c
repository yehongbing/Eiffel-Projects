/*
 * Code for class EV_BUTTON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev604.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_BUTTON}.make_with_text_and_action */
void F996_12612 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,arg2);
	
	RTGC;
	F930_10736(Current);
	F958_11228(Current, arg1);
	tr1 = F50_2226(Current);
	F719_6679(RTCV(tr1), arg2);
	RTLE;
}

/* {EV_BUTTON}.is_default_push_button */
EIF_BOOLEAN F996_12614 (EIF_REFERENCE Current)
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
	Result = *(EIF_BOOLEAN *)(RTCV(tr1)+ _CHROFF_44_9_);
	RTLE;
	return Result;
}

/* {EV_BUTTON}.enable_default_push_button */
void F996_12615 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	F1154_16194(RTCV(tr1));
	RTLE;
}

/* {EV_BUTTON}.disable_default_push_button */
void F996_12616 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	F1154_16195(RTCV(tr1));
	RTLE;
}

/* {EV_BUTTON}.implementation */
EIF_REFERENCE F996_12618 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


/* {EV_BUTTON}.create_implementation */
void F996_12619 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1153, 1153, _OBJSIZ_44_12_10_2_0_3_0_0_);
	F1154_16185(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit604 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
