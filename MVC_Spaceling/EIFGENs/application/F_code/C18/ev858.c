/*
 * Code for class EV_ITEM_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev858.h"
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

/* {EV_ITEM_IMP}.call_button_event_actions */
void F1165_16457 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_REAL_64 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,8,841,874,874,874,862,862,862,874,874,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0, 9, 1);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_i4 = arg2;
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg3;
	((EIF_TYPED_VALUE *)tr1+3)->it_i4 = arg4;
	((EIF_TYPED_VALUE *)tr1+4)->it_r8 = arg5;
	((EIF_TYPED_VALUE *)tr1+5)->it_r8 = arg6;
	((EIF_TYPED_VALUE *)tr1+6)->it_r8 = arg7;
	((EIF_TYPED_VALUE *)tr1+7)->it_i4 = arg8;
	((EIF_TYPED_VALUE *)tr1+8)->it_i4 = arg9;
	loc1 = (EIF_REFERENCE) tr1;
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) GDK_BUTTON_PRESS)) {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3535[dtype-178]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O3535[dtype-178]);
			F732_6800(RTCV(tr1), loc1);
		}
	} else {
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3538[dtype-178]) != NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current + O3538[dtype-178]);
			F732_6800(RTCV(tr1), loc1);
		}
	}
	RTLE;
}

/* {EV_ITEM_IMP}.parent_imp */
EIF_REFERENCE F1165_16458 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) *(EIF_REFERENCE *)(Current + O12382[Dtype(Current)-1164]);
}

/* {EV_ITEM_IMP}.destroy */
void F1165_16459 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	tb1 = '\0';
	tr1 = F1165_16458(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O10149[dtype-1028]) != NULL);
	}
	if (tb1) {
		F1057_13817(RTCV(loc1), *(EIF_REFERENCE *)(Current + O10149[dtype-1028]));
	}
	F1079_14137(Current);
	RTLE;
}

/* {EV_ITEM_IMP}.item_parent_imp */
EIF_REFERENCE F1165_16460 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O12382[Dtype(Current) - 1164]);
}


/* {EV_ITEM_IMP}.set_item_parent_imp */
void F1165_16461 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O12382[Dtype(Current)-1164]) = (EIF_REFERENCE) arg1;
}

/* {EV_ITEM_IMP}.update_for_pick_and_drop */
void F1165_16462 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	
	
	RTGC;
}

/* {EV_ITEM_IMP}.interface */
static EIF_REFERENCE F1165_16463_body (EIF_REFERENCE Current)
{
	GTCX
	
	
	RTGC;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1165_16463 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]);
	if (!r) {
		if (RTAT(eif_final_id(Y10149,Y10149_gen_type,Dftype(Current),1028))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r = (F1165_16463_body (Current));
			*(EIF_REFERENCE *)(Current + O10149[Dtype(Current) - 1028]) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit858 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
