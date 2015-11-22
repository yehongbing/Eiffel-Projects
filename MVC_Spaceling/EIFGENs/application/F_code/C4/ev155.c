/*
 * Code for class EV_BUTTON_ACTION_SEQUENCES_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev155.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_BUTTON_ACTION_SEQUENCES_IMP}.create_select_actions */
EIF_REFERENCE F109_3241 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTLD;
	
	RTLI(7);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	
	RTGC;
	tr1 = RTLNS(737, 737, _OBJSIZ_9_2_0_2_0_0_0_0_);
	F726_6713(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	loc1 = RTOSCF(14148,F1079_14148,(Current));
	tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_42_);
	tp1 = F1079_14146(Current);
	tr2 = RTOSCF(2451,F67_2451,(RTCV(loc1)));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,792,913,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNTS(typres0, 3, 0);
	}
	tr4 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_42_);
	((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
	RTAR(tr3,tr4);
	tp2 = F1079_14133(Current);
	((EIF_TYPED_VALUE *)tr3+2)->it_p = tp2;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,0,841,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4 = RTLNRF(typres0, (EIF_POINTER) __A412_330, (EIF_POINTER) _A412_330, (EIF_POINTER)(F790_8079),tr3, 1, 0);
	}
	F793_8399(RTCV(tr1), tp1, tr2, tr4, NULL, (EIF_BOOLEAN) 0);
	RTLE;
	return Result;
}

void EIF_Minit155 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
