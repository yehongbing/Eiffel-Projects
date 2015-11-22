/*
 * Code for class EV_WIDGET_ACTION_SEQUENCES_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev226.h"
#include <ev_gtk.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_WIDGET_ACTION_SEQUENCES_IMP}.create_pointer_motion_actions */
EIF_REFERENCE F171_3742 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	
	RTGC;
	tr1 = RTLNS(742, 742, _OBJSIZ_9_2_0_2_0_0_0_0_);
	F726_6713(RTCV(tr1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_WIDGET_ACTION_SEQUENCES_IMP}.create_pointer_button_press_actions */
EIF_REFERENCE F171_3743 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	
	RTGC;
	tr1 = RTLNS(743, 743, _OBJSIZ_9_2_0_2_0_0_0_0_);
	F726_6713(RTCV(tr1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_WIDGET_ACTION_SEQUENCES_IMP}.create_pointer_button_release_actions */
EIF_REFERENCE F171_3745 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	
	RTGC;
	tr1 = RTLNS(743, 743, _OBJSIZ_9_2_0_2_0_0_0_0_);
	F726_6713(RTCV(tr1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_WIDGET_ACTION_SEQUENCES_IMP}.create_key_press_actions */
EIF_REFERENCE F171_3748 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(1);
	RTLR(0,tr1);
	
	RTGC;
	tr1 = RTLNS(738, 738, _OBJSIZ_9_2_0_2_0_0_0_0_);
	F726_6713(RTCV(tr1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

/* {EV_WIDGET_ACTION_SEQUENCES_IMP}.create_resize_actions */
EIF_REFERENCE F171_3753 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(10);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,tr5);
	RTLR(8,tr6);
	RTLR(9,tr7);
	
	RTGC;
	tr1 = RTLNS(748, 748, _OBJSIZ_9_2_0_2_0_0_0_0_);
	F726_6713(RTCV(tr1));
	Result = (EIF_REFERENCE) tr1;
	tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN) EIF_TEST(GTK_IS_WINDOW((tp1)))) {
		loc1 = RTOSCF(14148,F1079_14148,(Current));
		tr1 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_42_);
		tp1 = *(EIF_POINTER *)(Current + O10979[dtype-1078]);
		tr2 = RTOSCF(2448,F67_2448,(RTCV(loc1)));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,841,792,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr3 = RTLNTS(typres0, 3, 0);
		}
		tr4 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_42_);
		((EIF_TYPED_VALUE *)tr3+1)->it_r = tr4;
		RTAR(tr3,tr4);
		ti4_1 = F788_7998(Current);
		((EIF_TYPED_VALUE *)tr3+2)->it_i4 = ti4_1;
		
		{
			static EIF_TYPE_INDEX typarr0[] = {915,792,0xFFF9,4,841,874,874,874,874,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr6 = RTLNRF(typres0, (EIF_POINTER) __A412_326_3_4_5_6, (EIF_POINTER) _A412_326_3_4_5_6, (EIF_POINTER)(F790_8075),tr3, 1, 4);
		}
		tr7 = *(EIF_REFERENCE *)(RTCV(loc1) + _REFACS_42_);
		tr7 = RTOSCF(8403,F793_8403,(RTCV(tr7)));
		F793_8399(RTCV(tr1), tp1, tr2, tr6, tr7, (EIF_BOOLEAN) 0);
	}
	RTLE;
	return Result;
}

/* {EV_WIDGET_ACTION_SEQUENCES_IMP}.create_file_drop_actions */
EIF_REFERENCE F171_3755 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {731,0xFFF9,1,841,614,925,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0, 731, _OBJSIZ_9_2_0_2_0_0_0_0_);
	}
	F726_6713(RTCV(tr1));
	RTLE;
	return (EIF_REFERENCE) tr1;
}

void EIF_Minit226 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
