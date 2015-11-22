/*
 * Code for class ACTION_SEQUENCE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ac992.h"
#include "eif_built_in.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ACTION_SEQUENCE}.default_create */
void F726_6713 (EIF_REFERENCE Current)
{
	GTCX
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	
	RTGC;
	F701_6579(Current, ((EIF_INTEGER_32) 0L));
	*(EIF_INTEGER_32 *)(Current + O5509[Dtype(Current)-725]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTLE;
}

/* {ACTION_SEQUENCE}.on_item_added_at */
void F726_6714 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(F701_6600(Current) == ((EIF_INTEGER_32) 1L))) {
		tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) != NULL);
	}
	if (tb1) {
		tr1 = F726_6733(Current);
		F726_6735(Current, tr1);
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.on_item_removed_at */
void F726_6715 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	
	RTGC;
	tb1 = '\0';
	if ((EIF_BOOLEAN)(F701_6600(Current) == ((EIF_INTEGER_32) 0L))) {
		tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_8_) != NULL);
	}
	if (tb1) {
		tr1 = F726_6734(Current);
		F726_6735(Current, tr1);
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.call */
void F726_6716 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc5);
	RTLR(6,loc4);
	RTLR(7,loc6);
	RTLR(8,loc3);
	RTLR(9,arg1);
	
	RTGC;
	if ((EIF_BOOLEAN) (F701_6600(Current) > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = F701_6600(Current);
		{
			static EIF_TYPE_INDEX typarr0[] = {754,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = eif_final_id(Y4246,Y4246_gen_type,Dftype(Current),354);
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			tr1 = RTLNSP2(eif_non_attached_type(typres0),EO_REF,ti4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
			RT_SPECIAL_COUNT(tr1) = 0;
		}
		loc1 = (EIF_REFERENCE) tr1;
		tr1 = F701_6582(Current);
		ti4_2 = F701_6600(Current);
		/* INLINED CODE (SPECIAL.copy_data) */
		sp_copy_data(loc1,tr1,((EIF_INTEGER_32) 0L),((EIF_INTEGER_32) 0L),ti4_2);
		RT_SPECIAL_COUNT(loc1) = eif_max_int32(RT_SPECIAL_COUNT(loc1), ((EIF_INTEGER_32) 0L) + ti4_2);
		/* END INLINED CODE */
		;
		loc5 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			tb2 = F407_5127(RTCV(loc5));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			loc4 = F701_6582(RTCV(loc5));
			loc2 = F701_6600(RTCV(loc5));
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				if ((EIF_BOOLEAN)(loc7 == loc2)) break;
				/* INLINED CODE (SPECIAL.item) */
				tr1 = *((EIF_REFERENCE *)loc4 + (loc7));
				/* END INLINED CODE */
				tr1 = tr1;
				F719_6689(Current, tr1);
				loc7++;
			}
			(FUNCTION_CAST(void, (EIF_REFERENCE)) R4205[Dtype(loc5)-404])(RTCV(loc5));
		}
		switch (*(EIF_INTEGER_32 *)(Current + O5509[Dtype(Current)-725])) {
			case 1L:
				loc6 = F726_6736(Current);
				F649_6064(RTCV(loc6), (EIF_BOOLEAN) 0);
				loc2 = (EIF_INTEGER_32) eif_builtin_SPECIAL_count (loc1);
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				for (;;) {
					tb1 = '\01';
					if (!(EIF_BOOLEAN)(loc7 == loc2)) {
						tb2 = F649_6062(RTCV(loc6));
						tb1 = tb2;
					}
					if (tb1) break;
					/* INLINED CODE (SPECIAL.item) */
					tr1 = *((EIF_REFERENCE *)loc1 + (loc7));
					/* END INLINED CODE */
					loc3 = tr1;
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_2_))(
							*(EIF_POINTER *)(RTCV(loc3)+ _PTROFF_4_2_0_3_0_1_),
							*(EIF_REFERENCE *)(RTCV(loc3) + _REFACS_1_), arg1);
						;
					}
					loc7++;
				}
				F649_6066(RTCV(loc6));
				break;
			case 2L:
				tr1 = F726_6738(Current);
				F651_6078(RTCV(tr1), arg1);
				break;
			case 3L:
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.extend_kamikaze */
void F726_6717 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	
	RTGC;
	F719_6679(Current, arg1);
	F726_6731(Current, arg1);
	RTLE;
}

