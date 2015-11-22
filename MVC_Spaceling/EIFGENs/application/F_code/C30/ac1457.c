/*
 * Code for class ACTIVE_LIST [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ac1457.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ACTIVE_LIST}.default_create */
void F722_6696 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y5493,Y5493_gen_type,dftype,720)));
	F726_6713(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y5494,Y5494_gen_type,dftype,720)));
	F726_6713(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	F720_6674(Current);
	RTLE;
}

/* {ACTIVE_LIST}.add_actions */
EIF_REFERENCE F722_6698 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {ACTIVE_LIST}.remove_actions */
EIF_REFERENCE F722_6699 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {ACTIVE_LIST}.on_item_added_at */
void F722_6700 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O5474[Dtype(Current)-700]);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = eif_final_id(Y4246,Y4246_gen_type,Dftype(Current),354);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
	F704_6613(Current, loc1);
	RTLE;
}

/* {ACTIVE_LIST}.on_item_removed_at */
void F722_6701 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O5474[Dtype(Current)-700]);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = eif_final_id(Y4246,Y4246_gen_type,Dftype(Current),354);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
	F704_6613(Current, loc1);
	RTLE;
}

void EIF_Minit1457 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
