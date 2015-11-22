/*
 * Code for class ACTIVE_LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ac1288.h"

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
void F721_6696 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y5493,Y5493_gen_type,dftype,720)));
	F726_6713(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O5493[dtype-720]) = (EIF_REFERENCE) tr1;
	tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y5494,Y5494_gen_type,dftype,720)));
	F726_6713(RTCV(tr1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O5494[dtype-720]) = (EIF_REFERENCE) tr1;
	F719_6674(Current);
	RTLE;
}

/* {ACTIVE_LIST}.add_actions */
EIF_REFERENCE F721_6698 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O5493[Dtype(Current) - 720]);
}


/* {ACTIVE_LIST}.remove_actions */
EIF_REFERENCE F721_6699 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O5494[Dtype(Current) - 720]);
}


/* {ACTIVE_LIST}.on_item_added_at */
void F721_6700 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O5474[dtype-700]);
	tr1 = *(EIF_REFERENCE *)(Current + O5493[dtype-720]);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = eif_final_id(Y4246,Y4246_gen_type,Dftype(Current),354);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
	RTAR(tr2,arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R5064[dtype-584])(Current, loc1);
	RTLE;
}

/* {ACTIVE_LIST}.on_item_removed_at */
void F721_6701 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	
	RTGC;
	loc1 = *(EIF_INTEGER_32 *)(Current + O5474[dtype-700]);
	tr1 = *(EIF_REFERENCE *)(Current + O5494[dtype-720]);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,841,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[3] = eif_final_id(Y4246,Y4246_gen_type,Dftype(Current),354);
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr2 = RTLNTS(typres0, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = arg1;
	RTAR(tr2,arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[Dtype(tr1)-725])(RTCV(tr1), tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R5064[dtype-584])(Current, loc1);
	RTLE;
}

void EIF_Minit1288 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