/* {ACTION_SEQUENCE}.block */
void F726_6721 (EIF_REFERENCE Current)
{
	GTCX
	
	
	*(EIF_INTEGER_32 *)(Current + O5509[Dtype(Current)-725]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
}

/* {ACTION_SEQUENCE}.resume */
void F726_6723 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	*(EIF_INTEGER_32 *)(Current + O5509[dtype-725]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	loc1 = F726_6738(Current);
	for (;;) {
		tb1 = F407_5127(RTCV(loc1));
		if (tb1) break;
		tr1 = F651_6076(RTCV(loc1));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5500[dtype-725])(Current, tr1);
		F645_6050(RTCV(loc1));
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.prune */
void F726_6730 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	
	RTGC;
	F701_6630(Current, arg1);
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		if (*(EIF_BOOLEAN *)(Current + O4154[Dtype(Current)-243])) {
			loc1 = *(EIF_BOOLEAN *)(RTCV(loc2) + O4154[Dtype(loc2)-243]);
			F244_4452(RTCV(loc2));
			F701_6609(RTCV(loc2));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4203[Dtype(loc2)-404])(RTCV(loc2), arg1);
			if ((EIF_BOOLEAN) !loc1) {
				F244_4453(RTCV(loc2));
			}
		} else {
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4203[Dtype(loc2)-404])(RTCV(loc2), arg1);
		}
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.prune_when_called */
void F726_6731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	
	RTGC;
	tr1 = F726_6743(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4201[Dtype(tr1)-404])(RTCV(tr1), arg1);
	RTLE;
}

/* {ACTION_SEQUENCE}.not_empty_actions */
EIF_REFERENCE F726_6733 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {700,915,0,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F701_6579(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.empty_actions */
EIF_REFERENCE F726_6734 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {700,915,0,0xFFF9,0,841,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F701_6579(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.call_action_list */
void F726_6735 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	
	RTGC;
	tb1 = F407_5127(RTCV(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		loc1 = (EIF_REFERENCE) eif_builtin_ANY_twin (arg1);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			ti4_1 = F701_6600(RTCV(loc1));
			if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
			tr1 = F701_6585(RTCV(loc1), loc2);
			if ((EIF_BOOLEAN)(tr1 != NULL)) {
				tr1 = F701_6584(RTCV(loc1), loc2);
				(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_4_2_0_3_0_0_))(
					*(EIF_POINTER *)(RTCV(tr1)+ _PTROFF_4_2_0_3_0_1_),
					*(EIF_REFERENCE *)(RTCV(tr1) + _REFACS_1_));
				;
			}
			loc2++;
		}
	}
	RTLE;
}

/* {ACTION_SEQUENCE}.is_aborted_stack */
EIF_REFERENCE F726_6736 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {648,859,0xFFFF};
			EIF_TYPE_INDEX typres0;
			static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
			
			typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSMART(eif_non_attached_type(typres0));
		}
		F646_6017(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.is_aborted_stack_internal */
EIF_REFERENCE F726_6737 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {ACTION_SEQUENCE}.call_buffer */
EIF_REFERENCE F726_6738 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		tr1 = RTLNSMART(eif_non_attached_type(eif_final_id(Y5522,Y5522_gen_type,Dftype(Current),725)));
		F651_6075(RTCV(tr1));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.call_buffer_internal */
EIF_REFERENCE F726_6739 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {ACTION_SEQUENCE}.kamikazes */
EIF_REFERENCE F726_6743 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	
	RTGC;
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		{
			static EIF_TYPE_INDEX typarr0[] = {700,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[1] = eif_final_id(Y4246,Y4246_gen_type,Dftype(Current),354);
			
			typres0 = eif_compound_id(Dftype(Current), typarr0);
			tr1 = RTLNS(typres0, 700, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		F701_6579(RTCV(tr1), ((EIF_INTEGER_32) 0L));
		loc1 = (EIF_REFERENCE) tr1;
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc1;
	}
	RTLE;
	return (EIF_REFERENCE) loc1;
}

/* {ACTION_SEQUENCE}.kamikazes_internal */
EIF_REFERENCE F726_6744 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {ACTION_SEQUENCE}.not_empty_actions_internal */
EIF_REFERENCE F726_6745 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {ACTION_SEQUENCE}.empty_actions_internal */
EIF_REFERENCE F726_6746 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


void EIF_Minit992 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
