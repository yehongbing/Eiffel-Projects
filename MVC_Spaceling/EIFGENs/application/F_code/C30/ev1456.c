/*
 * Code for class EV_ACTIVE_LIST [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ev1456.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_ACTIVE_LIST}.default_create */
void F724_6703 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y5495,Y5495_gen_type,dftype,722)));
	F726_6713(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y5496,Y5496_gen_type,dftype,722)));
	F726_6713(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	F722_6696(Current);
	RTLE;
}

/* {EV_ACTIVE_LIST}.on_item_added_at */
void F724_6705 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = eif_final_id(Y4246,Y4246_gen_type,dftype,354);
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = eif_final_id(Y4246,Y4246_gen_type,dftype,354);
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {EV_ACTIVE_LIST}.on_item_removed_at */
void F724_6706 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = eif_final_id(Y4246,Y4246_gen_type,dftype,354);
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = eif_final_id(Y4246,Y4246_gen_type,dftype,354);
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_2_0_0_) = (EIF_INTEGER_32) loc1;
	RTLE;
}

/* {EV_ACTIVE_LIST}.internal_add_actions */
EIF_REFERENCE F724_6707 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EV_ACTIVE_LIST}.internal_remove_actions */
EIF_REFERENCE F724_6708 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


void EIF_Minit1456 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
