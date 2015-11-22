/*
 * Code for class EV_WINDOW
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev576.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WINDOW}.initialize */
void F980_12322 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	
	RTGC;
	F930_10745(Current);
	tr1 = *(EIF_REFERENCE *)(RTCV(F980_12330(Current)) + _REFACS_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,1114,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + O8345[dtype-929]);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,1114,0xFFF9,1,841,934,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A765_260_2, (EIF_POINTER) _A765_260_2, (EIF_POINTER)(F1123_15432),tr2, 1, 1);
	}
	F719_6679(RTCV(tr1), tr5);
	tr1 = *(EIF_REFERENCE *)(RTCV(F980_12330(Current)) + _REFACS_4_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,1114,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0, 2, 0);
	}
	tr3 = *(EIF_REFERENCE *)(Current + O8345[dtype-929]);
	((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
	RTAR(tr2,tr3);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,1114,0xFFF9,1,841,934,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNRF(typres0, (EIF_POINTER) __A765_261_2, (EIF_POINTER) _A765_261_2, (EIF_POINTER)(F1123_15433),tr2, 1, 1);
	}
	F719_6679(RTCV(tr1), tr5);
	RTLE;
}

/* {EV_WINDOW}.accelerators */
EIF_REFERENCE F980_12330 (EIF_REFERENCE Current)
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
	Result = F1115_15257(RTCV(tr1));
	RTLE;
	return Result;
}

/* {EV_WINDOW}.has */
EIF_BOOLEAN F980_12331 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	Result = F1115_15254(RTCV(tr1), arg1);
	RTLE;
	return Result;
}

/* {EV_WINDOW}.disable_user_resize */
void F980_12336 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	F1123_15420(RTCV(tr1));
	RTLE;
}

/* {EV_WINDOW}.set_title */
void F980_12342 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	F1123_15429(RTCV(tr1), tr2);
	RTLE;
}

/* {EV_WINDOW}.unlock_update */
void F980_12347 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = *(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]);
	F1115_15271(RTCV(tr1));
	RTLE;
}

/* {EV_WINDOW}.implementation */
EIF_REFERENCE F980_12349 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O8345[Dtype(Current) - 929]);
}


/* {EV_WINDOW}.create_implementation */
void F980_12353 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNS(1122, 1122, _OBJSIZ_57_19_10_7_0_4_0_0_);
	F1123_15409(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O8345[Dtype(Current)-929]) = (EIF_REFERENCE) tr1;
	RTLE;
}

void EIF_Minit576 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
